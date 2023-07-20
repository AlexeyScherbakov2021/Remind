#ifndef GENERALMODEL_H
#define GENERALMODEL_H

#include <QList>
#include <QVariant>


template<class T>
class GeneralModel
{
protected:
    QStringList columns;
    QList<T> listItems;

public:
    GeneralModel();

    void AddItem(T newItem);
    void RemoveItem(T item);
    void setColumn(QStringList cols);

    virtual QVariant getData(int row, int col) = 0;
};

#endif // GENERALMODEL_H
