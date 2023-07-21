/********************************************************************************
** Form generated from reading UI file 'selectdatedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDATEDIALOG_H
#define UI_SELECTDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectDateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QDateEdit *dateEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectDateDialog)
    {
        if (SelectDateDialog->objectName().isEmpty())
            SelectDateDialog->setObjectName("SelectDateDialog");
        SelectDateDialog->setWindowModality(Qt::NonModal);
        SelectDateDialog->resize(255, 150);
        SelectDateDialog->setModal(false);
        verticalLayout = new QVBoxLayout(SelectDateDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        frame = new QFrame(SelectDateDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        dateEdit = new QDateEdit(frame);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(20, 30, 161, 25));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        dateEdit->setFont(font);
        dateEdit->setAutoFillBackground(false);
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(SelectDateDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectDateDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SelectDateDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SelectDateDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SelectDateDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectDateDialog)
    {
        SelectDateDialog->setWindowTitle(QCoreApplication::translate("SelectDateDialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\321\202\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDateDialog: public Ui_SelectDateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDATEDIALOG_H
