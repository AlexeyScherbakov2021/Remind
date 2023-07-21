#include "trainpersonwork.h"
#include "mainwindow.h"

TrainPersonWork::TrainPersonWork(QTableWidget *tableWidget, int idPers, TrainKind knd) :
    tv(tableWidget), idPerson(idPers), kind(knd)
{
    tv->setColumnCount(5);
    getListTrain();
}

void TrainPersonWork::getListTrain()
{
    while(tv->rowCount() > 0)
        tv->removeRow(0);

    listTrain.clear();
    MainWindow::repo.getListTrain(idPerson, kind, listTrain);

    tv->setRowCount(listTrain.count());
//    for(QList<TrainPersonModel>::iterator it = listTrain.begin(); it < listTrain.end(); it++ )
//    foreach (TrainPersonModel it, listTrain)
    for(int i = 0; i < listTrain.count(); i++)
    {

        QTableWidgetItem *item = new QTableWidgetItem(listTrain[i].name);
        tv->setItem(i,0, item);
        item = new QTableWidgetItem(listTrain[i].date.toString());
        tv->setItem(i,1, item);
    }

}
