#ifndef DLGPERSON_H
#define DLGPERSON_H

#include <PersonTabelModel.h>
#include <QAbstractButton>
#include <QDataWidgetMapper>
#include <QDialog>
#include <QSqlTableModel>
#include <RemindModel.h>

namespace Ui {
class DlgPerson;
}

class DlgPerson : public QDialog
{
    Q_OBJECT

public:
    explicit DlgPerson(QSqlRecord* rec, int index, QWidget *parent = nullptr);
    explicit DlgPerson(QSqlTableModel* model, int index, QWidget *parent = nullptr);
    ~DlgPerson();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DlgPerson *ui;
//    RemindModel* model;
    QSqlRecord* record;
    QSqlTableModel *model;
    QDataWidgetMapper *mapper;
    Person person;
};

#endif // DLGPERSON_H
