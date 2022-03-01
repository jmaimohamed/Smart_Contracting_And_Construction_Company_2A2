#include "partenaire.h"


Partenaire::Partenaire()
{
    id_p=0;
    nom_p="";
    secteur_p="";
    description_p="";
    email_p="";
    disponibilite_p=0;
}

Partenaire::Partenaire(int id_p, QString nom_p, QString secteur_p, QString description_p, QString email_p, int disponibilite_p)
{
    this->id_p=id_p;
    this->nom_p=nom_p;
    this->secteur_p=secteur_p;
    this->description_p=description_p;
    this->email_p=email_p;
    this->disponibilite_p=disponibilite_p;
}


// getters

int Partenaire::get_id()
{
    return id_p;
}
QString Partenaire::get_nom()
{
    return nom_p;
}
QString Partenaire::get_secteur()
{
    return secteur_p;
}
QString Partenaire::get_description()
{
    return description_p;
}
QString Partenaire::get_email()
{
    return email_p;
}
int Partenaire::get_disponibilite()
{
    return disponibilite_p;
}


// setters

void Partenaire::setid(int id_p)
{
    this->id_p=id_p;
}
void Partenaire::setnom(QString nom_p)
{
    this->nom_p=nom_p;
}
void Partenaire::setsecteur(QString secteur_p)
{
    this->secteur_p=secteur_p;
}
void Partenaire::setdescription(QString description_p)
{
    this->description_p=description_p;
}
void Partenaire::setemail(QString email_p)
{
    this->email_p=email_p;
}


// methods

bool Partenaire::ajouter() {

    bool result=false;
            QSqlQuery query;
              query.prepare("INSERT INTO PARTENAIRES (ID_P, NOM_P, SECTEUR_P, DESCRIPTION_P, EMAIL_P,DISPONIBILITE_P) "
                            "VALUES (:ID_P, :NOM_P, :SECTEUR_P,:DESCRIPTION_P,:EMAIL_P,:DISPONIBILITE_P)");
              query.bindValue(":ID_P",id_p);
              query.bindValue(":NOM_P",nom_p);
              query.bindValue(":SECTEUR_P", secteur_p);
              query.bindValue(":DESCRIPTION_P", description_p);
              query.bindValue(":EMAIL_P", email_p);
              query.bindValue(":DISPONIBILITE_P", disponibilite_p);
              query.exec();
              result =true;
            return result ;
}


QSqlQueryModel * Partenaire::afficher()
{
    QSqlQueryModel* model=new  QSqlQueryModel();

       model->setQuery("select * from PARTENAIRES ORDER BY ID_P ASC ");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_p"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom_p"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Secteur_p"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Description_p"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email_p"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibilite_p"));

      return model;
}

bool Partenaire::supprimer(int id_p)
{
  QSqlQuery query;

    query.prepare("Delete from PARTENAIRES where ID_P =:ID_p");
    query.bindValue(":ID_p",id_p);
    return query.exec();
}

bool Partenaire::modifier(){
    bool test=false;

    QSqlQuery query;
      query.prepare("UPDATE PARTENAIRES SET ID_P=:ID_P, NOM_P=:NOM_P, SECTEUR_P=:SECTEUR_P, DESCRIPTION_P=:DESCRIPTION_P, EMAIL_P=:EMAIL_P, DISPONIBILITE_P=:DISPONIBILITE_P "
                    "WHERE ID_P=:ID_P");
      query.bindValue(":ID_P",id_p);
      query.bindValue(":NOM_P",nom_p);
      query.bindValue(":SECTEUR_P", secteur_p);
      query.bindValue(":DESCRIPTION_P", description_p);
      query.bindValue(":EMAIL_P", email_p);
      query.bindValue(":DISPONIBILITE_P", disponibilite_p);
      query.exec();
      test =true;
    return test ;
}
