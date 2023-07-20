#include "dlgperson.h"
#include "ui_dlgperson.h"

#include <MainWindow.h>

DlgPerson::DlgPerson(QSqlRecord* rec, int currenRow, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgPerson)
{
//    model = mod;
    ui->setupUi(this);
    record = rec;

    person.id = record->value("id").toInt();
    person.p_lastname = record->value("p_lastname").toString();
    person.p_name = record->value("p_name").toString();
    person.p_midname = record->value("p_midname").toString();
    person.p_profession = record->value("p_profession").toString();
    person.p_snils = record->value("p_snils").toString();
    person.p_birthday = record->value("p_birthday").toDate();
    person.p_startdate = record->value("p_startdate").toDate();
    person.p_spec_class = record->value("p_spec_class").toInt();
    person.p_spec_date =  record->value("p_spec_date").toDate();


//    QSqlRecord rec = mod->record();

//    record->setValue(0, "12345");

    ui->leLastName->setText(record->value(1).toString());
    ui->leName->setText(rec->value(2).toString());
    ui->leMidName->setText(rec->value(3).toString());
    ui->deBirth->setDate(person.p_birthday);
    ui->leProf->setText(person.p_profession);
    ui->deStart->setDate(person.p_startdate);
    ui->leSNILS->setText(person.p_snils);
    ui->leSpecClass->setText(QString::number(person.p_spec_class));
    ui->deSpecClass->setDate(person.p_spec_date);

}

DlgPerson::DlgPerson(QSqlTableModel *mod, int index, QWidget *parent) : QDialog(parent), ui(new Ui::DlgPerson)
{
    model = mod;
    ui->setupUi(this);

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

    mapper->setCurrentIndex(index);

}

DlgPerson::~DlgPerson()
{
    delete ui;
}



void DlgPerson::on_buttonBox_accepted()
{

    // сохранение в базе данных
    mapper->submit();
    model->submitAll();

    //model->database().commit();

//    person.p_lastname = ui->leLastName->text();
//    person.p_name = ui->leName->text();
//    person.p_midname = ui->leMidName->text();
//    person.p_profession = ui->leProf->text();
//    person.p_snils = ui->leSNILS->text();
//    person.p_spec_class = ui->lineEdit->text().toInt();
//    person.p_birthday = ui->deBirth->date();   //QDate::fromString(var, "yyyy-MM-dd");
//    person.p_startdate = ui->deStart->date();
//    person.p_spec_date = ui->dateEdit->date();

//    record->setValue("p_lastname", person.p_lastname);
//    record->setValue("p_name", person.p_name);
//    record->setValue("p_midname", person.p_midname);
//    record->setValue("p_profession", person.p_profession);
//    record->setValue("p_snils", person.p_snils);
//    record->setValue("p_birthday", person.p_birthday.toString("yyyy-MM-dd"));
//    record->setValue("p_startdate", person.p_startdate.toString("yyyy-MM-dd"));
//    record->setValue("p_snils", person.p_snils);
//    record->setValue("p_spec_date", person.p_spec_date.toString("yyyy-MM-dd"));
//    record->setValue("p_spec_class", person.p_spec_class);

//    MainWindow::repo.UpdatePerson(person);

}

