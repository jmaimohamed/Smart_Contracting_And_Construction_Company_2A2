#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chantiers.h"
#include "fournisseur.h"
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
#include "partenaire.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employees.h"
#include "messages.h"
#include "tache.h"
#include <QSqlRecord>
#include "exportexcel.h"
#include "qrcode.h"
#include "qrwidget.h"
#include "qrcodegenratorworker.h"
#include "qcustomplot.h"
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
#include <QVBoxLayout>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QMenu>
#include <QAction>

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
//Camera mehdi

    fournissseur f;
        mCamera= new QCamera(this);
        mCameraViewfinder= new QCameraViewfinder(this);
    mCameraImageCapture = new QCameraImageCapture(mCamera,this);
    mLayout= new QVBoxLayout;
    mOptionmenu= new QMenu("option", this);
    mEgendrerAction= new QAction(" action", this);
    meffacerAction = new QAction("effacer",this);
    mcapturerAction= new QAction("capturer", this);
    mOptionmenu->addActions({mEgendrerAction,meffacerAction,mcapturerAction});
    ui->optionbutton->setMenu(mOptionmenu);
    mCamera->setViewfinder(mCameraViewfinder);
    mLayout->addWidget(mCameraViewfinder);
    mLayout->setMargin(0);
            ui->scrollAreaWidgetContents_2->setLayout(mLayout);
            connect(mEgendrerAction, &QAction::triggered,[&](){
                mCamera->start();
                    });
            connect(meffacerAction, &QAction::triggered,[&](){
                mCamera->stop();
            });
            connect(mcapturerAction, &QAction::triggered,[&](){
                auto filename=QFileDialog::getSaveFileName(this, "Capturer", "/","Image(*.jp;*.jpeg)");
                if(filename.isEmpty()){
                    return;
                }
                mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    QImageEncoderSettings ImageEcoderSettings ;
    ImageEcoderSettings.setCodec("image/jpeg");
    ImageEcoderSettings.setResolution(1600, 1200);
    mCameraImageCapture->setEncodingSettings(ImageEcoderSettings);
    mCamera->setCaptureMode(QCamera::CaptureStillImage);
    mCamera->start();
    mCamera->searchAndLock();
    mCameraImageCapture->capture(filename);
    mCamera->unlock();

            });



//YOUSSEF SETUP

    QRegularExpression QRegExp( "[a-zA-Z]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(QRegExp,this);
    ui->nomEmploye_3->setValidator(validator);
    ui->idTache_3->setValidator(new QIntValidator(0,99999,this));
    ui->idEmploye_3->setValidator(new QIntValidator(0,99999,this));
    ui->tableView_tache->setModel(T.afficher());
    ui->tableView_employe->setModel(T.afficherEmploye(1));



//INITIATION YASSINE
    this->emp_tri_dir=0;
    ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->checkState(),ui->chercher_employe_5->text()));
    ui->titres_rec_5->setModel(Msg.afficher());
    ui->id_emp_i_9->setValidator(new QIntValidator(0,99999999,this));
    ui->id_emp_i_10->setValidator(new QIntValidator(0,99999999,this));
    ui->tableView_9->setSelectionBehavior(QAbstractItemView::SelectRows);
    ArdunioProcess=false;

//STATISTIQUE YASSINE
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
    QString username = ui->username_box->text();
    QString password = ui->password_box->text();
    if(username == "c" && password == "c")
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (username == "a" && password == "a")
    {
        ui->stackedWidget->setCurrentIndex(22);
    }
    else if (username == "e" && password == "e")
    {
        ui->stackedWidget->setCurrentIndex(23);
    }

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
    ui->stackedWidget->setCurrentIndex(9);
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
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_gerer_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_Retour_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
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



// debut integration partenaires //


void MainWindow::on_amrou1_9_clicked()
{
   ui->stackedWidget->setCurrentIndex(10);
   Partenaire p;
   ui->amrou_outputtable_13->setModel(p.afficher());
}


void MainWindow::on_amrou2_5_clicked()
{
  ui->stackedWidget->setCurrentIndex(14);
  Partenaire p;
  ui->amrou_outputtable_15->setModel(p.afficher());
}

