#ifndef PARTENAIRE_H
#define PARTENAIRE_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<iostream>
#include<QDebug>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include "../../mypartinproject/myproject/smtp/src/SmtpMime"
#include <QSslSocket>
#include <QProcess>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;


class Partenaire
{
private:
    int id_p, disponibilite_p;
    QString nom_p, secteur_p, description_p, email_p;
public:
    //Constructeurs
    Partenaire();
    Partenaire(int, QString, QString, QString, QString, int);

    //Getters
    int get_id();
    int get_disponibilite();
    QString get_nom();
    QString get_secteur();
    QString get_description();
    QString get_email();

    //Setters
    void setid(int);
    void setdisponibilite(int);
    void setnom(QString);
    void setsecteur(QString);
    void setdescription(QString);
    void setemail(QString);


    // fonctions du CRUD
    bool ajouter();
    bool supprimer(int);
    bool modifier();
    QSqlQueryModel * afficher();


    // functionalities
     QSqlQueryModel * afficher(QString); // filtrage
     QSqlQueryModel * afficher(int); // returns data for a given partner ID
     void Contract_to_Pdf(QString,QString,QString,QString,QString,QString); // convertion du text en pdf avec téléchargement
     void Send_email(QString,QString,QString,QString);
     QString translate(); // traduction du text
     QString recommand();



};

#endif // PARTENAIRE_H
