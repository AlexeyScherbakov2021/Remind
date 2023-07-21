#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "IRepository.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QtSql>
#include <Model/Medical.h>
#include <Model/TrainPersonModel.h>


enum KindSql {SelectPerson, SelectMed};


class Repository// : public IRepository
{
public:
    Repository();
//    void GetListPerson(QList<QSqlRecord> &rec);
//    Person* GetPerson(int Id);
//    int AddPerson(Person &pers);
    int GetLastMed(int idPerson, Medical* med);
    int GetListMed(int idPerson);
    bool addMed(int idPerson, int period, QDate &date);

    bool addPsyh(int idPerson, int period, QDate &date);
    int GetLastPsyh(int idPerson, Medical* med);

    QStringList getListHarms();
    bool getListTrain(int idPerson, TrainKind kind, QList<TrainPersonModel> &list);
    //    QSqlRecord getRecordPerson();

    QVariant getParam(const QString &paramName);

    QSqlDatabase getDb() {return db;} ;

//private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
};

#endif // REPOSITORY_H
