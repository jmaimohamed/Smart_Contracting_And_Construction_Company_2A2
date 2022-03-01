#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "matierep.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->tab_test->setModel(M.afficher());
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_gerer_mp_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
     ui->tab_test->setModel(M.afficher());
}

void MainWindow::on_gerer_chantiers_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_gerer_partenaires_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_6_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_retour_chantier_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_retour_taches_clicked()
{

ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_RetourM_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_gerer_tache_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_gerer_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_Retour_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_supprimer_mp_clicked()
{
    M.setId(ui->le_supp->text().toInt());
    bool test=M.supprimer(M.getId());

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("remove"),
                    QObject::tr("successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("remove is not working"),
                    QObject::tr("failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
 ui->tab_test->setModel(M.afficher());
}

void MainWindow::on_ajouter_mp_clicked()
{
    int Id=ui->idM->text().toInt();
     QString Nom=ui->le_nom->text();
      int Quantite=ui->le_quantite->text().toInt();
      int Prix=ui->le_prix->text().toInt();
     MatiereP M(Id,Nom,Prix,Quantite);
     bool test=M.ajouter();
     ui->tab_test->setModel(M.afficher());
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ajouter is open"),
                     QObject::tr("successful.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

 }
     else
         QMessageBox::critical(nullptr, QObject::tr("ajouter is not working"),
                     QObject::tr("failed.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_update_mp_clicked()
{
int Id=ui->idM->text().toInt();
    QString Nom=ui->le_nom->text();
     int Quantite=ui->le_quantite->text().toInt();
    int Prix=ui->le_prix->text().toInt();
   MatiereP M(Id,Nom,Quantite,Prix);
    M.modifier(Id,Nom,Quantite,Prix,Id);
    ui->tab_test->setModel(M.afficher());
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_le_chercherM_clicked()
{
    QString cher =ui->le_chercherM->text();
    ui->tab_test->setModel(M.chercher(cher));
}

void MainWindow::on_chercherM_2_clicked()
{
    QString cher =ui->le_chercherM->text();
    ui->tab_test->setModel(M.chercher(cher));
}

void MainWindow::on_TriN_clicked()
{
    M.tri_Nom();
     ui->tab_test->setModel(M.tri_Nom());
}

void MainWindow::on_TriQ_clicked()
{
    M.tri_Quantite();
     ui->tab_test->setModel(M.tri_Quantite());
}

void MainWindow::on_radioButton_clicked(bool checked)
{

}

void MainWindow::on_TriNM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_Nom());}
}

void MainWindow::on_TriQM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_Quantite());}
}

void MainWindow::on_TriPM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_Prix());}
}
