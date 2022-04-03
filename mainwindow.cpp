#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chantiers.h"
#include "connexion.h"
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

}

void MainWindow::on_retour_chantier_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_modifier_clicked()
{
   chantiers c(ui->le_idc_3->text().toInt(),ui->emplacement_3->text(), ui->surface_3->text().toInt(),ui->description_3->text() ,QDate::currentDate(), QDate::currentDate(),ui->nomm_3->currentText().toInt());
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




void MainWindow::on_stackedWidget_currentChanged(int arg1)
{
    QTableView stat,chan;
        QSqlQueryModel * Mod=new  QSqlQueryModel();
        QSqlQueryModel * Mod2=new  QSqlQueryModel();
            connexion c ;
             QSqlQuery qry,q2;
             qry.prepare("select SURFACE from CHANTIERS group by SURFACE");
             qry.exec();
             Mod->setQuery(qry);
             stat.setModel(Mod);

             q2.prepare("select count(*) from CHANTIERS group by SURFACE");
             q2.exec();
             Mod2->setQuery(q2);
             chan.setModel(Mod2);



            qDebug()<<stat.model()->data(stat.model()->index(0, 0)).toString().simplified();
            qDebug()<<chan.model()->data(chan.model()->index(0, 0)).toInt();

            const int rowCount = stat.model()->rowCount();
            const int rowCount2 = chan.model()->rowCount();

        if(arg1==3){

           // set dark background gradient:
            QLinearGradient gradient(0, 0, 0, 400);
            gradient.setColorAt(0, QColor(90, 90, 90));
            gradient.setColorAt(0.38, QColor(105, 105, 105));
            gradient.setColorAt(1, QColor(70, 70, 70));
            ui->stat->setBackground(QBrush("#fff"));

            // create empty bar chart objects:
            QCPBars *besoin = new QCPBars(ui->stat->xAxis, ui->stat->yAxis);

            besoin->setAntialiased(false); // gives more crisp, pixel aligned bar borders

            besoin->setStackingGap(1);

            // set names and colors:

            besoin->setName("Surface");
            besoin->setPen(QPen(QColor("#D5E7F2").lighter(130)));
            besoin->setBrush(QColor("#D5E7F2"));
            // stack bars on top of each other:


            // prepare x axis with needs' labels:
            QVector<double> ticks;
            QVector<QString> labels;

            for(int i=0; i<rowCount; ++i){
                ticks.push_back(i);
                labels.push_back(stat.model()->data(stat.model()->index(i, 0)).toString().simplified());
                qDebug()<<ticks[i];
                qDebug()<<labels[i];
            }
            QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
            textTicker->addTicks(ticks, labels);
            ui->stat->xAxis->setTicker(textTicker);
            ui->stat->xAxis->setTickLabelRotation(60);
            ui->stat->xAxis->setSubTicks(false);
            ui->stat->xAxis->setTickLength(0, 4);
            ui->stat->xAxis->setRange(0, 8);
            ui->stat->xAxis->setBasePen(QPen(Qt::black));
            ui->stat->xAxis->setTickPen(QPen(Qt::black));
            ui->stat->xAxis->grid()->setVisible(true);
            ui->stat->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
            ui->stat->xAxis->setTickLabelColor(Qt::black);
            ui->stat->xAxis->setLabelColor(Qt::black);

            // prepare y axis:
            ui->stat->yAxis->setRange(0, 12.1);
            ui->stat->yAxis->setPadding(5); // a bit more space to the left border
            ui->stat->yAxis->setLabel("Nombre de nécessiteux\n par Besoin");
            ui->stat->yAxis->setBasePen(QPen(Qt::black));
            ui->stat->yAxis->setTickPen(QPen(Qt::black));
            ui->stat->yAxis->setSubTickPen(QPen(Qt::black));
            ui->stat->yAxis->grid()->setSubGridVisible(true);
            ui->stat->yAxis->setTickLabelColor(Qt::black);
            ui->stat->yAxis->setLabelColor(Qt::black);
            ui->stat->yAxis->grid()->setPen(QPen(QColor("#000"), 0, Qt::SolidLine));
            ui->stat->yAxis->grid()->setSubGridPen(QPen(QColor("#000"), 0, Qt::DotLine));

            // Add data:
            QVector<double>besoinData;

            for(int i=0; i<rowCount2; ++i){
                besoinData.push_back(stat.model()->data(stat.model()->index(i, 0)).toInt());
                qDebug()<<besoinData;

            }

            besoin->setData(ticks, besoinData);

            // setup legend:
            ui->stat->legend->setVisible(true);
            ui->stat->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
            ui->stat->legend->setBrush(QColor("#fff"));
            ui->stat->legend->setBorderPen(Qt::NoPen);
            QFont legendFont = font();
            legendFont.setPointSize(15);
            ui->stat->legend->setFont(legendFont);
            ui->stat->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
            ui->stat->replot();
        }
        ui->stat->replot();
}



