#include "repository.h"
#include "Model/Medical.h"

Repository::Repository()
{
    db.setDatabaseName("d:\\Work\\QT\\Remind\\base.db");
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
    }

    db.close();

}


//-----------------------------------------------------------------------------------
// получение списка персонала
//-----------------------------------------------------------------------------------
//void Repository::GetListPerson(QList<QSqlRecord> &listPerson)
//{

//    if(!db.open())
//    {
//        qDebug() << "Cannot open database: " << db.lastError();
//        return;
//    }

//    QSqlQuery sql(db);
//    sql.exec("select id,p_lastname,p_name,p_midname,p_profession,p_birthday,p_snils,p_startdate,p_spec_class,p_spec_date from person");
//    while(sql.next())
//    {
//        QSqlRecord rec = sql.record();
//        QSqlRecord rec1 = sql.record();
//        QSqlRecord rec2 = sql.record();

//        listPerson.push_back(sql.record());

////        Person* person = new Person();
////        QSqlRecord record = sql.record();
////        person->id = record.value(0).toInt();
////        person->p_lastname = record.value(1).toString();
////        person->id = sql.value(0).toInt();
////        person->p_lastname = sql.value(1).toString();
////        person->p_name = sql.value(2).toString();
////        person->p_midname = sql.value(3).toString();
////        person->p_profession = sql.value(4).toString();
////        person->p_birthday = sql.value(5).toDate();
////        person->p_snils = sql.value(6).toString();
////        listPerson->push_back(*person);
//    }
//    db.close();


//    //return listPerson;
//}

//-----------------------------------------------------------------------------------
// получение сотрудника по Id
//-----------------------------------------------------------------------------------
//Person* Repository::GetPerson(int Id)
//{
//    Person* person = nullptr;

//    if(!db.open())
//    {
//        qDebug() << "Cannot open database: " << db.lastError();
//        return person;
//    }

//    QSqlQuery sql(db);
//    sql.prepare("select id,p_lastname,p_name,p_midname,p_profession,p_birthday,p_snils,p_startdate,p_spec_class,p_spec_date from person where id=:id");
//    sql.bindValue(":id", Id);
//    if(sql.next())
//    {
//        Person* person = new Person();
//        QSqlRecord record = sql.record();
//        person->id = record.value(0).toInt();
//        person->p_lastname = record.value(1).toString();
//        person->id = sql.value(0).toInt();
//        person->p_lastname = sql.value(1).toString();
//        person->p_name = sql.value(2).toString();
//        person->p_midname = sql.value(3).toString();
//        person->p_profession = sql.value(4).toString();
//        person->p_birthday = sql.value(5).toDate();
//        person->p_snils = sql.value(6).toString();
//        person->p_startdate = sql.value(7).toDate();
//        person->p_spec_class = sql.value(8).toInt();
//        person->p_spec_date = sql.value(9).toDate();
//    }

//    db.close();
//    return person;
//}

//-----------------------------------------------------------------------------------
// обновление записи персонала
//-----------------------------------------------------------------------------------
//bool Repository::UpdatePerson(Person &pers)
//{
//    bool res = false;

//    if(!db.open())
//    {
//        qDebug() << "Cannot open database: " << db.lastError();
//        return -1;
//    }

//    QSqlQuery sql(db);

