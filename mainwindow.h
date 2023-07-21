
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Repository/repository.h"

#include <PersonTabelModel.h>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
//#include <RemindModel.h>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static inline Repository repo;

private slots:
    void on_btnEdit_clicked();
    void on_tvPerson_doubleClicked(const QModelIndex &index);
    void on_btnAdd_clicked();
    void on_btnDelete_clicked();
//    void closeDlg(int result);

private:
    Ui::MainWindow *ui;
//    RemindModel *model;
    QSqlTableModel *model;
//    QSqlQueryModel *model;
//    QSqlRelationalTableModel *model;
//    PersonTabelModel *model;
};

#endif // MAINWINDOW_H
