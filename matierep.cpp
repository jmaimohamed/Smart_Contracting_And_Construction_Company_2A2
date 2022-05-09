#include "matierep.h"
#include <QSqlQuery>
#include <QSystemTrayIcon>
#include <QtDebug>
#include<QFile>

MatiereP::MatiereP()
{
    ID_MP=0, NOM_MP=" ",Quantite=0,Prix=0,ID_F=0;
}
MatiereP::MatiereP(int ID_MP,QString NOM_MP,int Quantite, int Prix,int ID_F)
{
    this->ID_MP=ID_MP;
    this->NOM_MP=NOM_MP;
    this->Quantite=Quantite;
    this->Prix=Prix;
    this->ID_F=ID_F;
}
 int MatiereP::getID_MP(){return ID_MP;}
    QString MatiereP::getNOM_MP(){return NOM_MP;}
    int MatiereP::getQuantite(){return Quantite;}
    int MatiereP::getPrix(){return Prix;}
    int MatiereP::getID_F(){return ID_F;}
    void MatiereP::setID_MP(int i){ID_MP=i;}
    void MatiereP::setNOM_MP(QString n){NOM_MP=n;}
    void MatiereP::setQuantite(int Q){Quantite=Q;}
    void MatiereP::setPrix(int P){Prix=P;}
    void MatiereP::setID_F(int F){ID_F=F;}
    bool MatiereP::ajouter()
    {
        QSqlQuery query;
        QString Id_string=QString::number(ID_MP);



             query.prepare("INSERT INTO MP (ID_MP,NOM_MP,Quantite,Prix,ID_F) "
                           "VALUES (:ID_MP, :NOM_MP, :Quantite, :Prix,:ID_F)");
             query.bindValue(":ID_MP",Id_string);
             query.bindValue(":NOM_MP",NOM_MP);
             query.bindValue(":Quantite",Quantite);
             query.bindValue(":Prix",Prix);
             query.bindValue(":ID_F",ID_F);
            return query.exec();
     }
    QSqlQueryModel* MatiereP::afficher()
    {
        QSqlQueryModel* model=new QSqlQueryModel();
             model->setQuery("SELECT * FROM MP");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_F"));
        return model;
    }
    bool MatiereP::supprimer(int ID_MP )
    {
        QSqlQuery query;

             query.prepare("Delete from MP where ID_MP=:ID_MP");
             query.bindValue(0,ID_MP);

            return query.exec();
    }
    bool MatiereP::modifier(int ID_MP,QString NOM_MP,int Quantite,int Prix,int ID_F,int Id_modif)
    {
        QSqlQuery query;
       query.prepare("update MP set ID_MP=:ID_MP,NOM_MP=:NOM_MP,Quantite=:Quantite,Prix=:Prix,ID_F=:ID_F where ID_MP=:Id_modif");
        query.bindValue(":ID_MP",ID_MP);
       query.bindValue(":NOM_MP",NOM_MP);
       query.bindValue(":Quantite",Quantite);
       query.bindValue(":Prix",Prix);
        query.bindValue(":ID_F",ID_F);
       query.bindValue(":Id_modif",Id_modif);
       return query.exec();

    }
    bool MatiereP::modifier_qt(int Quantite)
    {
        QSqlQuery query;
       query.prepare("update MP set Quantite=:Quantite where NOM_MP='simen'");

       query.bindValue(":Quantite",Quantite);

       return query.exec();

    }
    QSqlQueryModel * MatiereP::chercher(QString cher)
    {
        QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("select * from MP where upper(NOM_MP) LIKE upper('%"+cher+"%')");
    return model;
    }
    QSqlQueryModel * MatiereP ::tri_NOM_MP()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from MP order by NOM_MP ASC");
     return model;
    }
    QSqlQueryModel * MatiereP ::tri_Quantite()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from MP order by Quantite ASC");
     return model;
    }
    QSqlQueryModel * MatiereP ::tri_Prix()
    {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from MP order by Prix DESC");
     return model;
    }
    void MatiereP::notif_modif(QString noti)
    {

        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

        notifyIcon->setIcon(QIcon("C:/Users/moham/OneDrive/Bureau/system tray tutorial/feather/alert-triangle.svg"));
        QString s = noti;
        notifyIcon->show();
        notifyIcon->showMessage("Gestion d'Une matiere premiere","Une matiere premiere a été "+noti,QSystemTrayIcon::Information,15000);
    }

    void MatiereP::notif_supp(QString noti)
    {

        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

        notifyIcon->setIcon(QIcon("C:/Users/moham/OneDrive/Bureau/system tray tutorial/feather/alert-triangle.svg"));
        QString s = noti;
        notifyIcon->show();
        notifyIcon->showMessage("Gestion d'Une matiere premiere","Une matiere premiere a été"+noti,QSystemTrayIcon::Information,15000);

    }


    void MatiereP::notif_ajout(QString noti)
    {

        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

        notifyIcon->setIcon(QIcon("C:/Users/moham/OneDrive/Bureau/system tray tutorial/feather/alert-triangle.svg"));
        QString s = noti;
        notifyIcon->show();
        notifyIcon->showMessage("Gestion d'Une matiere premiere","Une matiere premiere a été "+noti,QSystemTrayIcon::Information,15000);

    }
    void MatiereP::file()
    {
        QSqlQuery query;
        QFile myfile("mydata.txt");
        myfile.open(QIODevice::WriteOnly);
        query.prepare("select * from MP");
        query.exec();
        QString line="";
        QTextStream out(&myfile);
        while (query.next()) {
           line+=query.value(0).toString()+",";
           line+=query.value(1).toString()+",";
           line+=query.value(2).toString()+",";
           line+=query.value(3).toString()+",";
           line+=query.value(4).toString()+"\n";
           qDebug()<<line;
           out<<line;
           line="";
        }
        myfile.close();
    }
int MatiereP::getQuantite_UPDATE_S(){
    QSqlQuery query;

         query.prepare("Select Quantite from MP  where NOM_MP='simen'");
    query.exec();
    query.first();
    return query.value(0).toInt();
}
int MatiereP::getQuantite_UPDATE_Y(){
    QSqlQuery query;

         query.prepare("Select Quantite from MP  where NOM_MP='yajour'");
    query.exec();
    query.first();
    return query.value(0).toInt();
}
