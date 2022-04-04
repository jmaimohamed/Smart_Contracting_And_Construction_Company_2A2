#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tache.h"
#include <QMessageBox>

#include <QSqlRecord>


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
    ui->tableView_employe->setModel(T.afficherEmploye(1));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_button_clicked()
{
    QString username = ui->username_box->text();
    QString password = ui->password_box->text();
    if(username == "c" && password == "c")
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (username == "a" && password == "a")
    {
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if (username == "e" && password == "e")
    {
        ui->stackedWidget->setCurrentIndex(2);
    }

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
        QDate date_upload=QDate::currentDate();
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

void MainWindow::on_upload_taches_clicked()
{
    QItemSelectionModel *select5 = ui->tableView_tache->selectionModel();
         ui->idTache->setText(select5->selectedRows().value(0).data().toString());
         ui->dateUpload->setDate(select5->selectedRows(1).value(0).data().toDate());
         ui->dateDone->setDate(select5->selectedRows(2).value(0).data().toDate());
         ui->idEmploye->setText(select5->selectedRows(3).value(0).data().toString());
         ui->nomEmploye->setText(select5->selectedRows(4).value(0).data().toString());
         ui->descEmploye->setText(select5->selectedRows(5).value(0).data().toString());
}

void MainWindow::on_tri_nom_clicked(bool checked)
{
    if(checked ){
        ui->tableView_tache->setModel(T.triNom());
    }
}

void MainWindow::on_tri_date_clicked(bool checked)
{
    if(checked ){
        ui->tableView_tache->setModel(T.triDate());
    }
}


void MainWindow::on_tri_id_clicked(bool checked)
{
    if(checked ){
        ui->tableView_tache->setModel(T.triId());
    }
}

void MainWindow::on_publierPlan_clicked()
{
    QString filename = QFileDialog::getOpenFileName
            (this,tr("Choose"),"",tr("Images (*.png *.jpg *.jpeg *.bmp *.gif)"));
    QSqlQuery query;
    query.prepare("update chantiers set plan='"+filename+"'where id_c=1");
    if(query.exec())
    {
        QMessageBox::information(this,tr("Upload success"),tr("Upload photo success"));
    }

}

void MainWindow::on_accesPlan_clicked()
{
    QString filename;
    QSqlQuery qry;
    qry.prepare("select * from chantiers ");
    qry.exec();
    QSqlRecord rec = qry.record();
    int fieldNo = rec.indexOf("plan");
    while (qry.next()) {
            QString country = qry.value(fieldNo).toString();
            filename = qry.value(fieldNo).toString();
    }

    if(QString::compare(filename,QString()) !=0)
    {
        QImage image;
        bool valid = image.load(filename);
        if (valid)
        {
            image = image.scaledToWidth(ui->image->width(),Qt::SmoothTransformation);
            image = image.scaledToHeight(ui->image->height(),Qt::SmoothTransformation);
            ui->image->setPixmap(QPixmap::fromImage(image));
        }
    }
}
