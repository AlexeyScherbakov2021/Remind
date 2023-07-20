#include "personmodel.h"


//PersonModel::PersonModel()
//{

//}




QVariant PersonModel::getData(int row, int col)
{
    QVariant var;

    Person pers = listItems.at(row);

    switch(col)
    {
    case 0:
        var = pers.id;
        break;
    case 1:
        var = pers.p_lastname;
        break;
    case 2:
        var = pers.p_name;
        break;
    case 3:
        var = pers.p_midname;
        break;
    case 4:
        var = pers.p_profession;
        break;
    case 5:
        var = pers.p_birthday;
        break;
    case 6:
        var = pers.p_startdate;
        break;
    case 7:
        var = pers.p_snils;
        break;
    case 8:
        var = pers.p_spec_class;
        break;
    case 9:
        var = pers.p_spec_date;
        break;
    }

    return var;
}
