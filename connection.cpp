#include "connection.h"

Connection::Connection(){}

bool Connection::createconnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test = false;
    db.setDatabaseName("mybase");
    db.setUserName("Youssef");
    db.setPassword("youssef");
    if (db.open()) test = true;
    return test;
}
void Connection::closeConnection(){db.close();}
