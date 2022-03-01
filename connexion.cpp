#include "connexion.h"

connexion::connexion()
{}
bool connexion::ouvrirconnexion()
{

    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("BD_HMM");
    db.setUserName("chtiouioui");//inserer nom de l'utilisateur
    db.setPassword("12");//inserer mot de passe de cet utilisateur

    if (db.open())
    return true ;


    else return false ;
}
