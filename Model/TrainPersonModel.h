#ifndef TRAINPERSONMODEL_H
#define TRAINPERSONMODEL_H

#include <QDate>
#include <QString>

enum TrainKind { LaborProtect = 1, FireSafety, IndustrSafety};

class TrainPersonModel
{
public:
    int id;
    QString name;
    int period;
    TrainKind kind;
    int idTrainPerson;
    QDate date;

};


#endif // TRAINPERSONMODEL_H