void MainWindow::on_amrou1_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_amrou9_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
    Partenaire p;
    ui->amrou_outputtable_14->setModel(p.afficher());
}

void MainWindow::on_amrou4_26_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_amrou5_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_amrou4_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_amrou4_28_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void MainWindow::on_amrou4_29_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_amrou4_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_amrou_filter_go_5_clicked()
{
    Partenaire p;
    ui->amrou_outputtable_13->setModel(p.afficher(ui->amrou_secteur_filter_5->currentText()));
}

void MainWindow::on_amrou_filter_reset_5_clicked()
{
    Partenaire p;
    ui->amrou_outputtable_13->setModel(p.afficher());
}

void MainWindow::on_amrou7_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
    QItemSelectionModel *select = ui->amrou_outputtable_13->selectionModel();
    ui->amrou_id_10->setText(select->selectedRows().value(0).data().toString());
    ui->amrou_nom_10->setText(select->selectedRows(1).value(0).data().toString());
    ui->amrou_email_10->setText(select->selectedRows(4).value(0).data().toString());
    ui->amrou_description_10->setText(select->selectedRows(3).value(0).data().toString());
}

void MainWindow::on_amrou4_30_clicked()
{
  ui->stackedWidget->setCurrentIndex(10);
  Partenaire p;
  ui->amrou_outputtable_13->setModel(p.afficher());
}

