#include "persontabelmodel.h"

#include <QList>

PersonTabelModel::PersonTabelModel(QObject *parent)
    : QAbstractTableModel(parent)
{
    repo = new Repository();
//    repo->GetListPerson(&ListPerson);

}

//QVariant PersonTabelModel::headerData(int section, Qt::Orientation orientation, int role) const
//{
//    if(role != Qt::DisplayRole)
//        return QVariant();


//    QString header;
//    switch(section)
//    {
//    case 0:
//        header = "ID";
//        break;
//    case 1:
//        header = "Фамилия";
//        break;
//    case 2:
//        header = "Имя";
//        break;
//    case 3:
//        header = "Отчество";
//        break;
//    case 4:
//        header = "Должность";
//        break;
//    case 5:
//        header = "День рождения";
//        break;


//    }

//    return QVariant(header);
//}

bool PersonTabelModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role)
{
    if (value != headerData(section, orientation, role)) {
        emit headerDataChanged(orientation, section, section);
        return true;
    }
    return false;
}


int PersonTabelModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return ListPerson.size();
}

int PersonTabelModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return 6;
}

//bool PersonTabelModel::hasChildren(const QModelIndex &parent) const
//{
//    return false;
//}

//bool PersonTabelModel::canFetchMore(const QModelIndex &parent) const
//{
//    return false;
//}

//void PersonTabelModel::fetchMore(const QModelIndex &parent)
//{
//}

QVariant PersonTabelModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if(index.row() < 0 || index.row() > ListPerson.size())
        return QVariant();


    if(role == Qt::DisplayRole || role == Qt::EditRole)
    {
        QVariant var;
        Person person = ListPerson.at(index.row());
        switch (index.column())
        {

        case 0:
            var = person.id;
            break;
        case 1:
            var = person.p_lastname;
            break;
        case 2:
            var = person.p_name;
            break;
        case 3:
            var = person.p_midname;
            break;
        case 4:
            var = person.p_profession;
            break;
        case 5:
            var = person.p_birthday;
            break;
        case 6:
            var = person.p_snils;
            break;
        default:

            break;
        }

        return var;
    }

    return QVariant();

}

bool PersonTabelModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (data(index, role) != value) {
        switch(index.column())
        {
        case 0:
            ListPerson[index.row()].id = value.toInt();
            break;
        case 1:
            ListPerson[index.row()].p_lastname = value.toString();
            break;
        default:
            return false;
        }

        emit dataChanged(index, index, {role});
        return true;
    }
    return false;
}

Qt::ItemFlags PersonTabelModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable; // FIXME: Implement me!
}

bool PersonTabelModel::insertRows(int row, int count, const QModelIndex &parent)
{
    beginInsertRows(parent, row, row + count - 1);
    Person* person = new Person();
    ListPerson.push_back(*person);
    endInsertRows();
    return true;
}

//bool PersonTabelModel::insertColumns(int column, int count, const QModelIndex &parent)
//{
//    beginInsertColumns(parent, column, column + count - 1);
//    endInsertColumns();
//    return true;
//}

bool PersonTabelModel::removeRows(int row, int count, const QModelIndex &parent)
{
    if(row < 0)
        return false;

    beginRemoveRows(parent, row, row + count - 1);
    ListPerson.remove(row, count);
    endRemoveRows();
    return true;
}

//bool PersonTabelModel::removeColumns(int column, int count, const QModelIndex &parent)
//{
//    beginRemoveColumns(parent, column, column + count - 1);
//    endRemoveColumns();
//    return true;
//}
