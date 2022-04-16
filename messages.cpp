#include "messages.h"
#include <iostream>
using namespace std;
Messages::Messages()
{

}

Messages::Messages(QString titre,QString text ,bool read)
{
    this->titre=titre;
    this->text=text;
    this->read=read;
}

bool Messages::ajouter()
{
    QSqlQuery query;
    QSqlQuery test;
        int count=0;
        int last_id=0;
    test.prepare("select count (*) from Messages");
    test.exec();
    if(test.next())
    count=test.value(0).toInt();
    if (count==0)
    last_id=0;
    else
       {
    query.exec("SELECT * FROM MESSAGES ORDER BY ID_M DESC");
    if  (query.next())
    last_id =query.value(0).toInt();
    last_id++;
    }
    QSqlQuery query1;
    query1.prepare("insert into MESSAGES (id_m,titre,text,read)" "values (:id_m, :titre, :text, :read)");
    query1.bindValue(":id_m",last_id);
    query1.bindValue(":titre",titre);
    query1.bindValue(":text",text);
    query1.bindValue(":read",read);
    return query1.exec();
}


QSqlQueryModel * Messages::afficher()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    QString query;

        query="select titre from messages order by read asc";

    model->setQuery(query);
    return model;
}

QString  Messages::fetch_msg(QString titre)
{
    QSqlQuery query;
    QString msg;
    QString request="select text from messages where titre like '" +titre+"'";
        query.prepare(request);
        query.exec();
        if  (query.next())
        msg =query.value(0).toString();
        return msg;
}

bool Messages::supprimer(QString titre)
{
    QSqlQuery query;
    query.prepare("Delete from messages where titre= :titre");
    query.bindValue(":titre",titre);
    return query.exec();
}
