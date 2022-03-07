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
     date_debut=QDate::currentDate() ;
      date_fin=QDate::currentDate() ;


}


chantiers::chantiers(int id_c , QString emplacement, int surface, QString description  ,QDate date_debut,QDate date_fin)
{
    this->id_c=id_c ;
    this->emplacement=emplacement ;
    this->surface=surface  ;
   this->description=description ;
    this->date_debut=date_debut ;
    this->date_fin=date_fin ;


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

  QSqlQuery query;
  QString id_string  =QString::number(id_c);
  QString surfacef  =QString::number(surface);
        query.prepare("INSERT INTO CHANTIERS (ID_C, EMPLACEMENT,SURFACE,DESCRIPTION,DATE_DEBUT,DATE_FIN) "
                      "VALUES (:ID_C, :EMPLACEMENT,:SURFACE,:DESCRIPTION,:DATE_DEBUT,:DATE_FIN)");
        query.bindValue(":ID_C", id_string);
     query.bindValue(":EMPLACEMENT",emplacement);
     query.bindValue(":SURFACE", surfacef);
          query.bindValue(":DESCRIPTION", description);
     query.bindValue(":DATE_DEBUT", date_debut);
     query.bindValue(":DATE_FIN", date_fin);

  return  query.exec();
}
bool chantiers::supprimer(int id_c){
          QSqlQuery query;
          query.prepare(" Delete from CHANTIERS where ID_C=:ID_C") ;
          query.bindValue(0, id_c);

    return  query.exec();
}

bool chantiers::modifier()
{

  QSqlQuery query;
        query.prepare("UPDATE CHANTIERS SET ID_C=:ID_C, EMPLACEMENT=:EMPLACEMENT,SURFACE=:SURFACE,DESCRIPTION=:DESCRIPTION,DATE_DEBUT=:DATE_DEBUT,DATE_FIN=:DATE_FIN "
                      "WHERE ID_C=:ID_C ");
        query.bindValue(":ID_C",id_c);
     query.bindValue(":EMPLACEMENT",emplacement);
     query.bindValue(":SURFACE", surface);
          query.bindValue(":DESCRIPTION", description);
     query.bindValue(":DATE_DEBUT", date_debut);
     query.bindValue(":DATE_FIN", date_fin);
query.exec();
 bool test=true ;
  return  test ;
}