void MainWindow::on_amrou8_5_clicked()
{
    Partenaire p;
    QItemSelectionModel *select = ui->amrou_outputtable_13->selectionModel();
              int id_p =select->selectedRows().value(0).data().toInt();
              if(p.supprimer(id_p))
              {
                  ui->amrou_outputtable_13->setModel(p.afficher());
                  QMessageBox::information(nullptr, QObject::tr("ok"),
                                           QObject::tr("Supression effectuée.\n"
                                                       "Click on ok to proceed."), QMessageBox::Ok);

              }
              else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                        QObject::tr("Supression non effectuée.\n"
                                                    "Click cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_amrou10_9_clicked()
{
    Partenaire p(ui->amrou_id_9->text().toInt(),
                 ui->amrou_nom_9->text(),
                 ui->amrou_secteur_9->currentText(),
                 ui->amrou_description_9->toPlainText(),
                 ui->amrou_email_9->text(),
                 1);

    bool result_query = p.ajouter();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Ajout effectué.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->amrou_id_9->setText("");
            ui->amrou_nom_9->setText("");
            ui->amrou_description_9->setText("");
            ui->amrou_email_9->setText("");
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Ajout non effectué.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_amrou11_9_clicked()
{
    ui->amrou_id_9->setText("");
     ui->amrou_nom_9->setText("");
     ui->amrou_description_9->setText("");
     ui->amrou_email_9->setText("");
}

void MainWindow::on_amrou12_5_clicked()
{
    QItemSelectionModel *select = ui->amrou_outputtable_14->selectionModel();
    ui->amrou_partner_contrat->setText("To: "+select->selectedRows(1).value(0).data().toString());
    ui->stackedWidget->setCurrentIndex(13);
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    ui->amrou_date_contrat->setText(formattedTime);
    ui->amrou_company_contrat->setText("Architech");
    ui->amrou_lieu_contrat->setText("Esprit");
    ui->amrou_contenu_contrat->setText("");
    ui->amrou_contenu_translated->setText("");
}

void MainWindow::on_amrou_inverse_content_clicked()
{
    QString temp;
    temp = ui->amrou_contenu_contrat->toPlainText();
    ui->amrou_contenu_contrat->setText(ui->amrou_contenu_translated->toPlainText());
    ui->amrou_contenu_translated->setText(temp);
}

void MainWindow::on_amrou_download_pdf_clicked()
{
    Partenaire p;
    p.Contract_to_Pdf(ui->amrou_company_contrat->text(),ui->amrou_date_contrat->text(),ui->amrou_lieu_contrat->text(),ui->amrou_contenu_contrat->toPlainText(),ui->amrou_header_contrat->text(),ui->amrou_partner_contrat->text());
}

void MainWindow::on_amrou_translates_clicked()
{
    Partenaire p;
    // Qt part

        //write chosen language to language.txt
        ofstream Language("../Smart_Contracting_And_Construction_Company_2A2/language.txt");
        QString lang = ui->amrou_language_translate->currentText();
        Language << lang.toStdString();
        Language.close();
        // end of writing language to file

        // write content to be translated to file
        ofstream contenu("../Smart_Contracting_And_Construction_Company_2A2/translate.txt");
        QString content = ui->amrou_contenu_contrat->toPlainText();
        contenu << content.toStdString();
        contenu.close();
        // end of writing content to file

    // end part writing to files from Qt

    // reserved for translation api using python (translate.py)
        ui->amrou_contenu_translated->setText(p.translate());
}

void MainWindow::on_amrou14_5_clicked()
{
    Partenaire p;
    QItemSelectionModel *select = ui->amrou_outputtable_15->selectionModel();
    ofstream idchantier("../Smart_Contracting_And_Construction_Company_2A2/id_chantier.txt");
    QString id = "2"; //select->selectedRows(0).value(0).data().toString();
    qDebug() << "id = " << id << endl;
    idchantier << id.toStdString();
    idchantier.close();
    ui->stackedWidget->setCurrentIndex(16);
    QString resultat = p.recommand();
    int x = QString::compare(resultat,"none", Qt::CaseInsensitive);
       if (x==0) {
           ui->amrou_recommend_result->setText("Pas de partenaire préferé");
           ui->amrou_contact_email->setVisible(false);
           ui->amrou_label13_13->setVisible(false);
           ui->amrou_label13_14->setVisible(false);
           ui->amrou_email_content->setVisible(false);
           ui->amrou_email_sujet->setVisible(false);
       }
       else
       {
           QSqlQueryModel* model=new  QSqlQueryModel();
           model = p.afficher(resultat.toInt());
           ui->amrou_recommend_result->setText("Le partenaire "+model->data(model->index(0,1)).toString()+", Son identifiant est "+model->data(model->index(0,0)).toString()+".");
           ui->amrou_contact_email->setVisible(true);
           ui->amrou_label13_13->setVisible(true);
           ui->amrou_label13_14->setVisible(true);
           ui->amrou_email_content->setVisible(true);
           ui->amrou_email_sujet->setVisible(true);
       }
}

void MainWindow::on_amrou5_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
    Partenaire p;
    ui->amrou_outputtable_15->setModel(p.afficher());
}


//NEW PARTIE YASSINE

//PAGE EMPLOYE 2
void MainWindow::on_Retour_employe_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ajouter_em_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
}

void MainWindow::on_del_emp_6_clicked()
{
    QItemSelectionModel *selection = ui->tableView_9->selectionModel();
    int id=selection->selectedRows().value(0).data().toInt();
        std::cout << id;
        bool test=Emp.supprimer(id);
        if (test)
        {
            ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->checkState(),ui->chercher_employe_5->text()));
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Supression Effectue\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("Suppression non effectué!\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_modifier_emp_6_clicked()
{

    int index=0;
    ui->stackedWidget->setCurrentIndex(19);
    QItemSelectionModel *select = ui->tableView_9->selectionModel();
    if (select->selectedRows(4).value(0).data().toString()=="Chef")
        index=0;
    else if (select->selectedRows(4).value(0).data().toString()=="Ingenieur")
        index=1;
        else if (select->selectedRows(4).value(0).data().toString()=="Architecte")
        index=2;
    else index=3;
    ui->id_emp_i_10->setText(select->selectedRows().value(0).data().toString());
    ui->nom_emp_i_10->setText(select->selectedRows(1).value(0).data().toString());
    ui->role_emp_i_10->setCurrentIndex(index);
    ui->login_emp_i_10->setText(select->selectedRows(5).value(0).data().toString());
    ui->pass_emp_i_10->setText(select->selectedRows(6).value(0).data().toString());
}



void MainWindow::on_tri_emp_5_currentIndexChanged(int index)
{
    (void)index;
 ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->checkState(),ui->chercher_employe_5->text()));
}

void MainWindow::on_direc_5_stateChanged(int arg1)
{
    (void)arg1;
    ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->checkState(),ui->chercher_employe_5->text()));
}

