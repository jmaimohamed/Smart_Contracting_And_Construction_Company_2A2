#include "tache.h"
#include <QMessageBox>

Tache::Tache(int id_tache,QDate date_upload,QDate date_done,int id_employe,QString nom_e,QString description)
{
    this->id_tache=id_tache;
    this->date_upload=date_upload;
    this->date_done=date_done;
    this->id_employe=id_employe;
    this->nom_e=nom_e;
    this->description=description;
}
bool Tache::ajouter()
{
    QSqlQuery query;

    QString res = QString::number(id_tache);

    query.prepare("insert into taches (id_t,date_upload,date_done,id_e,nom_e,description)" "values (:id_t,:date_upload,:date_done,:id_e,:nom_e,:description)");

    query.bindValue(":id_t",res);
    query.bindValue(":date_upload",date_upload);
    query.bindValue(":date_done",date_done);
    query.bindValue(":id_e",id_employe);
    query.bindValue(":nom_e",nom_e);
    query.bindValue(":description",description);
    return query.exec();
}

QSqlQueryModel * Tache::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from taches");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID tache"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date Upload"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date Done"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("ID Employe"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Description"));

    return model;
}

QSqlQueryModel * Tache::afficherEmploye(int id_employe)
{
    QSqlQuery query;
    QSqlQueryModel * model=new QSqlQueryModel();
    QString res = QString::number(id_employe);
    query.prepare("select * from taches where id_e = :id_e");
    query.bindValue(":id_e",res);
    query.exec();
    model->setQuery(query);

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID tache"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date Upload"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date Done"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("ID Employe"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Description"));

    return model;
}

bool Tache::supprimer(int id_tache)
{
    QSqlQuery query;
    QString res = QString::number(id_tache);
    query.prepare("Delete from taches where id_t = :id_t");
    query.bindValue(":id_t",res);

    return query.exec();
}
bool Tache::modifier(int id_tache,QDate date_upload,QDate date_done,int id_employe,QString nom_e,QString description,int id_tacheM)
{
    QSqlQuery query;
    query.prepare("update taches set id_t=:id_t,date_upload=:date_upload,date_done=:date_done,id_e=:id_e,nom_e=:nom_e,description=:description where id_t=:Id_modif");
    query.bindValue(":id_t",id_tache);
    query.bindValue(":date_upload",date_upload);
    query.bindValue(":date_done",date_done);
    query.bindValue(":id_e",id_employe);
    query.bindValue(":nom_e",nom_e);
    query.bindValue(":description",description);
    query.bindValue(":Id_modif",id_tacheM);
    return query.exec();
}

QSqlQueryModel * Tache ::triNom()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from taches order by nom_e");
     return model;
    }

QSqlQueryModel * Tache ::triDate()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from taches order by date_upload");
     return model;
    }

QSqlQueryModel * Tache ::triId()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from taches order by id_t");
     return model;
    }

QSqlQueryModel * Tache::recherche(QString n)
 {
     QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from taches where (nom_e like ('%"+n+"%')) or (description like ('%"+n+"%'))");

return model;
 }

