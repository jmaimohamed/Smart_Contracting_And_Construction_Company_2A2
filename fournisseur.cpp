#include "fournisseur.h"

fournissseur::fournissseur()
{
    id_f=0;
    nom_f="";
    quantite_f=0;
    prix_f=0;
    date_f="";
}

fournissseur::fournissseur(int id_f, QString nom_f, int quantite_f, int prix_f, QString date_f)
{
    this->id_f=id_f;
    this->nom_f=nom_f;
    this->quantite_f=quantite_f;
    this->prix_f=prix_f;
    this->date_f=date_f;

}

int fournissseur::getid_f()
{
    return id_f;
}

void fournissseur::setid_f(int id_f)
{
    this->id_f=id_f;
}

QString fournissseur::getnom_f()
{
    return nom_f;
}

void fournissseur::setnom_f(char nom_f)
{
    this->nom_f=nom_f;
}

int fournissseur::getquantite_f()
{
    return quantite_f;
}

void fournissseur::setquantite_f(int quantite_f)
{
this->quantite_f=quantite_f;
}
int fournissseur::getprix_f()
{
    return prix_f;
}

void fournissseur::setprix_f(int prix_f)
{
this->prix_f=prix_f;
}

bool fournissseur::ajouter_fournisseur()
{
    bool result=false;
                QSqlQuery query;
                QDate Date = QDate::fromString(date_f,"dd/MM/yyyy");
                  query.prepare("INSERT INTO FOURNISSEURS (ID_F, NOM_F, QUANTITE_F, PRIX_F, DATE_ARRIVEE) "
                                "VALUES (:ID_F, :NOM_F, :QUANTITE_F,:PRIX_F,:DATE_ARRIVEE)");
                  query.bindValue(":ID_F",id_f);
                  query.bindValue(":NOM_F",nom_f);
                  query.bindValue(":QUANTITE_F", quantite_f);
                  query.bindValue(":PRIX_F", prix_f);
                  query.bindValue(":DATE_ARRIVEE", Date);

                  query.exec();
                  result =true;
                return result ;
}

QSqlQueryModel * fournissseur::afficher()
{
    QSqlQueryModel* model=new  QSqlQueryModel();

       model->setQuery("select * from FOURNISSEURS ORDER BY ID_F ASC ");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_f"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_f"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantite_f"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix_f"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("date_f"));

      return model;
}

bool fournissseur::supprimer(int id_f)
{
  QSqlQuery query;

    query.prepare("Delete from FOURNISSEURS where ID_F =:ID_F");
    query.bindValue(":ID_F",id_f);
    return query.exec();
}

bool fournissseur::modifier(){

    QSqlQuery query;
      query.prepare("UPDATE FOURNISSEURS SET NOM_F=:NOM_F, QUANTITE_F=:QUANTITE_F, PRIX_F=:PRIX_F, DATE_ARRIVEE=:DATE_ARRIVEE "
                    "WHERE ID_F=:ID_F");
      query.bindValue(":ID_F",id_f);
      query.bindValue(":NOM_F",nom_f);
      query.bindValue(":QUANTITE_F", quantite_f);
      query.bindValue(":PRIX_F", prix_f);
      query.bindValue(":DATE_ARRIVEE", date_f);

      return query.exec();


}

QSqlQueryModel *fournissseur::recherche(QString n)
 {
     QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from FOURNISSEURS where (nom_f) like ('%"+n+"%')");

return model;
 }

bool fournissseur::payer()
{
        QSqlQuery query;
          query.prepare("SELECT FROM FOURNISSEURS WHERE NOM_F=:NOM_F, QUANTITE_F=:QUANTITE_F, PRIX_F=:PRIX_F, DATE_ARRIVEE=:DATE_ARRIVEE "
                        "WHERE ID_F=:ID_F");
          query.bindValue(":ID_F",id_f);
          query.bindValue(":NOM_F",nom_f);
          query.bindValue(":QUANTITE_F", quantite_f);
          query.bindValue(":PRIX_F", prix_f);
          query.bindValue(":DATE_ARRIVEE", date_f);
          return query.exec();


}
