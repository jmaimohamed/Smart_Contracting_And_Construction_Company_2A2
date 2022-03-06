#ifndef CHANTIERS_H
#define CHANTIERS_H
#include <QString>
#include <QSqlQueryModel>
#include <QDate>
class chantiers
{
public:
    chantiers();
    chantiers(int,QString,int,QString,QDate,QDate);
int getid_c ();
QString getemplacement() ;
int getsurface();
QString getdescription() ;
QDate getdate_debut() ;
QDate getdate_fin() ;
void setid_c(int);
void setemplacement(QString);
void setsurface(int);
void setdescription(QString);
void setdate_debut(QDate);
void setdate_fin(QDate);
bool ajouter() ;
QSqlQueryModel* afficher();
bool supprimer(int);
bool modifier(int,QString,int,QString,QDate,QDate) ;
private:
    int id_c ,surface;
    QString description,emplacement ;
    QDate date_debut,date_fin ;
};

#endif // CHANTIERS_H
