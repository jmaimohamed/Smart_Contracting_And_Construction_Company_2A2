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
#include "mainwindow.h"
#include "matierep.h"
#include "arduino.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
     ui->setupUi(this);
    ui->chan->setModel(a.afficher()) ;
    ui->chan->setSelectionBehavior(QAbstractItemView::SelectRows);
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
{
    QString text= serial->readAll();
     ui->lcdNumber->display(text.toInt());
     int k=M.getQuantite_UPDATE_S();
     qDebug()<<"k"<<k;
     int all=k+text.toInt();
     qDebug()<<"all"<<all;
     M.modifier_qt(all);
     ui->tab_test->setModel(M.afficher());
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

     QTableView table_mp,table_test;
         QSqlQueryModel * Modd=new  QSqlQueryModel();
         QSqlQueryModel * Modd2=new  QSqlQueryModel();
              connexion c;
              QSqlQuery qry1,qry2;
              qry1.prepare("select NOM_MP from MP");
              qry1.exec();
              Modd->setQuery(qry1);
              table_mp.setModel(Modd);

              qry2.prepare("select AVG(Quantite) from MP group by NOM_MP");
              qry2.exec();
              Modd2->setQuery(qry2);
              table_test.setModel(Modd2);

              c.closeConnection();

             qDebug()<<table_mp.model()->data(table_mp.model()->index(0, 0)).toString().simplified();
             qDebug()<<table_test.model()->data(table_test.model()->index(0, 0)).toInt();

             const int rowCountt = table_mp.model()->rowCount();
             const int rowCountt2 = table_test.model()->rowCount();



            // set dark background gradient:
             QLinearGradient gradient(0, 0, 0, 400);
             gradient.setColorAt(0, QColor(90, 90, 90));
             gradient.setColorAt(0.38, QColor(105, 105, 105));
             gradient.setColorAt(1, QColor(70, 70, 70));
             ui->customPlot_2->setBackground(QBrush(gradient));

             // create empty bar chart objects:
             QCPBars *besoinn = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);

             besoinn->setAntialiased(false); // gives more crisp, pixel aligned bar borders

             besoinn->setStackingGap(1);

             // set names and colors:

             besoinn->setName("Matiere Premiers");
             besoinn->setPen(QPen(QColor(50, 168, 140).lighter(200)));
         besoinn->setBrush(QColor(50, 168, 140));
             // stack bars on top of each other:


             // prepare x axis with needs' labels:
             QVector<double> tickss;
             QVector<QString> labelss;

             for(int i=0; i<rowCountt; ++i){
                 tickss.push_back(i);
                 labelss.push_back(table_mp.model()->data(table_mp.model()->index(i, 0)).toString().simplified());
                 qDebug()<<tickss[i];
                 qDebug()<<labelss[i];
             }
             QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
             textTicker->addTicks(tickss, labelss);
             ui->customPlot_2->xAxis->setTicker(textTicker);
             ui->customPlot_2->xAxis->setTickLabelRotation(60);
             ui->customPlot_2->xAxis->setSubTicks(false);
             ui->customPlot_2->xAxis->setTickLength(0, 4);
             ui->customPlot_2->xAxis->setRange(0, 8);
             ui->customPlot_2->xAxis->setBasePen(QPen(Qt::black));
             ui->customPlot_2->xAxis->setTickPen(QPen(Qt::black));
             ui->customPlot_2->xAxis->grid()->setVisible(true);
             ui->customPlot_2->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
             ui->customPlot_2->xAxis->setTickLabelColor(Qt::black);
             ui->customPlot_2->xAxis->setLabelColor(Qt::black);

             // prepare y axis:
             ui->customPlot_2->yAxis->setRange(0,50);
         ui->customPlot_2->yAxis->setPadding(5); // a bit more space to the left border
         ui->customPlot_2->yAxis->setBasePen(QPen(Qt::white));
         ui->customPlot_2->yAxis->setTickPen(QPen(Qt::white));
         ui->customPlot_2->yAxis->setSubTickPen(QPen(Qt::white));
         ui->customPlot_2->yAxis->grid()->setSubGridVisible(true);
         ui->customPlot_2->yAxis->setTickLabelColor(Qt::white);
         ui->customPlot_2->yAxis->setLabelColor(Qt::white);
         ui->customPlot_2->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
         ui->customPlot_2->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

             // Add data:
             QVector<double>besoinDataa;

             for(int i=0; i<rowCountt2; ++i){
                 besoinDataa.push_back(table_test.model()->data(table_test.model()->index(i, 0)).toInt());
                 qDebug()<<besoinDataa;

             }

             besoinn->setData(tickss, besoinDataa);

             // setup legend:
             ui->customPlot_2->legend->setVisible(true);
         ui->customPlot_2->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
         ui->customPlot_2->legend->setBrush(QColor(255, 255, 255, 100));
         ui->customPlot_2->legend->setBorderPen(Qt::NoPen);
         QFont legendFont = font();
         legendFont.setPointSize(10);
         ui->customPlot_2->legend->setFont(legendFont);
         ui->customPlot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

         ui->customPlot_2->replot();
         ui->tab_test->setModel(M.afficher());
}

