#include "selectdatedialog.h"
#include "ui_selectdatedialog.h"

SelectDateDialog::SelectDateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectDateDialog)
{
    ui->setupUi(this);
}

SelectDateDialog::~SelectDateDialog()
{
    delete ui;
}

QDate SelectDateDialog::getDate()
{
    return ui->dateEdit->date();
}

void SelectDateDialog::setDate(QDate date)
{
    ui->dateEdit->setDate(date);
}
