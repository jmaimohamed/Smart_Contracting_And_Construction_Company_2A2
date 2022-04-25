#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<iostream>
#include<QDate>

using namespace std;
class fournissseur
{
    int id_f;
    QString nom_f;
    int quantite_f;
    int prix_f;
    QString date_f;

public:
    fournissseur();
    fournissseur(int id_f, QString nom_f, int quantite_f, int prix_f, QString date_f);
int getid_f();
void setid_f(int id_f);
QString getnom_f();
void setnom_f(char nom_f);

int getquantite_f();
void setquantite_f(int quantite_f);
int getprix_f();
void setprix_f(int prix_f);
bool ajouter_fournisseur();
QSqlQueryModel * afficher();
bool supprimer(int id_f);
bool modifier();
QSqlQueryModel *recherche(QString n);
bool payer();
QSqlQueryModel *tri();
};



#endif // FOURNISSEUR_H
