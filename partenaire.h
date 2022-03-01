#ifndef PARTENAIRE_H
#define PARTENAIRE_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>


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

};

#endif // PARTENAIRE_H
