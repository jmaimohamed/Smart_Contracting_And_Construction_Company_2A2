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
      ui->tab_test->setSelectionBehavior(QAbstractItemView::SelectRows);
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
     QItemSelectionModel *select1 = ui->tab_test->selectionModel();
      QString var=select1->selectedRows().value(0).data().toString();

   M.supprimer(var.toInt());
 ui->tab_test->setModel(M.afficher());
 QString noti="";
 M.notif_supp(noti);
}

void MainWindow::on_ajouter_mp_clicked()
{
    int ID_MP=ui->idM->text().toInt();
        QString NOM_MP=ui->le_nom->text();
         int Quantite=ui->le_quantite->text().toInt();
        int Prix=ui->le_prix->text().toInt();
        int ID_F=ui->ID_F->text().toInt();
     MatiereP M(ID_MP,NOM_MP,Quantite,Prix,ID_F);
     M.ajouter();
     ui->tab_test->setModel(M.afficher());
     QString noti="";

                  M.notif_ajout(noti);
}

void MainWindow::on_update_mp_clicked()
{
int ID_MP=ui->idM->text().toInt();
    QString NOM_MP=ui->le_nom->text();
     int Quantite=ui->le_quantite->text().toInt();
    int Prix=ui->le_prix->text().toInt();
    int ID_F=ui->ID_F->text().toInt();
   MatiereP M(ID_MP,NOM_MP,Quantite,Prix,ID_F);
    M.modifier(ID_MP,NOM_MP,Quantite,Prix,ID_F,ID_MP);
    ui->tab_test->setModel(M.afficher());
     QString noti="";
     M.notif_modif(noti);
}
void MainWindow::on_chercherM_2_clicked()
{
    QString cher =ui->le_chercherM->text();
    ui->tab_test->setModel(M.chercher(cher));
}
void MainWindow::on_TriNM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_NOM_MP());}
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



void MainWindow::on_envoiMP_clicked()
{
    QItemSelectionModel *select2 = ui->tab_test->selectionModel();
    ui->idM->setText(select2->selectedRows().value(0).data().toString());
     ui->le_nom->setText(select2->selectedRows(1).value(0).data().toString());
      ui->le_prix->setText(select2->selectedRows(2).value(0).data().toString());
       ui->le_quantite->setText(select2->selectedRows(3).value(0).data().toString());
        ui->ID_F->setText(select2->selectedRows(4).value(0).data().toString());
}
