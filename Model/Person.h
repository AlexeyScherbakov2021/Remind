#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QDate>

class Person
{
public:
    int id;
    QString p_lastname;
    QString p_name;
    QString p_midname;
    QString p_profession;
    QDate p_birthday;
    QDate p_startdate;
    QString p_snils;
    int p_spec_class;
    QDate p_spec_date;

//    QList<Harmfact> ListHarm;

};

#endif // PERSON_H
