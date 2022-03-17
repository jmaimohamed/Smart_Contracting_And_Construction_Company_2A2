#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chantiers.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QDate>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->chan->setModel(a.afficher()) ;
    ui->chan->setSelectionBehavior(QAbstractItemView::SelectRows);
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

void MainWindow::on_ajouter_chantiers_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_retour_chantier_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ajouter_clicked()
{

  int id_c=ui->le_idc->text().toInt();
  QString emplacement=ui->emplacement->text() ;
  int surface=ui->surface->text().toInt();
    QString description=ui->description->text() ;
    QDate date_debut = ui->dateEdit->date();
QDate date_fin = ui->dateEdit_2->date();
  chantiers C(id_c, emplacement , surface, description ,date_debut, date_fin);
  bool test=C.ajouter();
  QMessageBox msgBox ;
  if(test)
  {msgBox.setText("ajout avec succes");
      ui->chan->setModel(a.afficher()) ;
  }
      else
       msgBox.setText("echec ");
       msgBox.exec() ;
}




void MainWindow::on_supprimer_c_clicked()
{
    QItemSelectionModel *selected = ui->chan->selectionModel() ;
    QString var = selected->selectedRows().value(0).data().toString() ;
    chantiers c ;
    bool test=c.supprimer(var.toInt());
    QMessageBox msgBox ;
    if(test)
       {
        msgBox.setText("suppression avec succes");
        ui->chan->setModel(c.afficher());
    }
        else
         msgBox.setText("echec de suppression");
         msgBox.exec() ;
}



void MainWindow::on_modifi_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
     QItemSelectionModel *selected1 = ui->chan->selectionModel() ;
     ui->le_idc_3->setText(selected1->selectedRows().value(0).data().toString());
     ui->emplacement_3->setText(selected1->selectedRows(1).value(0).data().toString());
       ui->surface_3->setText(selected1->selectedRows(2).value(0).data().toString());
       ui->description_3->setText(selected1->selectedRows(3).value(0).data().toString());
       ui->date_3->setText(selected1->selectedRows(4).value(0).data().toString());
       ui->date2_3->setText(selected1->selectedRows(5).value(0).data().toString());
}

void MainWindow::on_retour_chantier_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_modifier_clicked()
{
   chantiers c(ui->le_idc_3->text().toInt(),ui->emplacement_3->text(), ui->surface_3->text().toInt(),ui->description_3->text() ,QDate::currentDate(), QDate::currentDate());
    bool test=c.modifier();
    QMessageBox msgBox ;
    if(test)
       {
        msgBox.setText("modification avec succes");
        ui->chan->setModel(c.afficher());
    }
        else
         msgBox.setText("echec de modfication");
         msgBox.exec() ;
}


void MainWindow::on_chercher1_clicked()
{
    chantiers c ;
    QString cher =ui->chercher_ch->text();
    ui->chan->setModel(c.chercher(cher));
}


void MainWindow::on_triem_clicked()
{
  chantiers c ;
c.tri_emplacement() ;
ui->chan->setModel(c.tri_emplacement());
}

void MainWindow::on_trida_clicked()
{
    chantiers c ;
  c.tri_date() ;
  ui->chan->setModel(c.tri_date());
}

void MainWindow::on_trisur_clicked()
{
    chantiers c;
    c.tri_surface() ;
    ui->chan->setModel(c.tri_surface());
}
