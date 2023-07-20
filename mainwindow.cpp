#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dlgperson.h"
#include <PersonDelegate.h>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QSqlTableModel sql(repo.getDb());

//    model = new QSqlTableModel();
//    model->setTable("person");
//    model->select();

//    model = new RemindModel();
//    QStringList col;
//    col << "00" << "11" << "22";
//    model->setColumn(col);
//    model->selectSql(repo, KindSql::SelectPerson);

//    model = new QSqlQueryModel();
//    model->setQuery("select p_lastname,p_name,p_midname,p_profession,p_birthday,p_startdate,p_snils from person");

    model = new QSqlTableModel();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("person");
    model->select();

    ui->tvPerson->setModel(model);
    ui->tvPerson->verticalHeader()->setDefaultSectionSize(18);
    ui->tvPerson->setColumnHidden(model->fieldIndex("id"), true);
    ui->tvPerson->setColumnHidden(model->fieldIndex("p_birthday"), true);
    ui->tvPerson->setColumnHidden(model->fieldIndex("p_spec_class"), true);
    ui->tvPerson->setColumnHidden(model->fieldIndex("p_spec_date"), true);
    ui->tvPerson->setColumnHidden(model->fieldIndex("p_snils"), true);

    ui->tvPerson->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model->setHeaderData(model->fieldIndex("p_lastname"), Qt::Horizontal, "Фамилия");
    model->setHeaderData(model->fieldIndex("p_name"), Qt::Horizontal, "Имя");
    model->setHeaderData(model->fieldIndex("p_midname"), Qt::Horizontal, "Отчество");
    model->setHeaderData(model->fieldIndex("p_profession"), Qt::Horizontal, "Должность");
    model->setHeaderData(model->fieldIndex("p_startdate"), Qt::Horizontal, "Дата приема");
//    model->setHeaderData(4, Qt::Horizontal, "Дата рождения");
//    model->setHeaderData(6, Qt::Horizontal, "СНИЛС");

    ui->tvPerson->setItemDelegateForColumn(model->fieldIndex("p_startdate"), new PersonDelegate(ui->tvPerson));
    //ui->tvPerson->setItemDelegate(new PersonDelegate);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnEdit_clicked()
{
    QModelIndex index = ui->tvPerson->currentIndex();
    on_tvPerson_doubleClicked(index);
}


void MainWindow::on_tvPerson_doubleClicked(const QModelIndex &index)
{
    //QSqlRecord* rec = model->getRecord(index.row());
    DlgPerson* dlg = new DlgPerson(model, index.row(), this);
    dlg->setModal(true);
    dlg->show();
}


void MainWindow::on_btnAdd_clicked()
{
    QModelIndex index = ui->tvPerson->currentIndex();
    int maxRow = model->rowCount();
    model->insertRow( maxRow);
    model->setData(model->index(maxRow,1), "Новая Фамилия");

    DlgPerson* dlg = new DlgPerson(model, maxRow, this);
    dlg->setModal(true);
    dlg->show();

}



void MainWindow::on_btnDelete_clicked()
{
    QModelIndex index = ui->tvPerson->currentIndex();
    int row = index.row();
    QString LastName = model->data(model->index(row, 1)).toString();

    QMessageBox* msg = new QMessageBox(QMessageBox::Question, "Предупреждение",
            "Удалить " + LastName + "?", QMessageBox::Yes | QMessageBox::No);

    int res = msg->exec();
    delete msg;

    if(res == QMessageBox::Yes)
    {
        // удаление записи
        model->removeRow(row);
        model->submitAll();
    }


}

