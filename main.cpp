#include "mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnection();
    MainWindow w;
    if (test)
        {
            w.show();
            QMessageBox::information(nullptr,QObject::tr("Database is open"),QObject::tr("Connection succesful.\n"
                                                                                         "Click Cancel to exit."),QMessageBox::Cancel);
        }
        else
            QMessageBox::critical(nullptr,QObject::tr("Database is not open"),QObject::tr("Connection failed.\n"
                                                                                          "Click cancel to exit."),QMessageBox::Cancel);
    return a.exec();
}
