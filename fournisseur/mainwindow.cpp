#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/LENOVO/Documents/fournisseur/logo.png");
   ui->logo0->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


