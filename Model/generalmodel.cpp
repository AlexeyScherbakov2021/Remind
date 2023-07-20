#include "generalmodel.h"

template<class T>
GeneralModel<T>::GeneralModel()
{

}

template<class T>
void GeneralModel<T>::AddItem(T newItem)
{
    listItems.push_back(newItem);
}

template<class T>
void GeneralModel<T>::RemoveItem(T item)
{
    listItems.remove(item);
}

template<class T>
void GeneralModel<T>::setColumn(QStringList cols)
{
    columns = cols;
}

//template<class T>
//QVariant GeneralModel<T>::getData(int row, int col)
//{
//    QVariant var;


//    return var;
//}
