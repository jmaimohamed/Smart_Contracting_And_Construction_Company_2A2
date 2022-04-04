#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chantiers.h"
#include "connexion.h"
#include "qcustomplot.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QDate>
#include <QString>
#include <QComboBox>
#include <QSqlQuery>
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
    QTableView table_necessiteux,table_n2;
             QSqlQueryModel * Mod=new  QSqlQueryModel();
             QSqlQueryModel * Mod2=new  QSqlQueryModel();
                  connexion c;
                  QSqlQuery qry,q2;
                  qry.prepare("select EMPLACEMENT from CHANTIERS");
                  qry.exec();
                  Mod->setQuery(qry);
                  table_necessiteux.setModel(Mod);

                  q2.prepare("select AVG(SURFACE) from CHANTIERS group by EMPLACEMENT");
                  q2.exec();
                  Mod2->setQuery(q2);
                  table_n2.setModel(Mod2);


                  const int rowCount = table_necessiteux.model()->rowCount();
                  const int rowCount2 = table_n2.model()->rowCount();
                 qDebug()<<table_necessiteux.model()->data(table_necessiteux.model()->index(0, 0)).toString().simplified();
                 qDebug()<<table_n2.model()->data(table_n2.model()->index(0, 0)).toInt();
    QCPStatisticalBox *statistical = new QCPStatisticalBox(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QBrush boxBrush(QColor(60, 60, 255, 100));
    boxBrush.setStyle(Qt::Dense6Pattern); // make it look oldschool
    statistical->setBrush(boxBrush);

    // specify data:
    QCPBars *besoin = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);

                     besoin->setAntialiased(false); // gives more crisp, pixel aligned bar borders

                     besoin->setStackingGap(1);

    // prepare manual x axis labels:
          QVector<double> ticks;
                 QVector<QString> labels;

                   for(int i=0; i<rowCount; ++i){
                                         ticks.push_back(i);
                                         labels.push_back(table_necessiteux.model()->data(table_necessiteux.model()->index(i, 0)).toString().simplified());
                                         qDebug()<<ticks[i];
                                         qDebug()<<labels[i];
                                     }
    ui->customPlot->xAxis->setSubTicks(false);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->setTickLabelRotation(20);
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
                     ui->customPlot->xAxis->setTicker(textTicker);
                     ui->customPlot->xAxis->setTickLabelRotation(60);
                     ui->customPlot->xAxis->setSubTicks(false);
                     ui->customPlot->xAxis->setTickLength(0, 4);
                     ui->customPlot->xAxis->setRange(0, 8);
                     ui->customPlot->xAxis->setBasePen(QPen(Qt::black));
                     ui->customPlot->xAxis->setTickPen(QPen(Qt::black));
                     ui->customPlot->xAxis->grid()->setVisible(true);
                     ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
                     ui->customPlot->xAxis->setTickLabelColor(Qt::black);
                     ui->customPlot->xAxis->setLabelColor(Qt::black);
    ui->customPlot->xAxis->setTicker(textTicker);

    // prepare axes:
    ui->customPlot->yAxis->setLabel(QString::fromUtf8("Surface"));
    ui->customPlot->rescaleAxes();
    ui->customPlot->xAxis->scaleRange(1.7, ui->customPlot->xAxis->range().center());
    ui->customPlot->yAxis->setRange(0,1000);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);





    QVector<double>besoinData;

                     for(int i=0; i<rowCount2; ++i){
                         besoinData.push_back(table_n2.model()->data(table_n2.model()->index(i, 0)).toInt());
                         qDebug()<<besoinData;

                     }

                     besoin->setData(ticks, besoinData);
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
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery qtest;
    qtest.prepare("select ID_E from EMPLOYEES where role = 'manager' ");
    qtest.exec();
    model->setQuery(qtest);
    ui->nomm->setModel(model);
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
    int id_e=ui->nomm->currentText().toInt();
  chantiers C(id_c, emplacement , surface, description ,date_debut, date_fin,id_e);
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
       QSqlQueryModel * model=new QSqlQueryModel();
       QSqlQuery qtest;
       qtest.prepare("select ID_E from EMPLOYEES where role = 'manager' ");
       qtest.exec();
       model->setQuery(qtest);
       ui->id->setModel(model);
}

void MainWindow::on_retour_chantier_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_modifier_clicked()
{
   chantiers c(ui->le_idc_3->text().toInt(),ui->emplacement_3->text(), ui->surface_3->text().toInt(),ui->description_3->text() ,QDate::currentDate(), QDate::currentDate(),ui->id->currentText().toInt());
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


