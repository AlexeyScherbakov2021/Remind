#ifndef IREPOSITORY_H
#define IREPOSITORY_H

#include "Model/Person.h"

#include <QList>
#include <QSqlRecord>



class IRepository
{
public:
    IRepository() {};
    virtual void GetListPerson(QList<QSqlRecord>*) = 0;
    virtual int AddPerson(Person &pers) = 0;
    virtual int GetLastMed(int idPerson) = 0;
    virtual int GetListMed(int idPerson) = 0;

};

#endif // IREPOSITORY_H
