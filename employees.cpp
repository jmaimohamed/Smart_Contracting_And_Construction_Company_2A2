#include "employees.h"
Employees::Employees()
{
    this->id=0;
    this->nom="";
    this->date_emb=QDate::currentDate();
    this->salaire=0;
    this->role="";
    this->login="";
    this->password="";
}
Employees::Employees(int id,QString nom,QDate date_emb ,int salaire,QString role,QString login,QString password)
{
    this->id=id;
    this->nom=nom;
    this->date_emb=date_emb;
    this->salaire=salaire;
    this->role=role;
    this->login=login;
    this->password=password;

}
bool Employees::ajouter()
{
QSqlQuery query;
QString res = QString::number(id);
query.prepare("insert into EMPLOYEES (id_e, nom_e ,date_emb,salaire,role,login,password)" "values (:id, :nom , :date_emb, :salaire, :role, :login, :password)");
query.bindValue(":id",res);
query.bindValue(":nom",nom);
query.bindValue(":date_emb",date_emb);
query.bindValue(":salaire",salaire);
query.bindValue(":role",role);
query.bindValue(":login",login);
query.bindValue(":password",password);
return query.exec();
}

bool Employees::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Delete from employees where ID_E= :id");
    query.bindValue(":id",res);
    return query.exec();
}

QSqlQueryModel * Employees::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from employees");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_E"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_E"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DATE_EMB"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ROLE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("LOGIN"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD"));
    return model;
}

bool Employees::modifier(){
    bool test=false;

    QSqlQuery query;
      query.prepare("UPDATE EMPLOYEES SET ID_E=:ID_E, NOM_E=:NOM_E, SALAIRE=:SALAIRE, ROLE=:ROLE, LOGIN=:LOGIN, PASSWORD=:PASSWORD "
                    "WHERE ID_E=:ID_E");
      query.bindValue(":ID_E",id);
      query.bindValue(":NOM_E",nom);
      query.bindValue(":SALAIRE", salaire);
      query.bindValue(":ROLE", role);
      query.bindValue(":LOGIN", login);
      query.bindValue(":PASSWORD", password);
      query.exec();
      test =true;
    return test ;
}
