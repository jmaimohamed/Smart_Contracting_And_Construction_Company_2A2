#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employees.h"
#include "messages.h"
#include "qrcode.h"
#include "qrwidget.h"
#include "qrcodegenratorworker.h"
#include "qcustomplot.h"
#include "connection.h"
#include <iostream>
#include <iostream>
#include <ostream>
#include <QMessageBox>
#include <QTextEdit>
#include <QIntValidator>
#include<QWidget>
#include <QTextDocument>
#include <QTextEdit>
#include <fstream>
#include <windows.h>
#include <QTextStream>
#include <QRadioButton>
#include <QFileDialog>
#include <QPixmap>
#include <QPainter>
#include <string>
#include <QtSvg/QSvgRenderer>
#include <QtSvg/QSvgGenerator>
#include<QDirModel>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QAbstractPrintDialog>
#include<QDirModel>
#include <QtPrintSupport/QPrintDialog>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->emp_tri_dir=0;
    ui->setupUi(this);
    ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->checkState(),ui->chercher_employe->text()));
    ui->titres_rec->setModel(M.afficher());
    ui->id_emp_i->setValidator(new QIntValidator(0,99999999,this));
    ui->id_emp_i_2->setValidator(new QIntValidator(0,99999999,this));
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ArdunioProcess=false;



                  Connection c;
                  QSqlQuery qry,q2;
                  qry.prepare("select NOM_HEURE from TRAVAIL");
                  qry.exec();
                  ui->customPlot->legend->setVisible(true);
                  ui->customPlot->legend->setFont(QFont("Helvetica",9));
                  // set locale to english, so we get english decimal separator:
                  ui->customPlot->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
                  // add confidence band graphs:
                  ui->customPlot->addGraph();
                  QPen pen;
                  pen.setStyle(Qt::DashLine);
                  pen.setWidth(2);
                  pen.setColor(Qt::red);
                  ui->customPlot->graph(0)->setPen(pen);
                  ui->customPlot->graph(0)->setName("Nombre d'heures");
                  // add theory curve graph:
                  ui->customPlot->graph(0)->setName("Nombre d'heures");
                  // add error bars:
                  QCPErrorBars *errorBars = new QCPErrorBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
                  errorBars->removeFromLegend();
                  errorBars->setAntialiased(false);
                  errorBars->setPen(QPen(QColor(180,180,180)));

                  QVector<double>  y1(50), y1err(50), x1(50);
                  for (int i=0; i<6; ++i)
                  {
                    x1[i]=i;
                    if(qry.next())
                    y1[i]=qry.value(0).toInt();
                  }
                  // pass data to graphs and let Qui->customPlot determine the axes ranges so the whole thing is visible:
                  ui->customPlot->graph(0)->setData(x1, y1);
                  ui->customPlot->graph(0)->rescaleAxes(true);
                  // setup look of bottom tick labels:
                  ui->customPlot->xAxis->setTickLabelRotation(30);
                  ui->customPlot->xAxis->ticker()->setTickCount(6);
                  // make top right axes clones of bottom left axes. Looks prettier:
                  ui->customPlot->axisRect()->setupFullAxesBox();
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

    ui->stackedWidget->setCurrentIndex(9);

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
    int salary;
if (ui->role_emp_i->currentText()=="Chef")
    salary=3500;
else if (ui->role_emp_i->currentText()=="Ouvrier")
    salary=1000;
else salary=2500;
    Employees E(id,nom,QDate::currentDate(),salary,role,login,password);
    bool test=E.ajouter();
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout Effectue\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->checkState(),ui->chercher_employe->text()));
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
            ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->checkState(),ui->chercher_employe->text()));
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
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_Retour_employe_2_clicked()
{
        ui->stackedWidget->setCurrentIndex(2);
        ui->id_emp_i->text()="";
        ui->nom_emp_i->text()="";
        ui->login_emp_i->text()="";
        ui->pass_emp_i->text()="";
        ui->role_emp_i->setCurrentIndex(1);
}

void MainWindow::on_ajouter_emp_2_clicked()
{
    int salary;
if (ui->role_emp_i_2->currentText()=="Chef")
    salary=3500;
else if (ui->role_emp_i_2->currentText()=="Ouvrier")
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
           ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->isTristate(),ui->chercher_employe->text()));
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Modification non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_modifier_emp_clicked()
{

    int index=0;
    ui->stackedWidget->setCurrentIndex(5);
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
    ui->id_emp_i_2->text()="";
    ui->nom_emp_i_2->text()="";
    ui->login_emp_i_2->text()="";
    ui->pass_emp_i_2->text()="";
    ui->role_emp_i_2->setCurrentIndex(1);
}


