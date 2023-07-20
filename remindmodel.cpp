#include "remindmodel.h"
#include "mainwindow.h"

RemindModel::RemindModel(QObject *parent)
    : QAbstractTableModel(parent)
{
//    MainWindow::repo->GetListPerson(&record);
}

QVariant RemindModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        QVariant var = columns.at(section);
        return columns.at(section);
    }

    return QVariant();
}

//bool RemindModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role)
//{
//    if (value != headerData(section, orientation, role)) {
//        // FIXME: Implement me!
//        emit headerDataChanged(orientation, section, section);
//        return true;
//    }
//    return false;
//}


int RemindModel::rowCount(const QModelIndex &parent) const
{
//    if (parent.isValid())
//        return 0;

    return listRecord.count();

}

int RemindModel::columnCount(const QModelIndex &parent) const
{
//    if (parent.isValid())
//        return 0;

    return columns.count();
}

QVariant RemindModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();


    if(role == Qt::DisplayRole || role == Qt::EditRole)
    {
        QSqlRecord rec = listRecord.at(index.row());
        if(!rec.isEmpty())
        {
//            QVariant var = rec.value(index.column());

            return rec.value(index.column());
        }

    }


    return QVariant();
}

bool RemindModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (data(index, role) != value) {


        QSqlRecord rec = listRecord.at(index.row());
        rec.setValue(index.column(), value);

        emit dataChanged(index, index, {role});

        QVariant var = rec.value(index.column());
        return true;
    }
    return false;
}

Qt::ItemFlags RemindModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

//    auto flag = QAbstractItemModel::flags(index);
//    if(isEdit)
//        flag |= Qt::ItemIsEditable;

//    return flag;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}


//------------------------------------------------------------------------------------------
// вставка строки
//------------------------------------------------------------------------------------------
bool RemindModel::insertRows(int row, int count, const QModelIndex &parent)
{
    beginInsertRows(parent, row, row + count - 1);

    QSqlRecord rec = MainWindow::repo.getRecordPerson();

    listRecord.push_back(rec);

    endInsertRows();
    return true;
}

//bool RemindModel::insertColumns(int column, int count, const QModelIndex &parent)
//{
//    beginInsertColumns(parent, column, column + count - 1);
//    // FIXME: Implement me!
//    endInsertColumns();
//    return true;
//}

bool RemindModel::removeRows(int row, int count, const QModelIndex &parent)
{
    beginRemoveRows(parent, row, row + count - 1);

    endRemoveRows();
    return true;
}

//bool RemindModel::removeColumns(int column, int count, const QModelIndex &parent)
//{
//    beginRemoveColumns(parent, column, column + count - 1);

//    endRemoveColumns();
//    return true;
//}

void RemindModel::setColumn(QStringList col)
{
    columns = col;
}

void RemindModel::selectSql(Repository repo, KindSql kind)
{
    listRecord.clear();
    repo.getListRecord(kind, listRecord);
}

//void RemindModel::setEdit(bool editable)
//{
//    isEdit = editable;
//}

QSqlRecord* RemindModel::getRecord(int row)
{
//    listRecord[row].setValue(0, "3333");

    return &listRecord[row];
}