void MainWindow::on_gerer_chantiers_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    QTableView table_necessiteux,table_n2;
             QSqlQueryModel * Mod=new  QSqlQueryModel();
             QSqlQueryModel * Mod2=new  QSqlQueryModel();
                  connexion c;
                  QSqlQuery qry,q2;
                  qry.prepare("select EMPLACEMENT from CHANTIERS group by EMPLACEMENT");
                  qry.exec();
                  Mod->setQuery(qry);
                  table_necessiteux.setModel(Mod);

                  q2.prepare("select COUNT(EMPLACEMENT) from CHANTIERS group by EMPLACEMENT");
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
    ui->customPlot->yAxis->setLabel(QString::fromUtf8("Nombre de chantier"));
    ui->customPlot->rescaleAxes();
    ui->customPlot->xAxis->scaleRange(1.7, ui->customPlot->xAxis->range().center());
    ui->customPlot->yAxis->setRange(0,1);
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


//----------debut  matiere premiers--------////
void MainWindow::on_return_MP_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_envoi_MP_clicked()
{
    QItemSelectionModel *select2 = ui->tab_test->selectionModel();
    ui->ID_MP->setText(select2->selectedRows().value(0).data().toString());
     ui->Nom_MP->setText(select2->selectedRows(1).value(0).data().toString());
      ui->Prix_MP->setText(select2->selectedRows(2).value(0).data().toString());
       ui->Quantite_MP->setText(select2->selectedRows(3).value(0).data().toString());
        ui->ID_FMP->setText(select2->selectedRows(4).value(0).data().toString());
}

void MainWindow::on_Ajout_MP_clicked()
{
    int ID_MP=ui->ID_MP->text().toInt();
        QString NOM_MP=ui->Nom_MP->text();
         int Quantite=ui->Quantite_MP->text().toInt();
        int Prix=ui->Prix_MP->text().toInt();
        int ID_F=ui->ID_FMP->text().toInt();
     MatiereP M(ID_MP,NOM_MP,Quantite,Prix,ID_F);
     M.ajouter();
     ui->tab_test->setModel(M.afficher());
     QString noti="ajout";

                  M.notif_ajout(noti);
}

void MainWindow::on_update_MP_clicked()
{
    int ID_MP=ui->ID_MP->text().toInt();
        QString NOM_MP=ui->Nom_MP->text();
         int Quantite=ui->Quantite_MP->text().toInt();
        int Prix=ui->Prix_MP->text().toInt();
        int ID_F=ui->ID_FMP->text().toInt();
   MatiereP M(ID_MP,NOM_MP,Quantite,Prix,ID_F);
    M.modifier(ID_MP,NOM_MP,Quantite,Prix,ID_F,ID_MP);
    ui->tab_test->setModel(M.afficher());
     QString noti="modifier";
      M.notif_ajout(noti);
}

void MainWindow::on_supprimer_MP_clicked()
{
    QItemSelectionModel *select1 = ui->tab_test->selectionModel();
     QString var=select1->selectedRows().value(0).data().toString();

  M.supprimer(var.toInt());
ui->tab_test->setModel(M.afficher());
QString noti="supprimer";
M.notif_ajout(noti);
}

void MainWindow::on_chercherMP_clicked()
{
    QString cher =ui->le_chercherMP->text();
    ui->tab_test->setModel(M.chercher(cher));
}


void MainWindow::on_file_MP_clicked()
{
    M.file();
}

void MainWindow::on_triNM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_NOM_MP());}
}

void MainWindow::on_triQM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_Quantite());}
}

void MainWindow::on_triPM_clicked(bool checked)
{
    if(checked ){
       ui->tab_test->setModel(M.tri_Prix());}
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
void MainWindow::on_return_Arduino_clicked()
{
  ui->stackedWidget->setCurrentIndex(3);
  ui->tab_test->setModel(M.afficher());
}
void MainWindow::on_Arduinoo_clicked()
{
     ui->stackedWidget->setCurrentIndex(8);
}
//----------fin   matiere premiers--------////