void MainWindow::on_chercher_employe_5_textEdited(const QString &arg1)
{
    (void)arg1;
    ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->checkState(),ui->chercher_employe_5->text()));
}

void MainWindow::on_QR_interface_5_clicked()
{
  ui->stackedWidget->setCurrentIndex(21);
}




//PAGE (AJOUTER_EMP_5) 18
void MainWindow::on_ajouter_emp_9_clicked()
{
    int id= ui->id_emp_i_9->text().toInt();
    QString nom=ui->nom_emp_i_9->text();
    QString role=ui->role_emp_i_9->currentText();
    QString login=ui->login_emp_i_9->text();
    QString password=ui->pass_emp_i_9->text();
    int salary;
if (ui->role_emp_i_9->currentText()=="Chef")
    salary=3500;
else if (ui->role_emp_i_9->currentText()=="Ouvrier")
    salary=1000;
else salary=2500;
    Employees E(id,nom,QDate::currentDate(),salary,role,login,password);
    bool test=E.ajouter();
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout Effectue\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->checkState(),ui->chercher_employe_5->text()));
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("Ajout non effectué!\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_Retour_employe_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->id_emp_i_9->text()="";
    ui->nom_emp_i_9->text()="";
    ui->login_emp_i_9->text()="";
    ui->pass_emp_i_9->text()="";
    ui->role_emp_i_9->setCurrentIndex(1);
}

void MainWindow::on_generQR_5_clicked()
{
    int  Code=ui->id_emp_i_9->text().toInt();
    const qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(std::to_string(Code).c_str(), qrcodegen::QrCode::Ecc::LOW);
    std::ofstream myfile;
    myfile.open ("qrcode.svg") ;
    myfile << qr.toSvgString(1);
    myfile.close();
    QSvgRenderer svgRenderer(QString("qrcode.svg"));
    QPixmap pix( QSize(90, 90));
    QPainter pixPainter( &pix );
    svgRenderer.render(&pixPainter);
    ui->QR_aff_5->setPixmap(pix);
}





//PAGE MODIFIER  19


void MainWindow::on_ajouter_emp_10_clicked()
{
    int salary;
if (ui->role_emp_i_10->currentText()=="Chef")
    salary=3500;
else if (ui->role_emp_i_10->currentText()=="Ouvrier")
    salary=1000;
else salary=2500;

    Employees E(ui->id_emp_i_10->text().toInt(),
                 ui->nom_emp_i_10->text(),
                 QDate::currentDate(),
                 salary,
                 ui->role_emp_i_10->currentText(),
                 ui->login_emp_i_10->text(),
                 ui->pass_emp_i_10->text()
                 );


    bool result_query = E.modifier();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Modification effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->isTristate(),ui->chercher_employe_5->text()));
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Modification non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
}



void MainWindow::on_Retour_employe_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->id_emp_i_10->text()="";
    ui->nom_emp_i_10->text()="";
    ui->login_emp_i_10->text()="";
    ui->pass_emp_i_10->text()="";
    ui->role_emp_i_10->setCurrentIndex(1);
}




//PAGE INTERFACE EMPLOYE 20
void MainWindow::on_pushButton_9_clicked()
{
    Messages Msg(ui->titre_rec_5->text(),
                 ui->reclamation_i_5->toPlainText(),
                 false
                 );


    bool result_query = Msg.ajouter();

    if (result_query)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Ajout effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
           ui->tableView_9->setModel(Emp.afficher(ui->tri_emp_5->currentIndex(),ui->direc_5->isTristate(),ui->chercher_employe_5->text()));
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Ajout non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
    ui->titres_rec_5->setModel(Msg.afficher());
}

void MainWindow::on_Retour_employe_21_clicked()
{
  ui->stackedWidget->setCurrentIndex(1);
}

//PAGE LISTE RECLAMATIONS 17
void MainWindow::on_reclamations_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}

void MainWindow::on_titres_rec_5_clicked(const QModelIndex &index)
{
    (void)&index;
    QItemSelectionModel *select = ui->titres_rec_5->selectionModel();
    QString titre=select->selectedRows().value(0).data().toString();
    QString text=Msg.fetch_msg(titre);
    ui->titre_aff_5->setText(titre);
    ui->msg_aff_5->setText(text);
}

