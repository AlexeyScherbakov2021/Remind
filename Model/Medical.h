#ifndef MEDICAL_H
#define MEDICAL_H

#include "Harmfact.h"

#include <QString>
#include <QDate>


class Medical
{
public:
    int id;
    int idPerson;
    int Period;
    QDate dateInspect;
};

#endif // MEDICAL_H
