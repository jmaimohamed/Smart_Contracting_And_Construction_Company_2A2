#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>


class connexion
{
private :
    QSqlDatabase db ;
public:
    connexion();
    bool ouvrirconnexion();

};


#endif // CONNEXION_H
