#ifndef MESSAGES_H
#define MESSAGES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QMessageBox>
#include <QIntValidator>
#include <QDebug>
class Messages
{
public:
    Messages();
    Messages(QString titre,QString text ,bool read);
    QSqlQueryModel * afficher();
    QString fetch_msg(QString titre);
    bool ajouter();
    bool supprimer(QString titre);
private:
    QString titre,text;
    int id_m;
    bool read;
};

#endif // MESSAGES_H
