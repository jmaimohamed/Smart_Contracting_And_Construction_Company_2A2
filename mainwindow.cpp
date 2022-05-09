#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "mainwindow.h"
#include "matierep.h"
#include "qcustomplot.h"
#include "connection.h"
#include "arduino.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->tab_test->setModel(M.afficher());
      ui->tab_test->setSelectionBehavior(QAbstractItemView::SelectRows);
      serial = new QSerialPort(); //Inicializa la variable Serial
      arduino_available = false;

      foreach (const QSerialPortInfo &serial_Info, QSerialPortInfo::availablePorts()) {//Lee la informaciรณn de cada puerto serial
              qDebug()<<"Puerto: "<<serial_Info.portName();
              portname = serial_Info.portName();
              qDebug()<<"Vendor Id: "<<serial_Info.vendorIdentifier();
              vendorId = serial_Info.vendorIdentifier();
              qDebug()<<"Product Id: "<<serial_Info.productIdentifier();
              productId = serial_Info.productIdentifier();
              arduino_available = true;
      }
      if(arduino_available){
          arduino_init();

      }

}
void MainWindow::arduino_init()
{
    serial->setPortName(portname);
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        serial->open(QIODevice::ReadWrite);
        connect(serial,SIGNAL(readyRead()),this,SLOT(update()));
}
void MainWindow::update()
{ qDebug()<<"tfdgdfgfdfg";
    QString text= serial->readAll();
    qDebug()<<"ttttttt"<<text.toInt();
     ui->lcdNumber->display(text.toInt());
     int k=M.getQuantite_UPDATE_S();
     qDebug()<<"k"<<k;
     int all=k+text.toInt();
     M.modifier_qt(all);
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

     QTableView table_necessiteux,table_n2;
         QSqlQueryModel * Mod=new  QSqlQueryModel();
         QSqlQueryModel * Mod2=new  QSqlQueryModel();
              Connection c;
              QSqlQuery qry,q2;
              qry.prepare("select NOM_MP from MP");
              qry.exec();
              Mod->setQuery(qry);
              table_necessiteux.setModel(Mod);

              q2.prepare("select AVG(Quantite) from MP group by NOM_MP");
              q2.exec();
              Mod2->setQuery(q2);
              table_n2.setModel(Mod2);

              c.closeConnection();

             qDebug()<<table_necessiteux.model()->data(table_necessiteux.model()->index(0, 0)).toString().simplified();
             qDebug()<<table_n2.model()->data(table_n2.model()->index(0, 0)).toInt();

             const int rowCount = table_necessiteux.model()->rowCount();
             const int rowCount2 = table_n2.model()->rowCount();



            // set dark background gradient:
             QLinearGradient gradient(0, 0, 0, 400);
             gradient.setColorAt(0, QColor(90, 90, 90));
             gradient.setColorAt(0.38, QColor(105, 105, 105));
             gradient.setColorAt(1, QColor(70, 70, 70));
             ui->customPlot->setBackground(QBrush(gradient));

             // create empty bar chart objects:
             QCPBars *besoin = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);

             besoin->setAntialiased(false); // gives more crisp, pixel aligned bar borders

             besoin->setStackingGap(1);

             // set names and colors:

             besoin->setName("Matiere Premiers");
             besoin->setPen(QPen(QColor(0, 168, 140).lighter(130)));
         besoin->setBrush(QColor(0, 168, 140));
             // stack bars on top of each other:


             // prepare x axis with needs' labels:
             QVector<double> ticks;
             QVector<QString> labels;

             for(int i=0; i<rowCount; ++i){
                 ticks.push_back(i);
                 labels.push_back(table_necessiteux.model()->data(table_necessiteux.model()->index(i, 0)).toString().simplified());
                 qDebug()<<ticks[i];
                 qDebug()<<labels[i];
             }
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

             // prepare y axis:
             ui->customPlot->yAxis->setRange(0,50);
         ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
         ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
         ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
         ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
         ui->customPlot->yAxis->grid()->setSubGridVisible(true);
         ui->customPlot->yAxis->setTickLabelColor(Qt::white);
         ui->customPlot->yAxis->setLabelColor(Qt::white);
         ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
         ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

             // Add data:
             QVector<double>besoinData;

             for(int i=0; i<rowCount2; ++i){
                 besoinData.push_back(table_n2.model()->data(table_n2.model()->index(i, 0)).toInt());
                 qDebug()<<besoinData;

             }

             besoin->setData(ticks, besoinData);

             // setup legend:
             ui->customPlot->legend->setVisible(true);
         ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
         ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
         ui->customPlot->legend->setBorderPen(Qt::NoPen);
         QFont legendFont = font();
         legendFont.setPointSize(10);
         ui->customPlot->legend->setFont(legendFont);
         ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

         ui->customPlot->replot();
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
 QString noti="supprimer";
 M.notif_ajout(noti);
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
     QString noti="ajout";

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
     QString noti="modifier";
      M.notif_ajout(noti);
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


void MainWindow::on_fileMP_clicked()
{
    M.file();
}

void MainWindow::on_arduino_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}



void MainWindow::on_return_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void MainWindow::on_yajour_clicked()
{
    if(serial->isWritable()){
           serial->write("2");
           qDebug()<<"yajour";
    qDebug()<< "data from arduino" << serial->readAll();}
}



void MainWindow::on_simen_clicked()
{

qDebug() << "arduino : " << serial->isWritable() << endl;

    if(serial->isWritable()){
           serial->write("1");
           qDebug()<<"simen";
 }


    }





void MainWindow::on_plus_S_clicked()
{
    int gets=ui->prix->selectedText().toInt();
    qDebug()<<"gets"<<gets;
     //int k=M.getQuantite_UPDATE_S();
     //int all=k+gets;
     //M.modifier_qt(all);
}
