#include "trainpersonwork.h"
#include "mainwindow.h"

#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QToolButton>
#include <QVBoxLayout>
//#include <QObject>

TrainPersonWork::TrainPersonWork(QTableWidget *tableWidget, int idPers, TrainKind knd) :
    tv(tableWidget), idPerson(idPers), kind(knd)
{
    tv->setColumnCount(5);
    getListTrain();
    QObject::connect( tv->horizontalHeader(), &QHeaderView::sectionResized, tv, &QTableWidget::resizeRowsToContents );
}

void TrainPersonWork::getListTrain()
{
    while(tv->rowCount() > 0)
        tv->removeRow(0);

    listTrain.clear();
    MainWindow::repo.getListTrain(idPerson, kind, listTrain);

    tv->setRowCount(listTrain.count());
    tv->setColumnWidth(0, 340);

//    for(QList<TrainPersonModel>::iterator it = listTrain.begin(); it < listTrain.end(); it++ )
//    foreach (TrainPersonModel it, listTrain)

    for(int i = 0; i < listTrain.count(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(listTrain[i].name);
        tv->setItem(i, 0, item);

        item = new QTableWidgetItem(listTrain[i].date.toString("dd.MM.yyyy"));
        item->setTextAlignment(Qt::AlignHCenter | Qt::AlignCenter);
        tv->setItem(i,1, item);

        item = new QTableWidgetItem(QString::number(listTrain[i].period));
        item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        tv->setItem(i,2, item);

        QDate dateSignal = listTrain[i].date.addYears(listTrain[i].period);
        item = new QTableWidgetItem(dateSignal.toString("dd.MM.yyyy"));
        item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        tv->setItem(i, 3, item);


        QWidget *widg = new QWidget(tv);
        QHBoxLayout *lay = new QHBoxLayout(widg);
        widg->setLayout(lay);

        QToolButton *butt = new QToolButton(widg);
        butt->setText("+");
        lay->insertWidget(butt);
        //butt->setLayout(lay);
        //butt->setGeometry(4,4,40,20);

        QToolButton *butt2 = new QToolButton(widg);
        butt2->setText("...");
        //butt2->setLayout(lay);
        //butt2->setGeometry(4,4,40,20);
        //lay->addChildWidget(butt2);

        tv->setCellWidget(i, 4, widg);

    }

    tv->resizeRowsToContents();
    tv->resizeColumnToContents(1);
    tv->resizeColumnToContents(2);
    tv->resizeColumnToContents(3);

}