void MainWindow::on_supp_msg_5_clicked()
{
    QItemSelectionModel *select = ui->titres_rec_5->selectionModel();
    QString titre=select->selectedRows().value(0).data().toString();

    if (Msg.supprimer(titre))
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                                    QObject::tr("Supression effectuée.\n"
                                                "Click on ok to exit."), QMessageBox::Ok);
    }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                 QObject::tr("Supression non effectuée.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
    ui->titres_rec_5->setModel(Msg.afficher());
}

void MainWindow::on_retour_emp_9_clicked()
{
 ui->stackedWidget->setCurrentIndex(2);
}



//INTERFACE QR CODE ARDUINO 21



void MainWindow::on_retour_emp_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->id_entry_5->setText("");
    ui->entry_rej_acc_5->setText("");
    ui->entry_rej_acc_5->setStyleSheet("QLineEdit{border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
}

void MainWindow::readValues(){
    QString final=".";
    QString comp="";
    int rech;
    ArdunioProcess=true;
    QFile file("C:/Users/Wickkid/Documents/Arduino/PYTHON/QRcode.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    file.close();
   while (ArdunioProcess==true)
        {
file.open(QIODevice::ReadOnly | QIODevice::Text);
QTextStream in(&file);
final=in.readAll();
qDebug() <<final;
if((ui->id_entry_5->text()!=final) && (final!="."))
{
    ui->id_entry_5->setText(final);
}
if (ui->id_entry_5->text()!="")
{
string test=ui->id_entry_5->text().toStdString();
if (!(test.find_first_not_of("0123456789") == std::string::npos))
    rech=0;
else {
    rech=Emp.rechercher(ui->id_entry_5->text().toInt());
}
if (rech==1)
{
    A.write_to_arduino("1");
    ui->entry_rej_acc_5->setText("QR Code Valide!");
    ui->entry_rej_acc_5->setStyleSheet("QLineEdit{background-color:green;border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
    QApplication::processEvents();
    file.close();
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    file.close();
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QThread::msleep(5000);
    ui->id_entry_5->setText("");
    ui->entry_rej_acc_5->setText("");
    ui->entry_rej_acc_5->setStyleSheet("QLineEdit{border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
}
else if (rech==0)
{
    ui->entry_rej_acc_5->setText("QR Code Non Valide!");
    ui->entry_rej_acc_5->setStyleSheet("QLineEdit{background-color:red;border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
}
}

QApplication::processEvents();
QThread::msleep(500);
file.close();
        }
}


void MainWindow::on_Activate_ard_5_clicked()
{
    system("cd C:/Users/Wickkid/Documents/Arduino && exec.vbs");
    readValues();
}

void MainWindow::on_terminate_ard_5_clicked()
{
    ArdunioProcess=false;
    ui->id_entry_5->setText("");
    ui->entry_rej_acc_5->setText("");
    ui->entry_rej_acc_5->setStyleSheet("QLineEdit{border: 2px solid teal;border-radius: 10px;color:white;padding: 0 8px;selection-background-color: darkgray;font-size: 25px;}");
    system("cd C:/Users/Wickkid/Documents/Arduino && kill.vbs");
    QMessageBox::information(nullptr, QObject::tr("Processus Arreté!"),
                             QObject::tr("Processus Arrete!"), QMessageBox::Ok);
}

void MainWindow::on_Plateforme_emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


//YOUSSEF TACHES
void MainWindow::on_ajouter_tache_clicked()
{
    int id_tache=ui->idTache_3->text().toInt();
        QDate date_upload=QDate::currentDate();
        QDate date_done=ui->dateDone_3->date();
        int id_employe =ui->idEmploye_3->text().toInt();
        QString nom_e = ui->nomEmploye_3->text();
        QString description = ui->descEmploye_3->toPlainText();
        Tache T(id_tache,date_upload,date_done,id_employe,nom_e,description);
        T.ajouter();
        ui->tableView_tache->setModel(T.afficher());
}

void MainWindow::on_upload_taches_3_clicked()
{
    QItemSelectionModel *select5 = ui->tableView_tache->selectionModel();
         ui->idTache_3->setText(select5->selectedRows().value(0).data().toString());
         ui->dateUpload_3->setDate(select5->selectedRows(1).value(0).data().toDate());
         ui->dateDone_3->setDate(select5->selectedRows(2).value(0).data().toDate());
         ui->idEmploye_3->setText(select5->selectedRows(3).value(0).data().toString());
         ui->nomEmploye_3->setText(select5->selectedRows(4).value(0).data().toString());
         ui->descEmploye_3->setText(select5->selectedRows(5).value(0).data().toString());
}

void MainWindow::on_modifier_tache_clicked()
{
    int id_tache = ui->idTache_3->text().toInt();
    QDate date_upload = ui->dateUpload_3->date();
    QDate date_done = ui->dateDone_3->date();
    int id_employe = ui->idEmploye_3->text().toInt();
    QString nom_e = ui->nomEmploye_3->text();
    QString description = ui->descEmploye_3->toPlainText();
    Tache T(id_tache,date_upload,date_done,id_employe,nom_e,description);
    T.modifier(id_tache,date_upload,date_done,id_employe,nom_e,description,id_tache);
    ui->tableView_tache->setModel(T.afficher());
}

void MainWindow::on_supprimer_tache_clicked()
{
    QItemSelectionModel *select1 = ui->tableView_tache->selectionModel();
    QString var=select1->selectedRows().value(0).data().toString();
    T.supprimer(var.toInt());
     ui->tableView_tache->setModel(T.afficher());
}

void MainWindow::on_chercher_tacheB_3_clicked()
{
    Tache t ;
    QString n =ui->chercher_tache->text();
    ui->tableView_tache->setModel(t.recherche(n));
}

void MainWindow::on_tri_date_2_clicked(bool checked)
{
    if(checked ){
        ui->tableView_tache->setModel(T.triDate());
    }
}

void MainWindow::on_tri_nom_2_clicked(bool checked)
{
    if(checked ){
        ui->tableView_tache->setModel(T.triNom());
    }
}

void MainWindow::on_tri_id_2_clicked(bool checked)
{
    if(checked ){
        ui->tableView_tache->setModel(T.triId());
    }
}

void MainWindow::on_retour_taches_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}





void MainWindow::on_publierPlan_2_clicked()
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

void MainWindow::on_accesPlan_2_clicked()
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
            image = image.scaledToWidth(ui->image_2->width(),Qt::SmoothTransformation);
            image = image.scaledToHeight(ui->image_2->height(),Qt::SmoothTransformation);
            ui->image_2->setPixmap(QPixmap::fromImage(image));
        }
    }
}

