#include "chantiers.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>
#include <QObject>
chantiers::chantiers()
{
    id_c=0;
    emplacement="";
    surface=0 ;
     date_debut="" ;
    description="";

}


chantiers::chantiers(int id_c , QString emplacement , int surface  ,QString date_debut, QString description)
{
    this->id_c=id_c ;
    this->emplacement=emplacement ;
    this->surface=surface  ;
       this->date_debut=date_debut ;
    this->description=description ;

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
QString chantiers::getdate_debut()
{
    return date_debut ;
}
QString chantiers::getdescription()
{
    return description ;
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
void chantiers::setdate_debut(QString date_debut)
{
   this->date_debut=date_debut ;
}
void chantiers::setdescription(QString description)
{
   this->description=description ;
}



bool chantiers::ajouter(){

  QSqlQuery query;
  QString id_string  =QString::number(id_c);
  QString surfacef  =QString::number(surface);
        query.prepare("INSERT INTO CHANTIERS (ID_C, EMPLACEMENT,SURFACE,DESCRIPTION,DATE_DEBUT) "
                      "VALUES (:ID_C, :EMPLACEMENT,:SURFACE,:DESCRIPTION,:DATE_DEBUT)");
        query.bindValue(":ID_C", id_string);
     query.bindValue(":EMPLACEMENT", emplacement);
     query.bindValue(":SURFACE", surfacef);
     query.bindValue(":DATE_DEBUT", date_debut);
     query.bindValue(":DESCRIPTION", description);


  return  query.exec();
}


