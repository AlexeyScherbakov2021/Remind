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
    QDate nextInscect;
};

#endif // MEDICAL_H