void MainWindow::on_export_button_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                                  tr("Excel Files (*.xls)"));
                  if (fileName.isEmpty())
                      return;

                  ExportExcel obj(fileName, "Taches", ui->tableView_employe);

                  //colums to export
                  obj.addField(0, "id_t", "char(20)");
                  obj.addField(1, "date_upload", "char(20)");
                  obj.addField(2, "date_done", "char(20)");
                  obj.addField(3, "id_e", "char(20)");
                  obj.addField(4, "nom", "char(20)");
                  obj.addField(5, "description", "char(20)");




                  int retVal = obj.export2Excel();
                  if( retVal > 0)
                  {
                      QMessageBox::information(this, tr("Done"),
                                               tr("Toutes les informations ont été enregistrée"));
                  }

}

void MainWindow::on_gerer_fournisseur_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);


}


void MainWindow::on_ajouter_f_clicked()
{

        fournissseur e (ui->id_f->text().toInt(),

                         ui->nom_f->text(),
                         ui->quantite_f->text().toInt(),
                         ui->prix_f->text().toInt(),
                       ui->date_f->text());
        bool result_query = e.ajouter_fournisseur();
        if (result_query)
               {
                   QMessageBox::information(nullptr, QObject::tr("ok"),
                                            QObject::tr("Ajout effectué.\n"
                                                        "Click on ok to exit."), QMessageBox::Ok);
                   ui->id_f->setText("");
                    ui->nom_f->setText("");
                    ui->quantite_f->setText("");
                    ui->prix_f->setText("");
                    ui->date_f->setText("");
               }
               else
                   QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                         QObject::tr("Ajout non effectué.\n"
                                                     "Click cancel to exit."), QMessageBox::Cancel);
    fournissseur f;
        ui->tableView_f->setModel(f.afficher());


        }