////    sql.prepare("update person set p_lastname=:p_lastname,p_name=:p_name,p_midname=:p_midname,p_profession=:p_profession"
////                "p_birthday=:p_birthday,p_snils=:p_snils,p_spec_class=:p_spec_class,p_spec_date=:p_spec_date,p_startdate=:p_startdate where id=:id"
////                );
//    sql.prepare("update person set p_lastname=:p_lastname,p_name=:p_name,p_midname=:p_midname,p_profession=:p_profession,"
//                "p_birthday=:p_birthday,p_snils=:p_snils,p_spec_class=:p_spec_class,p_spec_date=:p_spec_date,p_startdate=:p_startdate where id=:id"
//                );
//    sql.bindValue(":id", pers.id);
//    sql.bindValue(":p_lastname", pers.p_lastname);
//    sql.bindValue(":p_name", pers.p_name);
//    sql.bindValue(":p_midname", pers.p_midname);
//    sql.bindValue(":p_profession", pers.p_profession);
//    sql.bindValue(":p_birthday", pers.p_birthday.toString("yyyy-MM-dd"));
//    sql.bindValue(":p_snils", pers.p_snils);
//    sql.bindValue(":p_startdate", pers.p_startdate.toString("yyyy-MM-dd"));
//    sql.bindValue(":p_spec_class", pers.p_spec_class);
//    sql.bindValue(":p_spec_date", pers.p_spec_date.toString("yyyy-MM-dd"));
//    res = sql.exec();

//    QSqlError err = db.lastError();
//    QString s = err.text();
////    db.close();
////    db.commit();
//    db.close();

//    return res;
//}


//QSqlRecord Repository::getRecordPerson()
//{
//    if(!db.open())
//    {
//        qDebug() << "Cannot open database: " << db.lastError();
//        return QSqlRecord();
//    }
//    return db.record("person");
//    db.close();
//}



//int Repository::getListRecord(KindSql kind, QList<QSqlRecord> &rec)
//{
//    rec.clear();

//    switch(kind)
//    {
//    case KindSql::SelectPerson:
//        GetListPerson(rec);
//        break;


//    }
//}




//-----------------------------------------------------------------------------------
// добавление записи персонала
//-----------------------------------------------------------------------------------
//int Repository::AddPerson(Person &pers)
//{
//    int res = -1;

//    if(!db.open())
//    {
//        qDebug() << "Cannot open database: " << db.lastError();
//        return -1;
//    }

//    QSqlQuery sql(db);

//    sql.prepare("insert into person (p_lastname,p_name,p_midname,p_profession,p_birthday,p_snils,p_startdate,p_spec_class,p_spec_date) "
//                "values (:p_lastname,:p_name,:p_midname,:p_profession,:p_birthday,:p_snils,:p_startdate,:p_spec_class,:p_spec_date)");
//    sql.bindValue(":p_lastname", pers.p_lastname);
//    sql.bindValue(":p_name", pers.p_name);
//    sql.bindValue(":p_midname", pers.p_midname);
//    sql.bindValue(":p_profession", pers.p_profession);
//    sql.bindValue(":p_birthday", pers.p_birthday);
//    sql.bindValue(":p_snils", pers.p_snils);
//    sql.bindValue(":p_startdate", pers.p_startdate);
//    sql.bindValue(":p_spec_class", pers.p_spec_class);
//    sql.bindValue(":p_spec_date", pers.p_spec_date);
//    sql.exec();
//    res = sql.lastInsertId().toInt();

//    db.close();
//    pers.id = res;
//}

//-----------------------------------------------------------------------------------
// получение последней записи медосмотра
//-----------------------------------------------------------------------------------
int Repository::GetLastMed(int idPerson,  Medical* med)
{
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return -1;
    }

    QSqlQuery sql(db);
    sql.prepare("select id,m_period,m_date from medical where m_id_person=:m_id_person order by m_date desc LIMIT 1");
    sql.bindValue(":m_id_person", idPerson);
    sql.exec();

    sql.next();
    med->id = sql.value("id").toInt();
    med->Period = sql.value("m_period").toInt();
    med->dateInspect = sql.value("m_date").toDate();
    med->nextInscect = med->dateInspect.addYears(med->Period);
    med->idPerson = idPerson;
    db.close();

    return 0;
}


//-----------------------------------------------------------------------------------
// получение списка медосмотра для сотрудника
//-----------------------------------------------------------------------------------
int Repository::GetListMed(int idPerson)
{

    return 0;
}


