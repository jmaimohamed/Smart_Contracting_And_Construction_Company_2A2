#include "connexion.h"

connexion::connexion()
{}
bool connexion::ouvrirconnexion()
{

    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("base");
    db.setUserName("amrou");//inserer nom de l'utilisateur
    db.setPassword("esprit");//inserer mot de passe de cet utilisateur


    if (db.open())
    return true ;


    else return false ;
}
void connexion::closeConnection(){db.close();}
