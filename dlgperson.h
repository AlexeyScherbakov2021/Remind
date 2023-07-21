#ifndef DLGPERSON_H
#define DLGPERSON_H

#include <PersonTabelModel.h>
#include <QAbstractButton>
#include <QDataWidgetMapper>
#include <QDialog>
#include <QSqlTableModel>
#include "trainpersonwork.h"

#include <Model/Medical.h>
//#include <RemindModel.h>

namespace Ui {
class DlgPerson;
}

class DlgPerson : public QDialog
{
    Q_OBJECT

public:
    explicit DlgPerson(QSqlTableModel* model, int index, QWidget *parent = nullptr);
    ~DlgPerson();

private slots:
    void on_DlgPerson_finished(int result);
    void on_pbAddMed_clicked();

    void on_pbAddPsyh_clicked();

private:
    Ui::DlgPerson *ui;
    QSqlRecord* record;
    QSqlTableModel *model;
    QDataWidgetMapper *mapper;
    Person person;
    Medical med;
    Medical psyh;
    int idPerson;
    int curRow;

    TrainPersonWork *train;
//    QSqlQueryModel modelOT;
};


#endif // DLGPERSON_H
