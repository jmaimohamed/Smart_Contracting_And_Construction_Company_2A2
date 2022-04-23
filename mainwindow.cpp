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
#include <QtPrintSupport/QPrinter>
#include <QDateTime>
#include <QNetworkAccessManager>
#include <QProcess>
#include <fstream>
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
// insert here for reco
    Partenaire p;
    ui->amrou_outputtable_3->setModel(p.afficher());
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
    QItemSelectionModel *select = ui->amrou_outputtable_2->selectionModel();
    ui->amrou_partner_contrat->setText("To: "+select->selectedRows(1).value(0).data().toString());
    ui->stackedWidget->setCurrentIndex(4);
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    ui->amrou_date_contrat->setText(formattedTime);
    ui->amrou_company_contrat->setText("Architech");
    ui->amrou_lieu_contrat->setText("Esprit");
    ui->amrou_contenu_contrat->setText("");
    ui->amrou_contenu_translated->setText("");
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
  ui->amrou_nom_2->setText(select->selectedRows(1).value(0).data().toString());
  ui->amrou_email_2->setText(select->selectedRows(4).value(0).data().toString());
  ui->amrou_description_2->setText(select->selectedRows(3).value(0).data().toString());
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
     ui->amrou_description_2->setText("");
     ui->amrou_email_2->setText("");
}

void MainWindow::on_amrou_filter_reset_clicked()
{
    Partenaire p;
    ui->amrou_outputtable->setModel(p.afficher());
}

void MainWindow::on_amrou_filter_go_clicked()
{
    Partenaire p;
    qDebug() << ui->amrou_secteur_filter->currentText();
    ui->amrou_outputtable->setModel(p.afficher(ui->amrou_secteur_filter->currentText()));
}

void MainWindow::on_amrou_download_pdf_clicked()
{
    Partenaire p;
    p.Contract_to_Pdf(ui->amrou_company_contrat->text(),ui->amrou_date_contrat->text(),ui->amrou_lieu_contrat->text(),ui->amrou_contenu_contrat->toPlainText(),ui->amrou_header_contrat->text(),ui->amrou_partner_contrat->text());
}

void MainWindow::on_amrou14_clicked()
{
 Partenaire p;
 QItemSelectionModel *select = ui->amrou_outputtable_3->selectionModel();
 ofstream idchantier("../myproject/id_chantier.txt");
 QString id = "2"; //select->selectedRows(0).value(0).data().toString();
 qDebug() << "id = " << id << endl;
 idchantier << id.toStdString();
 idchantier.close();
 ui->stackedWidget->setCurrentIndex(7);
 QString resultat = p.recommand();
 int x = QString::compare(resultat,"none", Qt::CaseInsensitive);
    if (x==0) {
        ui->amrou_recommend_result->setText("Pas de partenaire préferé");
        ui->amrou_contact_email->setVisible(false);
        ui->amrou_label13_2->setVisible(false);
        ui->amrou_label13_3->setVisible(false);
        ui->amrou_email_content->setVisible(false);
        ui->amrou_email_sujet->setVisible(false);
    }
    else
    {
        QSqlQueryModel* model=new  QSqlQueryModel();
        model = p.afficher(resultat.toInt());
        ui->amrou_recommend_result->setText("Le partenaire "+model->data(model->index(0,1)).toString()+", Son identifiant est "+model->data(model->index(0,0)).toString()+".");
        ui->amrou_contact_email->setVisible(true);
        ui->amrou_label13_2->setVisible(true);
        ui->amrou_label13_3->setVisible(true);
        ui->amrou_email_content->setVisible(true);
        ui->amrou_email_sujet->setVisible(true);
    }


 //QItemSelectionModel *select = ui->amrou_outputtable_3->selectionModel();
 //p.Send_email(select->selectedRows(4).value(0).data().toString(),select->selectedRows(1).value(0).data().toString());
}

void MainWindow::on_amrou_translates_clicked()
{
    Partenaire p;
    // Qt part

        //write chosen language to language.txt
        ofstream Language("../myproject/language.txt");
        QString lang = ui->amrou_language_translate->currentText();
        Language << lang.toStdString();
        Language.close();
        // end of writing language to file

        // write content to be translated to file
        ofstream contenu("../myproject/translate.txt");
        QString content = ui->amrou_contenu_contrat->toPlainText();
        contenu << content.toStdString();
        contenu.close();
        // end of writing content to file

    // end part writing to files from Qt

    // reserved for translation api using python (translate.py)
        ui->amrou_contenu_translated->setText(p.translate());
}

void MainWindow::on_amrou_inverse_content_clicked()
{
    QString temp;
    temp = ui->amrou_contenu_contrat->toPlainText();
    ui->amrou_contenu_contrat->setText(ui->amrou_contenu_translated->toPlainText());
    ui->amrou_contenu_translated->setText(temp);
}

void MainWindow::on_amrou5_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_amrou_contact_email_clicked()
{
    Partenaire p;
     QString resultat = p.recommand();
     QSqlQueryModel* model=new  QSqlQueryModel();
     model = p.afficher(resultat.toInt());
   p.Send_email(model->data(model->index(0,4)).toString(),model->data(model->index(0,1)).toString(),ui->amrou_email_content->toPlainText(),ui->amrou_email_sujet->toPlainText());
}
