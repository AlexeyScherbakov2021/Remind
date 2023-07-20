#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "IRepository.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QtSql>


enum KindSql {SelectPerson, SelectMed};


class Repository// : public IRepository
{
public:
    Repository();
    void GetListPerson(QList<QSqlRecord> &rec);
    Person* GetPerson(int Id);
    int AddPerson(Person &pers);
    int GetLastMed(int idPerson);
    int GetListMed(int idPerson);
    bool UpdatePerson(Person &pers);
    QSqlRecord getRecordPerson();

    int getListRecord(KindSql kind, QList<QSqlRecord> &rec);

    QSqlDatabase getDb() {return db;} ;

//private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
};

#endif // REPOSITORY_H