void MainWindow::on_tri_emp_currentIndexChanged(int index)
{
   (void)index;
ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->checkState(),ui->chercher_employe->text()));
}

void MainWindow::on_direc_stateChanged(int arg1)
{
    (void)arg1;
    ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->checkState(),ui->chercher_employe->text()));
}

void MainWindow::on_chercher_employe_textEdited(const QString &arg1)
{
    (void)arg1;
    ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->checkState(),ui->chercher_employe->text()));
}



void MainWindow::on_generQR_clicked()
{
    int  Code=ui->id_emp_i->text().toInt();
    const qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(std::to_string(Code).c_str(), qrcodegen::QrCode::Ecc::LOW);
    std::ofstream myfile;
    myfile.open ("qrcode.svg") ;
    myfile << qr.toSvgString(1);
    myfile.close();
    QSvgRenderer svgRenderer(QString("qrcode.svg"));
    QPixmap pix( QSize(90, 90));
    QPainter pixPainter( &pix );
    svgRenderer.render(&pixPainter);
    ui->QR_aff->setPixmap(pix);
}

void MainWindow::on_pushButton_clicked()
{


    Messages M(ui->titre_rec->text(),
                 ui->reclamation_i->toPlainText(),
                 false
                 );


    bool result_query = M.ajouter();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Ajout effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->isTristate(),ui->chercher_employe->text()));
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Ajout non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
    ui->titres_rec->setModel(M.afficher());
}

void MainWindow::on_reclamations_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_titres_rec_clicked(const QModelIndex &index)
{
   (void)&index;
   QItemSelectionModel *select = ui->titres_rec->selectionModel();
   QString titre=select->selectedRows().value(0).data().toString();
   QString text=M.fetch_msg(titre);
   ui->titre_aff->setText(titre);
   ui->msg_aff->setText(text);
}


void MainWindow::on_supp_msg_clicked()
{
    QItemSelectionModel *select = ui->titres_rec->selectionModel();
    QString titre=select->selectedRows().value(0).data().toString();

    if (M.supprimer(titre))
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Supression effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->tableView_2->setModel(Emp.afficher(ui->tri_emp->currentIndex(),ui->direc->isTristate(),ui->chercher_employe->text()));
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Supression non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
    ui->titres_rec->setModel(M.afficher());
}

void MainWindow::on_Retour_employe_5_clicked()
{
 ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_retour_emp_clicked()
{
 ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_QR_interface_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_retour_emp_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->id_entry->setText("");
    ui->entry_rej_acc->setText("");
    ui->entry_rej_acc->setStyleSheet("QLineEdit{border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
}

void MainWindow::readValues(){
    QString final=".";
    QString comp="";
    int rech;
    ArdunioProcess=true;
    QFile file("C:/Users/Wickkid/MyDrive/2ndYear/2ndSemester/Projet_C++/ARDUINO/PYTHON/QRcode.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    file.close();
   while (ArdunioProcess==true)
        {
file.open(QIODevice::ReadOnly | QIODevice::Text);
QTextStream in(&file);
final=in.readAll();
if((comp!=final) && (final!="."))
{
    comp=final;
}
ui->id_entry->setText(comp);
if (ui->id_entry->text()!="")
{
string test=ui->id_entry->text().toStdString();
if (!(test.find_first_not_of("0123456789") == std::string::npos))
    rech=0;
else {
    rech=Emp.rechercher(ui->id_entry->text().toInt());
}
if (rech==1)
{
    ui->entry_rej_acc->setText("QR Code Valide!");
    ui->entry_rej_acc->setStyleSheet("QLineEdit{background-color:green;border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
}
else
{
    ui->entry_rej_acc->setText("QR Code Non Valide!");
    ui->entry_rej_acc->setStyleSheet("QLineEdit{background-color:red;border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
}
}

QApplication::processEvents();
QThread::msleep(500);
file.close();
        }


}

void MainWindow::on_Activate_ard_clicked()
{
system("start C:/Users/Wickkid/MyDrive/2ndYear/2ndSemester/Projet_C++/ARDUINO/exec.bat");
readValues();
}



void MainWindow::on_terminate_ard_clicked()
{
    ArdunioProcess=false;
    ui->entry_rej_acc->setText("");
    ui->entry_rej_acc->setStyleSheet("QLineEdit{border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
    system("start C:/Users/Wickkid/MyDrive/2ndYear/2ndSemester/Projet_C++/ARDUINO/kill.bat");
    QMessageBox::information(nullptr, QObject::tr("Processus Arreté!"),
                             QObject::tr("Processus Arrete!"), QMessageBox::Ok);

}

