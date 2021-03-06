#include "chantiers.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>
#include <QObject>
#include <QDate>

chantiers::chantiers()
{
    id_c=0;
    emplacement="";
    surface=0 ;
        description="";
        plan="";


}

chantiers::chantiers(int id_c , QString emplacement, int surface, QString description  ,QDate date_debut,QDate date_fin,int id_e,QString plan)
{
    this->id_c=id_c ;
    this->emplacement=emplacement ;
    this->surface=surface  ;
   this->description=description ;
    this->date_debut=date_debut ;
    this->date_fin=date_fin ;
    this->id_e=id_e ;
    this->plan=plan ;


}

int chantiers::getid_c()
{
    return id_c ;
}
QString chantiers::getemplacement()
{
    return emplacement ;
}
int chantiers::getsurface()
{
    return surface ;
}
QString chantiers::getdescription()
{
    return description ;
}
QDate chantiers::getdate_debut()
{
    return date_debut ;
}
QDate chantiers::getdate_fin ()
{
    return date_fin ;
}


void chantiers::setid_c(int id_c)
{
   this->id_c=id_c ;
}
void chantiers::setemplacement(QString emplacement)
{
   this->emplacement=emplacement ;
}
void chantiers::setsurface(int surface)
{
   this->surface=surface ;
}
void chantiers::setdescription(QString description)
{
   this->description=description ;
}


bool chantiers::ajouter(){
    int jour =0 ;
    chantiers c ;
    jour = (surface * 30 )/120 ;
    date_fin=date_debut.addDays(jour) ;
  QSqlQuery query;
  QString id_string  =QString::number(id_c);
  QString surfacef  =QString::number(surface);
  QString id_ee  =QString::number(id_e);
        query.prepare("INSERT INTO CHANTIERS (ID_C, EMPLACEMENT,SURFACE,DESCRIPTION,DATE_DEBUT,DATE_FIN,ID_E,PLAN) "
                      "VALUES (:ID_C, :EMPLACEMENT,:SURFACE,:DESCRIPTION,:DATE_DEBUT,:DATE_FIN,:ID_E,:PLAN)");
        query.bindValue(":ID_C", id_string);
     query.bindValue(":EMPLACEMENT",emplacement);
     query.bindValue(":SURFACE", surfacef);
          query.bindValue(":DESCRIPTION", description);
     query.bindValue(":DATE_DEBUT", date_debut);
     query.bindValue(":DATE_FIN", date_fin);
      query.bindValue(":ID_E", id_ee);
      query.bindValue(":PLAN", plan);

  return  query.exec();
}
bool chantiers::supprimer(int id_c){
          QSqlQuery query;
          query.prepare(" Delete from CHANTIERS where ID_C=:ID_C") ;
          query.bindValue(0, id_c);

    return  query.exec();
}
QSqlQueryModel* chantiers::afficher()
{
QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM CHANTIERS");
      model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_C"));
      model->setHeaderData(1, Qt::Horizontal,QObject::tr("EMPLACEMENT"));
       model->setHeaderData(2, Qt::Horizontal,QObject::tr("SURFACE"));
       model->setHeaderData(3, Qt::Horizontal,QObject::tr("DESCRIPTION"));
       model->setHeaderData(4, Qt::Horizontal,QObject::tr("DATE_DEBUT"));
       model->setHeaderData(5, Qt::Horizontal,QObject::tr("DATE_FIN"));
       model->setHeaderData(5, Qt::Horizontal,QObject::tr("ID_E"));
       model->setHeaderData(5, Qt::Horizontal,QObject::tr("PLAN"));
       return model ;
}
bool chantiers::modifier()
{
  QSqlQuery query;
        query.prepare("UPDATE CHANTIERS SET ID_C=:ID_C, EMPLACEMENT=:EMPLACEMENT,SURFACE=:SURFACE,DESCRIPTION=:DESCRIPTION,DATE_DEBUT=:DATE_DEBUT,DATE_FIN=:DATE_FIN,ID_E=:ID_E,PLAN=:PLAN "
                      "WHERE ID_C=:ID_C ");
        query.bindValue(":ID_C",id_c);
     query.bindValue(":EMPLACEMENT",emplacement);
     query.bindValue(":SURFACE", surface);
          query.bindValue(":DESCRIPTION", description);
     query.bindValue(":DATE_DEBUT", date_debut);
     query.bindValue(":DATE_FIN", date_fin);
     query.bindValue(":ID_E", id_e);
     query.bindValue(":PLAN", plan);
query.exec();
 bool test=true ;
  return  test ;
}
QSqlQueryModel * chantiers::chercher(QString cher)
{
    QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select * from CHANTIERS where upper(EMPLACEMENT) LIKE upper('%"+cher+"%') OR upper(DESCRIPTION) LIKE upper('%"+cher+"%') OR SURFACE LIKE upper('%"+cher+"%')");
return model;
}

QSqlQueryModel * chantiers::tri_emplacement()
{
 QSqlQueryModel * model= new QSqlQueryModel();
 model->setQuery("select * from CHANTIERS order by upper(EMPLACEMENT)");
 return model;
}
QSqlQueryModel * chantiers::tri_date()
{
 QSqlQueryModel * model= new QSqlQueryModel();
 model->setQuery("select * from CHANTIERS order by DATE_DEBUT");
 return model;
}
QSqlQueryModel * chantiers::tri_surface()
{
 QSqlQueryModel * model= new QSqlQueryModel();
 model->setQuery("select * from CHANTIERS order by SURFACE");
 return model;
}