//-----------------------------------------------------------------------------------
// добавление медосмотра
//-----------------------------------------------------------------------------------
bool Repository::addMed(int idPerson, int period, QDate &date)
{
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return false;
    }

    QSqlQuery sql(db);
    sql.prepare("insert into medical (m_id_person,m_period,m_date) values (:m_id_person,:m_period,:m_date)");
    sql.bindValue(":m_id_person", idPerson);
    sql.bindValue(":m_period", period);
    sql.bindValue(":m_date", date.toString("yyyy-MM-dd"));
    bool res = sql.exec();

    db.close();

    return res;

}

//-----------------------------------------------------------------------------------
// добавление психосмотра
//-----------------------------------------------------------------------------------
bool Repository::addPsyh(int idPerson, int period, QDate &date)
{
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return false;
    }

    QSqlQuery sql(db);
    sql.prepare("insert into psyh (ps_id_person,ps_period,ps_date) values (:ps_id_person,:ps_period,:ps_date)");
    sql.bindValue(":ps_id_person", idPerson);
    sql.bindValue(":ps_period", period);
    sql.bindValue(":ps_date", date.toString("yyyy-MM-dd"));
    bool res = sql.exec();

    db.close();

    return res;

}

//-----------------------------------------------------------------------------------
// получение последней записи психосмотра
//-----------------------------------------------------------------------------------
int Repository::GetLastPsyh(int idPerson, Medical *med)
{
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return -1;
    }

    QSqlQuery sql(db);
    sql.prepare("select id,ps_period,ps_date from psyh where ps_id_person=:ps_id_person order by ps_date desc LIMIT 1");
    sql.bindValue(":ps_id_person", idPerson);
    bool res = sql.exec();

    qDebug() << sql.lastError().text();

    sql.next();
    med->id = sql.value("id").toInt();
    med->Period = sql.value("ps_period").toInt();
    med->dateInspect = sql.value("ps_date").toDate();
    med->nextInscect = med->dateInspect.addYears(med->Period);
    med->idPerson = idPerson;
    db.close();

    return 0;

}

//-----------------------------------------------------------------------------------
// получение списка вредностей
//-----------------------------------------------------------------------------------
QStringList Repository::getListHarms()
{
    QStringList listHarm;
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return QStringList();
    }

    QSqlQuery sql(db);
    sql.prepare("select hf_name from harmfact");
    sql.exec();

    while(sql.next())
    {
        QString s = sql.value("hf_name").toString();
        listHarm.push_back(s);

    }
    db.close();

    return listHarm;

}



//-----------------------------------------------------------------------------------
// получение списка последних обучений для сотрудника
//-----------------------------------------------------------------------------------
bool Repository::getListTrain(int idPerson, TrainKind kind, QList<TrainPersonModel> &list)
{
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return false;
    }

    QSqlQuery sql(db);
    sql.prepare("select  t.t_name,t.t_period,tp.tp_id_train,tp.tp_date from trainlist t "
                "join (select tp_id_train,tp_id_person ,max(tp_date) as tp_date "
                "from trainperson "
                "group by tp_id_train) tp on tp.tp_id_train=t.id "
                "where tp.tp_id_person=:tp_id_person");
    sql.bindValue(":tp_id_person", idPerson);
    sql.exec();

    while(sql.next())
    {
        TrainPersonModel mod; // = new TrainPersonModel();
        mod.name = sql.value("t_name").toString();
        mod.period = sql.value("t_period").toInt();
        mod.idTrainPerson = sql.value("tp_id_train").toInt();
        mod.date = sql.value("tp_date").toDate();
        list.push_back(mod);

    }
    db.close();

    return true;

}


//-----------------------------------------------------------------------------------
// получение параметра по имени
//-----------------------------------------------------------------------------------
QVariant Repository::getParam(const QString &paramName)
{
    QVariant var;
    if(!db.open())
    {
        qDebug() << "Cannot open database: " << db.lastError();
        return QVariant();
    }

    QSqlQuery sql(db);
    sql.prepare("select s_value from settings where s_name=:s_name");
    sql.bindValue(":s_name", paramName);
    sql.exec();

    sql.next();
    var = sql.value("s_value");
    db.close();

    return var;

}





//

