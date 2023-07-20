#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include "Person.h"
#include "generalmodel.h"
#include <QVariant>


class PersonModel : public GeneralModel<Person>
{
public:
    //PersonModel(){};

    QVariant getData(int row, int col) override;

};

#endif // PERSONMODEL_H
