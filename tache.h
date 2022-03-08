#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "QString"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QDate>

class Tache
{
    int id_tache,id_employe;
    QDate date_upload,date_done;
    QString nom_e,description;
public:
    Tache(){}
    Tache(int,QDate,QDate,int,QString,QString);

    //Getters
    QDate getDate_upload(){return date_upload;}
    QDate getDate_done(){return date_done;}
    int getID_tache(){return id_tache;}
    int getID_employe(){return id_employe;}
    QString getNom(){return nom_e;}
    QString getDesc(){return description;}

    //Setters
    void setDate_upload(QDate du){date_upload=du;}
    void setDate_done(QDate dd){date_done=dd;}
    void setID(int id){id=id_tache;}
    void setNom(QString n){n=nom_e;}
    void setDesc(QString d){d=description;}
    //Fonctionnalites
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer (int);
    bool modifier(int id_tache,QDate date_upload,QDate date_done,int id_employe,QString nom_e,QString description,int id_tacheM);
};

#endif // ETUDIANT_H

