#ifndef TRAINPERSONWORK_H
#define TRAINPERSONWORK_H

#include <QTableWidget>
#include <Model/TrainPersonModel.h>


class TrainPersonWork
{
public:
    TrainPersonWork(QTableWidget *tableWidget, int idPers, TrainKind knd);

private:
    QTableWidget *tv;
    int idPerson;
    TrainKind kind;
    QList<TrainPersonModel> listTrain;

    void getListTrain();
};

#endif // TRAINPERSONWORK_H
