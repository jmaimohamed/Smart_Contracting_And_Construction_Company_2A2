#ifndef EMPLOYEES_H
#define EMPLOYEES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QMessageBox>
#include <QIntValidator>
#include <QDebug>
class Employees
{
int id,salaire;
QString nom,role,login,password;
QDate date_emb;

public:
    Employees();
    Employees(int id,QString nom,QDate date_emb ,int salaire,QString role,QString login,QString password);
    bool ajouter();
    bool supprimer(int id);
    bool modifier();
    QSqlQueryModel* afficher();
};

#endif // EMPLOYEES_H
