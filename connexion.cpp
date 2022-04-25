#include "connexion.h"

connexion::connexion()
{}
bool connexion::ouvrirconnexion()
{

    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("mybase");
    db.setUserName("Youssef");//inserer nom de l'utilisateur
    db.setPassword("youssef");//inserer mot de passe de cet utilisateur

    if (db.open())
    return true ;


    else return false ;
}
void connexion::closeConnection(){db.close();}
