#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employees.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_2->setModel(Emp.afficher());
    ui->id_emp_i->setValidator(new QIntValidator(0,9999999,this));
    ui->id_emp_i_2->setValidator(new QIntValidator(0,9999999,this));
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);

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

void MainWindow::on_ajouter_emp_clicked()
{
    int id= ui->id_emp_i->text().toInt();
    QString nom=ui->nom_emp_i->text();
    QString role=ui->role_emp_i->currentText();
    QString login=ui->login_emp_i->text();
    QString password=ui->pass_emp_i->text();

    Employees E(id,nom,QDate::currentDate(),500,role,login,password);
    bool test=E.ajouter();
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout Effectue\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("Ajout non effectué!\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_del_emp_clicked()
{

    QItemSelectionModel *selection = ui->tableView_2->selectionModel();
    int id=selection->selectedRows().value(0).data().toInt();
        std::cout << id;
        bool test=Emp.supprimer(id);
        if (test)
        {
            ui->tableView_2->setModel(Emp.afficher());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Supression Effectue\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("Suppression non effectué!\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_Retour_employe_3_clicked()
{
        ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ajouter_em_clicked()
{
        ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_Retour_employe_2_clicked()
{
        ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_ajouter_emp_2_clicked()
{
    int salary;
if (ui->role_emp_i_2->currentText()=="Chef")
    salary=3500;
else if (ui->role_emp_i_2->currentText()=="ouvrier")
    salary=1000;
else salary=2500;

    Employees E(ui->id_emp_i_2->text().toInt(),
                 ui->nom_emp_i_2->text(),
                 QDate::currentDate(),
                 salary,
                 ui->role_emp_i_2->currentText(),
                 ui->login_emp_i_2->text(),
                 ui->pass_emp_i_2->text()
                 );


    bool result_query = E.modifier();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Modification effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->tableView_2->setModel(Emp.afficher());
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Modification non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_modifier_emp_clicked()
{

    int index=0;
    ui->stackedWidget->setCurrentIndex(4);
    QItemSelectionModel *select = ui->tableView_2->selectionModel();
    if (select->selectedRows(4).value(0).data().toString()=="Chef")
        index=0;
    else if (select->selectedRows(4).value(0).data().toString()=="Ingenieur")
        index=1;
        else if (select->selectedRows(4).value(0).data().toString()=="Architecte")
        index=2;
    else index=3;
    ui->id_emp_i_2->setText(select->selectedRows().value(0).data().toString());
    ui->nom_emp_i_2->setText(select->selectedRows(1).value(0).data().toString());
    ui->role_emp_i_2->setCurrentIndex(index);
    ui->login_emp_i_2->setText(select->selectedRows(5).value(0).data().toString());
    ui->pass_emp_i_2->setText(select->selectedRows(6).value(0).data().toString());
}

void MainWindow::on_Retour_employe_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
