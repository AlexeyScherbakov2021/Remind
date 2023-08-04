#include "dlgperson.h"
#include "ui_dlgperson.h"
#include <MainWindow.h>
#include <SelectDateDialog.h>


DlgPerson::DlgPerson(QSqlTableModel *mod, int currenRow, QWidget *parent) : QDialog(parent), ui(new Ui::DlgPerson)
{
    model = mod;
    curRow = currenRow;
    ui->setupUi(this);

    ui->tabWidget->setStyleSheet( "background-color: #f0f0f0;" );

    mapper = new QDataWidgetMapper();
    mapper->setSubmitPolicy(QDataWidgetMapper::SubmitPolicy::ManualSubmit);
    mapper->setModel(model);
    mapper->addMapping(ui->leLastName, model->fieldIndex("p_lastname"));
    mapper->addMapping(ui->leName, model->fieldIndex("p_name"));
    mapper->addMapping(ui->leMidName, model->fieldIndex("p_midname"));
    mapper->addMapping(ui->leProf, model->fieldIndex("p_profession"));
    mapper->addMapping(ui->deBirth, model->fieldIndex("p_birthday"));
    mapper->addMapping(ui->deStart, model->fieldIndex("p_startdate"));
    mapper->addMapping(ui->leSNILS, model->fieldIndex("p_snils"));
    mapper->addMapping(ui->leSpecClass, model->fieldIndex("p_spec_class"));
    mapper->addMapping(ui->deSpecClass, model->fieldIndex("p_spec_date"));

    mapper->setCurrentIndex(currenRow);

    idPerson = model->data(model->index(currenRow, 0)).toInt();
    if(idPerson > 0)
    {
        MainWindow::repo.GetLastMed(idPerson, &med);
        ui->leNextMed->setText(med.nextInscect.toString("dd.MM.yyyy"));
        ui->leDateMed->setText(med.dateInspect.toString("dd.MM.yyyy"));
        ui->lePeriodMed->setText(QString::number(med.Period));

        MainWindow::repo.GetLastPsyh(idPerson, &psyh);
        ui->leNextDatePsyh->setText(psyh.nextInscect.toString("dd.MM.yyyy"));
        ui->leDatePsyh->setText(psyh.dateInspect.toString("dd.MM.yyyy"));
        ui->lePeriodPsyh->setText(QString::number(psyh.Period));

    }

    train = new TrainPersonWork(ui->tvOT, idPerson, TrainKind::LaborProtect);

//    MainWindow::repo.getDb().open();

//    modelOT.setQuery("select t.t_name,t.period,tp.tp_date from trainlist t "
//                     "join (select tp_id_train,max(tp_date) as tp_date from trainperson group by tp_id_train ) tp on tp.tp_id_train=t.id");

//    if(modelOT.lastError().isValid())
//    {
//        qDebug() << modelOT.lastError();
//    }
//    ui->tvOT->setModel(&modelOT);

//    MainWindow::repo.getDb().close();

//    modelHarm.setTable("harmfact");
//    modelHarm.select();
//    ui->listHarm->setModel(modelHarm);

}



DlgPerson::~DlgPerson()
{
    delete ui;
}


//-----------------------------------------------------------------------------------
// событие закрытия диалогового окна
//-----------------------------------------------------------------------------------
void DlgPerson::on_DlgPerson_finished(int result)
{
    if(result == 1)
    {
        // сохранение в базе данных
        mapper->submit();
        model->submitAll();

    }
    else if(idPerson == 0)
    {
        model->removeRow(curRow);
    }
}


//-----------------------------------------------------------------------------------
// проведение медосмотра
//-----------------------------------------------------------------------------------
void DlgPerson::on_pbAddMed_clicked()
{
    int period = MainWindow::repo.getParam("period_med").toInt();

    if(period == 0) period = 2;

    SelectDateDialog selecDlg;
    if(med.nextInscect.isValid())
        selecDlg.setDate(med.nextInscect);
    else
        selecDlg.setDate(QDate::currentDate());

    if(selecDlg.exec() == QDialog::Accepted)
    {
        QDate newDate = selecDlg.getDate();
        if(MainWindow::repo.addMed(idPerson, period, newDate))
        {
            med.dateInspect = newDate;
            med.nextInscect = med.dateInspect.addYears(period);

            ui->leNextMed->setText(med.nextInscect.toString("dd.MM.yyyy"));
            ui->leDateMed->setText(med.dateInspect.toString("dd.MM.yyyy"));
            ui->lePeriodMed->setText(QString::number(period));
        }
    }
}


//-----------------------------------------------------------------------------------
// проведение психосмотра
//-----------------------------------------------------------------------------------
void DlgPerson::on_pbAddPsyh_clicked()
{
    int period = MainWindow::repo.getParam("period_psyh").toInt();

    if(period == 0) period = 5;

    SelectDateDialog selecDlg;
    if(psyh.nextInscect.isValid())
        selecDlg.setDate(psyh.nextInscect);
    else
        selecDlg.setDate(QDate::currentDate());

    if(selecDlg.exec() == QDialog::Accepted)
    {
        QDate newDate = selecDlg.getDate();
        if(MainWindow::repo.addPsyh(idPerson, period, newDate))
        {
            psyh.dateInspect = newDate;
            psyh.nextInscect = psyh.dateInspect.addYears(period);

            ui->leNextDatePsyh->setText(psyh.nextInscect.toString("dd.MM.yyyy"));
            ui->leDatePsyh->setText(psyh.dateInspect.toString("dd.MM.yyyy"));
            ui->lePeriodPsyh->setText(QString::number(period));
        }
    }

}

