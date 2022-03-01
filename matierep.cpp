#include "matierep.h"
#include <QSqlQuery>
#include <QtDebug>

MatiereP::MatiereP()
{
    Id=0,Nom=" ",Quantite=0,Prix=0;
}
MatiereP::MatiereP(int Id,QString Nom,int Quantite, int Prix)
{
    this->Id=Id;
    this->Nom=Nom;
    this->Quantite=Quantite;
    this->Prix=Prix;
}
 int MatiereP::getId(){return Id;}
    QString MatiereP::getNom(){return Nom;}
    int MatiereP::getQuantite(){return Quantite;}
    int MatiereP::getPrix(){return Prix;}
    void MatiereP::setId(int i){Id=i;}
    void MatiereP::setNom(QString n){Nom=n;}
    void MatiereP::setQuantite(int Q){Quantite=Q;}
    void MatiereP::setPrix(int P){Prix=P;}
    bool MatiereP::ajouter()
    {
        QSqlQuery query;
        QString Id_string=QString::number(Id);



             query.prepare("INSERT INTO test (Id,Nom,Quantite,Prix) "
                           "VALUES (:Id, :Nom, :Quantite, :Prix)");
             query.bindValue(":Id",Id_string);
             query.bindValue(":Nom",Nom);
             query.bindValue(":Quantite",Quantite);
             query.bindValue(":Prix",Prix);
            return query.exec();
     }
    QSqlQueryModel* MatiereP::afficher()
    {
        QSqlQueryModel* model=new QSqlQueryModel();
             model->setQuery("SELECT * FROM test");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
        return model;
    }
    bool MatiereP::supprimer(int Id )
    {
        QSqlQuery query;

             query.prepare("Delete from test where Id=:Id");
             query.bindValue(0,Id);

            return query.exec();
    }
    bool MatiereP::modifier(int Id,QString Nom,int Quantite,int Prix,int Id_modif)
    {
        QSqlQuery query;
       query.prepare("update test set Id=:Id,Nom=:Nom,Quantite=:Quantite,Prix=:Prix where Id=:Id_modif");
        query.bindValue(":Id",Id);
       query.bindValue(":Nom",Nom);
       query.bindValue(":Quantite",Quantite);
       query.bindValue(":Prix",Prix);
       query.bindValue(":Id_modif",Id_modif);
       return query.exec();

    }
    QSqlQueryModel * MatiereP::chercher(QString cher)
    {
        QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("select * from test where upper(Nom) LIKE upper('%"+cher+"%')");
    return model;
    }
    QSqlQueryModel * MatiereP ::tri_Nom()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from test order by Nom");
     return model;
    }
    QSqlQueryModel * MatiereP ::tri_Quantite()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from test order by Quantite");
     return model;
    }
    QSqlQueryModel * MatiereP ::tri_Prix()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from test order by Prix");
     return model;
    }

