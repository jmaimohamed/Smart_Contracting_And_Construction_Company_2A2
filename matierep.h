#ifndef MATIEREP_H
#define MATIEREP_H
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class MatiereP
{


    QString Nom ;
    int Id, Quantite,Prix;

    public:
    MatiereP();
    MatiereP(int,QString,int,int);
    int getId();
    QString getNom();
    int getQuantite();
    int getPrix();
    void setId(int);
    void setNom(QString);
    void setQuantite(int);
    void setPrix(int);

bool ajouter();
QSqlQueryModel* afficher();
bool supprimer(int);
bool modifier(int Id,QString Nom,int Quantite,int Prix,int Id_modif);
QSqlQueryModel* chercher(QString);
QSqlQueryModel* tri_Nom();
QSqlQueryModel* tri_Quantite();
QSqlQueryModel* tri_Prix();
};

#endif // MATIEREP_H
