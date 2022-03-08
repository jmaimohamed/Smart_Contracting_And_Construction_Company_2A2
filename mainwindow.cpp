#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tache.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegularExpression QRegExp( "[a-zA-Z]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(QRegExp,this);
    ui->nomEmploye->setValidator(validator);
    ui->idTache->setValidator(new QIntValidator(0,99999,this));
    ui->idEmploye->setValidator(new QIntValidator(0,99999,this));
    ui->tableView_tache->setModel(T.afficher());
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

void MainWindow::on_ajouter_tache_clicked()
{
    int id_tache=ui->idTache->text().toInt();
        QDate date_upload=ui->dateUpload->date();
        QDate date_done=ui->dateDone->date();
        int id_employe =ui->idEmploye->text().toInt();
        QString nom_e = ui->nomEmploye->text();
        QString description = ui->descEmploye->toPlainText();
        Tache T(id_tache,date_upload,date_done,id_employe,nom_e,description);
        T.ajouter();
        ui->tableView_tache->setModel(T.afficher());
}

void MainWindow::on_supprimer_tache_clicked()
{
   QItemSelectionModel *select1 = ui->tableView_tache->selectionModel();
   QString var=select1->selectedRows().value(0).data().toString();
   T.supprimer(var.toInt());
    ui->tableView_tache->setModel(T.afficher());
}

void MainWindow::on_modifier_tache_clicked()
{
    int id_tache = ui->idTache->text().toInt();
    QDate date_upload = ui->dateUpload->date();
    QDate date_done = ui->dateDone->date();
    int id_employe = ui->idEmploye->text().toInt();
    QString nom_e = ui->nomEmploye->text();
    QString description = ui->descEmploye->toPlainText();
    Tache T(id_tache,date_upload,date_done,id_employe,nom_e,description);
    T.modifier(id_tache,date_upload,date_done,id_employe,nom_e,description,id_tache);
    ui->tableView_tache->setModel(T.afficher());
}
