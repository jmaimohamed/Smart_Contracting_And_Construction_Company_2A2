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


    QString NOM_MP ;
    int ID_MP, Quantite,Prix,ID_F;

    public:
    MatiereP();
    MatiereP(int,QString,int,int,int);
    int getID_MP();
    QString getNOM_MP();
    int getQuantite();
    int getPrix();
    int getID_F();
    void setID_MP(int);
    void setNOM_MP(QString);
    void setQuantite(int);
    void setPrix(int);
    void setID_F(int);

bool ajouter();
QSqlQueryModel* afficher();
bool supprimer(int);
bool modifier(int ID_MP,QString NOM_MP,int Quantite,int Prix,int ID_F,int Id_modif);
QSqlQueryModel* chercher(QString);
QSqlQueryModel* tri_NOM_MP();
QSqlQueryModel* tri_Quantite();
QSqlQueryModel* tri_Prix();
};

#endif // MATIEREP_H
