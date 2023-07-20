#ifndef PERSONDELEGATE_H
#define PERSONDELEGATE_H

#include <QStyledItemDelegate>



class PersonDelegate : public QStyledItemDelegate
{
     Q_OBJECT
public:
     PersonDelegate(QWidget *parent = 0) : QStyledItemDelegate(parent){};


    // QAbstractItemDelegate interface
public:
    // QStyledItemDelegate interface
public:
    QString displayText(const QVariant &value, const QLocale &locale) const;
};

#endif // PERSONDELEGATE_H
