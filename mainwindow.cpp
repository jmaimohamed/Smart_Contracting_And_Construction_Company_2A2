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
  chantiers C(id_c, emplacement , surface, description ,QDate::currentDate(), QDate::currentDate());
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


QSqlQueryModel* chantiers::afficher()
{
QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM CHANTIERS");
      model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_C"));
      model->setHeaderData(1, Qt::Horizontal,QObject::tr("EMPLACEMENT"));
       model->setHeaderData(2, Qt::Horizontal,QObject::tr("SURFACE"));
       model->setHeaderData(3, Qt::Horizontal,QObject::tr("DESCRIPTION"));
       model->setHeaderData(4, Qt::Horizontal,QObject::tr("DATE_DEBUT"));
  model->setHeaderData(5, Qt::Horizontal,QObject::tr("DATE_FIN"));
       return model ;
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

void MainWindow::on_modif_clicked()
{
        int id_c=ui->le_idc->text().toInt();
        QString emplacement=ui->emplacement->text();
        int surface=ui->surface->text().toInt();
        QString description=ui->description->text();
        chantiers C(id_c, emplacement , surface, description ,QDate::currentDate(), QDate::currentDate());
        C.modifier(id_c, emplacement , surface, description ,QDate::currentDate(), QDate::currentDate());
        ui->chan->setModel(C.afficher());
}