void MainWindow::on_supprimer_f_clicked()
{
    fournissseur f;
    QItemSelectionModel *select = ui->tableView_f->selectionModel();
                 int id_f =select->selectedRows().value(0).data().toInt();
                 if(f.supprimer(id_f))
                 {
                     ui->tableView_f->setModel(f.afficher());
                     QMessageBox::information(nullptr, QObject::tr("ok"),
                                              QObject::tr("Supression effectuée.\n"
                                                          "Click on ok to proceed."), QMessageBox::Ok);
                 }
                 else
                     QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                           QObject::tr("Supression non effectuée.\n"
                                                       "Click cancel to exit."), QMessageBox::Cancel);



}


void MainWindow::on_modifier_f_clicked()
{
    QItemSelectionModel *select = ui->tableView_f->selectionModel();
          ui->id_f->setText(select->selectedRows(0).value(0).data().toString());
          ui->nom_f->setText(select->selectedRows(1).value(0).data().toString());
          ui->quantite_f->setText(select->selectedRows(2).value(0).data().toString());
          ui->prix_f->setText(select->selectedRows(3).value(0).data().toString());
          ui->date_f->setText(select->selectedRows(4).value(0).data().toString());

}


void MainWindow::on_enregistrer_f_clicked()
{
    fournissseur e(ui->id_f->text().toInt(),

                       ui->nom_f->text(),
                       ui->quantite_f->text().toInt(),
                       ui->prix_f->text().toInt(),
                     ui->date_f->text());
        bool result_query = e.modifier();
        if (result_query)
               {
                   QMessageBox::information(nullptr, QObject::tr("ok"),
                                            QObject::tr("modification effectué.\n"
                                                        "Click on ok to exit."), QMessageBox::Ok);
                 ui->tableView_f->setModel(e.afficher());
               }
               else
                   QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                         QObject::tr("modification non effectué.\n"
                                                     "Click cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_rechercher_f_clicked()
{
    fournissseur c ;
       QString n =ui->chercher_f->text();
       ui->tableView_f->setModel(c.recherche(n));
}


void MainWindow::on_recue_f_clicked()
{

        QPrinter printer;
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName("a.pdf");
        QPainter painter;
        if(! painter.begin(&printer))
        {
            //failed to open
            qWarning("failed to open file");
        }
        QItemSelectionModel *select = ui->tableView_f->selectionModel();
         select->selectedRows(4).value(0).data().toString();
         painter.drawPixmap(0,0,QPixmap("logo.jpg"));
         painter.drawText(200,0,"Architech");
        painter.drawText(200,500,"id  :"+select->selectedRows(0).value(0).data().toString());
        painter.drawText(300,500,"nom  :"+select->selectedRows(1).value(0).data().toString());
        painter.drawText(400,500,"quant  :"+select->selectedRows(2).value(0).data().toString());
        painter.drawText(500,500,"prix  :"+select->selectedRows(3).value(0).data().toString());
        painter.drawText(600,500,"date de livraison  :"+select->selectedRows(4).value(0).data().toString());
        QRect rect(0,800,0,800);
        painter.drawRect(rect);
        painter.end();
    }




void MainWindow::on_Formulaire_clicked()
{

        fournissseur f;
        QItemSelectionModel *select = ui->tableView_f->selectionModel();
        string nom_f = select->selectedRows(1).value(0).data().toString().toStdString();
        string quantite_f = select->selectedRows(2).value(0).data().toString().toStdString();
        string prix_f = select->selectedRows(3).value(0).data().toString().toStdString();
        string date_f = select->selectedRows(4).value(0).data().toString().toStdString();
            string a = "http://localhost/Untitled-1.php?nom_f="+nom_f+"&quantite_f="+quantite_f+"&prix_f="+prix_f+"&date_f="+date_f+"";
            cout<< a<<endl;
            QString url = QString::fromStdString(a);
                  QDesktopServices::openUrl(QUrl(url));
    }

