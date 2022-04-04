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
        }
        else
            QMessageBox::critical(nullptr,QObject::tr("Database is not open"),QObject::tr("Connection failed.\n"
                                                                                          "Click cancel to exit."),QMessageBox::Cancel);
    return a.exec();
}
