#ifndef CHANTIERS_H
#define CHANTIERS_H
#include <QString>
#include <QSqlQueryModel>

class chantiers
{
public:
    chantiers();
    chantiers(int,QString,int,QString,QString);
int getid_c ();
QString getemplacement() ;
int getsurface();
QString getdescription() ;
QString getdate_debut() ;
void setid_c(int);
void setemplacement(QString);
void setsurface(int);
void setdescription(QString);
void setdate_debut(QString);
bool ajouter() ;
private:
    int id_c ,surface;
    QString description,emplacement  ,date_debut ;
};

#endif // CHANTIERS_H
