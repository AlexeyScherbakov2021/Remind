/********************************************************************************
** Form generated from reading UI file 'dlgperson.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPERSON_H
#define UI_DLGPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgPerson
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leLastName;
    QLabel *label_2;
    QLineEdit *leName;
    QLabel *label_3;
    QLineEdit *leMidName;
    QLabel *label_4;
    QLineEdit *leProf;
    QLabel *label_5;
    QDateEdit *deBirth;
    QLabel *label_6;
    QDateEdit *deStart;
    QLabel *label_7;
    QLineEdit *leSNILS;
    QLabel *label_8;
    QLineEdit *leSpecClass;
    QLabel *label_9;
    QDateEdit *deSpecClass;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabMed;
    QListWidget *listWidget;
    QLabel *label_10;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QLabel *label_12;
    QLineEdit *lineEdit_2;
    QLabel *label_13;
    QLineEdit *lineEdit_3;
    QLabel *label_14;
    QLineEdit *lineEdit_4;
    QGroupBox *formGroupBox_2;
    QFormLayout *formLayout_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tabOT;
    QWidget *tabPB;
    QWidget *tabPrB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DlgPerson)
    {
        if (DlgPerson->objectName().isEmpty())
            DlgPerson->setObjectName("DlgPerson");
        DlgPerson->resize(954, 544);
        verticalLayout = new QVBoxLayout(DlgPerson);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(DlgPerson);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setStrikeOut(false);
        groupBox->setFont(font);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(8, 15, -1, -1);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leLastName = new QLineEdit(groupBox);
        leLastName->setObjectName("leLastName");

        formLayout->setWidget(0, QFormLayout::FieldRole, leLastName);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leName = new QLineEdit(groupBox);
        leName->setObjectName("leName");

        formLayout->setWidget(1, QFormLayout::FieldRole, leName);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        leMidName = new QLineEdit(groupBox);
        leMidName->setObjectName("leMidName");

        formLayout->setWidget(2, QFormLayout::FieldRole, leMidName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        leProf = new QLineEdit(groupBox);
        leProf->setObjectName("leProf");

        formLayout->setWidget(3, QFormLayout::FieldRole, leProf);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        deBirth = new QDateEdit(groupBox);
        deBirth->setObjectName("deBirth");
        deBirth->setCalendarPopup(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, deBirth);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        deStart = new QDateEdit(groupBox);
        deStart->setObjectName("deStart");
        deStart->setCalendarPopup(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, deStart);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        leSNILS = new QLineEdit(groupBox);
        leSNILS->setObjectName("leSNILS");

        formLayout->setWidget(6, QFormLayout::FieldRole, leSNILS);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        leSpecClass = new QLineEdit(groupBox);
        leSpecClass->setObjectName("leSpecClass");

        formLayout->setWidget(7, QFormLayout::FieldRole, leSpecClass);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        deSpecClass = new QDateEdit(groupBox);
        deSpecClass->setObjectName("deSpecClass");
        deSpecClass->setCalendarPopup(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, deSpecClass);


        horizontalLayout->addWidget(groupBox);

        verticalGroupBox = new QGroupBox(DlgPerson);
        verticalGroupBox->setObjectName("verticalGroupBox");
        verticalGroupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(verticalGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(8, 8, 8, 8);
        tabWidget = new QTabWidget(verticalGroupBox);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabMed = new QWidget();
        tabMed->setObjectName("tabMed");
        listWidget = new QListWidget(tabMed);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 200, 471, 171));
        label_10 = new QLabel(tabMed);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 170, 100, 16));
        formGroupBox = new QGroupBox(tabMed);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(10, 20, 211, 129));
        formLayout_2 = new QFormLayout(formGroupBox);
        formLayout_2->setObjectName("formLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_5 = new QPushButton(formGroupBox);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(formGroupBox);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_12 = new QLabel(formGroupBox);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_12);

        lineEdit_2 = new QLineEdit(formGroupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_13 = new QLabel(formGroupBox);
        label_13->setObjectName("label_13");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        lineEdit_3 = new QLineEdit(formGroupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_14 = new QLabel(formGroupBox);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_14);

        lineEdit_4 = new QLineEdit(formGroupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setReadOnly(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        formGroupBox_2 = new QGroupBox(tabMed);
        formGroupBox_2->setObjectName("formGroupBox_2");
        formGroupBox_2->setGeometry(QRect(240, 20, 241, 131));
        formGroupBox_2->setCheckable(true);
        formGroupBox_2->setChecked(true);
        formLayout_3 = new QFormLayout(formGroupBox_2);
        formLayout_3->setObjectName("formLayout_3");
        label_16 = new QLabel(formGroupBox_2);
        label_16->setObjectName("label_16");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(formGroupBox_2);
        label_17->setObjectName("label_17");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formGroupBox_2);
        label_18->setObjectName("label_18");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_18);

        lineEdit_6 = new QLineEdit(formGroupBox_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setReadOnly(true);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        lineEdit_5 = new QLineEdit(formGroupBox_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setReadOnly(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_7 = new QLineEdit(formGroupBox_2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setReadOnly(true);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, lineEdit_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_6 = new QPushButton(formGroupBox_2);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(formGroupBox_2);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_3->addWidget(pushButton_4);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        pushButton = new QPushButton(tabMed);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(129, 167, 31, 24));
        pushButton_2 = new QPushButton(tabMed);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(168, 167, 31, 24));
        tabWidget->addTab(tabMed, QString());
        tabOT = new QWidget();
        tabOT->setObjectName("tabOT");
        tabWidget->addTab(tabOT, QString());
        tabPB = new QWidget();
        tabPB->setObjectName("tabPB");
        tabWidget->addTab(tabPB, QString());
        tabPrB = new QWidget();
        tabPrB->setObjectName("tabPrB");
        tabWidget->addTab(tabPrB, QString());

        verticalLayout_3->addWidget(tabWidget);


        horizontalLayout->addWidget(verticalGroupBox);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DlgPerson);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DlgPerson);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DlgPerson, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DlgPerson, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgPerson);
    } // setupUi

    void retranslateUi(QDialog *DlgPerson)
    {
        DlgPerson->setWindowTitle(QCoreApplication::translate("DlgPerson", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DlgPerson", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("DlgPerson", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("DlgPerson", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("DlgPerson", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("DlgPerson", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("DlgPerson", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("DlgPerson", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\270\320\265\320\274\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("DlgPerson", "\320\241\320\235\320\230\320\233\320\241", nullptr));
        leSNILS->setInputMask(QCoreApplication::translate("DlgPerson", "000-000-000 00", nullptr));
        label_8->setText(QCoreApplication::translate("DlgPerson", "\320\232\320\273\320\260\321\201\321\201 \321\203\321\201\320\273\320\276\320\262\320\270\320\271 \321\202\321\200\321\203\320\264\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("DlgPerson", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        verticalGroupBox->setTitle(QCoreApplication::translate("DlgPerson", "\320\237\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("DlgPerson", "\320\222\321\200\320\265\320\264\320\275\321\213\320\265 \321\204\320\260\320\272\321\202\320\276\321\200\321\213", nullptr));
        formGroupBox->setTitle(QCoreApplication::translate("DlgPerson", "\320\234\320\265\320\264\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        pushButton_5->setText(QCoreApplication::translate("DlgPerson", "...", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DlgPerson", "+", nullptr));
        label_12->setText(QCoreApplication::translate("DlgPerson", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_13->setText(QCoreApplication::translate("DlgPerson", "\320\237\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_14->setText(QCoreApplication::translate("DlgPerson", "\320\241\320\273\320\265\320\264\321\203\321\211\320\270\320\271", nullptr));
        formGroupBox_2->setTitle(QCoreApplication::translate("DlgPerson", "\320\237\321\201\320\270\321\205\320\270\320\260\321\202\321\200\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\276\321\201\320\262\320\270\320\264\320\265\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_16->setText(QCoreApplication::translate("DlgPerson", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_17->setText(QCoreApplication::translate("DlgPerson", "\320\237\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_18->setText(QCoreApplication::translate("DlgPerson", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265", nullptr));
        pushButton_6->setText(QCoreApplication::translate("DlgPerson", "...", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DlgPerson", "+", nullptr));
        pushButton->setText(QCoreApplication::translate("DlgPerson", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DlgPerson", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMed), QCoreApplication::translate("DlgPerson", "\320\234\320\265\320\264\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabOT), QCoreApplication::translate("DlgPerson", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265 \320\277\320\276 \320\236\320\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPB), QCoreApplication::translate("DlgPerson", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265 \320\277\320\276 \320\237\320\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPrB), QCoreApplication::translate("DlgPerson", "\320\237\321\200\320\276\320\274\321\213\321\210\320\273\320\265\320\275\320\275\320\260\321\217 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgPerson: public Ui_DlgPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPERSON_H
