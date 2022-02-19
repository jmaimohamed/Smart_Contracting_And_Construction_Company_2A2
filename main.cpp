#include "mainwindow.h"

#include <QApplication>
#include <QtCharts/QChartGlobal>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
