#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "partenaire.h"
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>
#include<QWidget>
#include <QTextDocument>
#include <QTextEdit>
#include <fstream>
#include <QTextStream>
#include <iostream>

using namespace :: std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_amrou1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    Partenaire p;
    ui->amrou_outputtable->setModel(p.afficher());
}

void MainWindow::on_pushButton_32_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_amrou5_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_amrou1_3_clicked()
{
  ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_amrou4_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_amrou2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_amrou4_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_amrou9_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    Partenaire p;
    ui->amrou_outputtable_2->setModel(p.afficher());
}

void MainWindow::on_amrou12_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_amrou4_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    Partenaire p;
    ui->amrou_outputtable_2->setModel(p.afficher());
}

void MainWindow::on_amrou4_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_amrou10_clicked()
{

    Partenaire p(ui->amrou_id->text().toInt(),
                 ui->amrou_nom->text(),
                 ui->amrou_secteur->currentText(),
                 ui->amrou_description->toPlainText(),
                 ui->amrou_email->text(),
                 1);

    bool result_query = p.ajouter();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Ajout effectué.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->amrou_id->setText("");
            ui->amrou_nom->setText("");
            ui->amrou_adresse->setText("");
            ui->amrou_description->setText("");
            ui->amrou_email->setText("");
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Ajout non effectué.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_amrou11_clicked()
{
                    ui->amrou_id->setText("");
                     ui->amrou_nom->setText("");
                     ui->amrou_adresse->setText("");
                     ui->amrou_description->setText("");
                     ui->amrou_email->setText("");
}

void MainWindow::on_amrou8_clicked()
{
    Partenaire p;
    QItemSelectionModel *select = ui->amrou_outputtable->selectionModel();
              int id_p =select->selectedRows().value(0).data().toInt();
              if(p.supprimer(id_p))
              {
                  ui->amrou_outputtable->setModel(p.afficher());
                  QMessageBox::information(nullptr, QObject::tr("ok"),
                                           QObject::tr("Supression effectuée.\n"
                                                       "Click on ok to proceed."), QMessageBox::Ok);
              }
              else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                        QObject::tr("Supression non effectuée.\n"
                                                    "Click cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_amrou4_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    Partenaire p;
    ui->amrou_outputtable_2->setModel(p.afficher());
}

void MainWindow::on_amrou7_clicked()
{
  ui->stackedWidget->setCurrentIndex(6);
  QItemSelectionModel *select = ui->amrou_outputtable->selectionModel();
  ui->amrou_id_2->setText(select->selectedRows().value(0).data().toString());
}

void MainWindow::on_amrou10_2_clicked()
{
    Partenaire p(ui->amrou_id_2->text().toInt(),
                 ui->amrou_nom_2->text(),
                 ui->amrou_secteur_2->currentText(),
                 ui->amrou_description_2->toPlainText(),
                 ui->amrou_email_2->text(),
                 1);

    bool result_query = p.modifier();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Modification effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->amrou_id->setText("");
            ui->amrou_nom->setText("");
            ui->amrou_adresse->setText("");
            ui->amrou_description->setText("");
            ui->amrou_email->setText("");
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Modification non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_amrou11_2_clicked()
{
     ui->amrou_nom_2->setText("");
     ui->amrou_adresse_2->setText("");
     ui->amrou_description_2->setText("");
     ui->amrou_email_2->setText("");
}
