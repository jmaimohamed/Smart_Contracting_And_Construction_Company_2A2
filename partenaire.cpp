#include "partenaire.h"

Partenaire::Partenaire()
{
    id_p=0;
    nom_p="";
    secteur_p="";
    description_p="";
    email_p="";
    disponibilite_p=0;
}

Partenaire::Partenaire(int id_p, QString nom_p, QString secteur_p, QString description_p, QString email_p, int disponibilite_p)
{
    this->id_p=id_p;
    this->nom_p=nom_p;
    this->secteur_p=secteur_p;
    this->description_p=description_p;
    this->email_p=email_p;
    this->disponibilite_p=disponibilite_p;
}


// getters

int Partenaire::get_id()
{
    return id_p;
}
QString Partenaire::get_nom()
{
    return nom_p;
}
QString Partenaire::get_secteur()
{
    return secteur_p;
}
QString Partenaire::get_description()
{
    return description_p;
}
QString Partenaire::get_email()
{
    return email_p;
}
int Partenaire::get_disponibilite()
{
    return disponibilite_p;
}


// setters

void Partenaire::setid(int id_p)
{
    this->id_p=id_p;
}
void Partenaire::setnom(QString nom_p)
{
    this->nom_p=nom_p;
}
void Partenaire::setsecteur(QString secteur_p)
{
    this->secteur_p=secteur_p;
}
void Partenaire::setdescription(QString description_p)
{
    this->description_p=description_p;
}
void Partenaire::setemail(QString email_p)
{
    this->email_p=email_p;
}


// methods

bool Partenaire::ajouter() {

            QSqlQuery query;
              query.prepare("INSERT INTO PARTENAIRES (ID_P, NOM_P, SECTEUR_P, DESCRIPTION_P, EMAIL_P,DISPONIBILITE_P) "
                            "VALUES (:ID_P, :NOM_P, :SECTEUR_P,:DESCRIPTION_P,:EMAIL_P,:DISPONIBILITE_P)");
              query.bindValue(":ID_P",id_p);
              query.bindValue(":NOM_P",nom_p);
              query.bindValue(":SECTEUR_P", secteur_p);
              query.bindValue(":DESCRIPTION_P", description_p);
              query.bindValue(":EMAIL_P", email_p);
              query.bindValue(":DISPONIBILITE_P", disponibilite_p);
              return query.exec();

}


QSqlQueryModel * Partenaire::afficher()
{
    QSqlQueryModel* model=new  QSqlQueryModel();

       model->setQuery("select * from PARTENAIRES ORDER BY ID_P ASC ");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Secteur"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Description"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibilite"));

      return model;
}

bool Partenaire::supprimer(int id_p)
{
  QSqlQuery query;

    query.prepare("Delete from PARTENAIRES where ID_P =:ID_p");
    query.bindValue(":ID_p",id_p);
    return query.exec();
}

bool Partenaire::modifier(){

    QSqlQuery query;
      query.prepare("UPDATE PARTENAIRES SET ID_P=:ID_P, NOM_P=:NOM_P, SECTEUR_P=:SECTEUR_P, DESCRIPTION_P=:DESCRIPTION_P, EMAIL_P=:EMAIL_P, DISPONIBILITE_P=:DISPONIBILITE_P WHERE ID_P=:ID_P");
      query.bindValue(":ID_P",id_p);
      query.bindValue(":NOM_P",nom_p);
      query.bindValue(":SECTEUR_P", secteur_p);
      query.bindValue(":DESCRIPTION_P", description_p);
      query.bindValue(":EMAIL_P", email_p);
      query.bindValue(":DISPONIBILITE_P", disponibilite_p);
     return query.exec();
  }


// functionalities

QSqlQueryModel * Partenaire::afficher(QString secteur)
{
    QSqlQueryModel* model=new  QSqlQueryModel();

      int x = QString::compare(secteur,"Technologie", Qt::CaseInsensitive);
      int y = QString::compare(secteur,"Industrie", Qt::CaseInsensitive);
      int z = QString::compare(secteur,"Commerce", Qt::CaseInsensitive);
      qDebug() << "x= " << x << " y= " << y << " z=" << z;
      if (x==0)
          model->setQuery("select * from PARTENAIRES where SECTEUR_P='Technologie' ORDER BY ID_P ASC ");
        else if (y==0)
          model->setQuery("select * from PARTENAIRES where SECTEUR_P='Industrie' ORDER BY ID_P ASC ");
            else if (z==0)
                model->setQuery("select * from PARTENAIRES where SECTEUR_P='Commerce' ORDER BY ID_P ASC ");

       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Secteur"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Description"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibilite"));

      return model;
}

QSqlQueryModel * Partenaire::afficher(int ident)
{
    QSqlQueryModel* model=new  QSqlQueryModel();
        QString query="select * from PARTENAIRES where ID_P="+QString::number(ident);
        qDebug() << "query = " << query << endl;
       model->setQuery(query);
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Secteur"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Description"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibilite"));

      return model;
}

void Partenaire::Contract_to_Pdf(QString nom, QString date,QString lieu, QString contenu,QString header,QString partner)
{

    QString html = "<div align=center><img src='../myproject/logo.png' widht='100' height='100'></div><div align=right>";
    html += lieu+", "+date+"</div><div align=left>"+nom+"</div><h1 align=center>"+header+"</h1><br><br><div align=left><b>"+partner+"</b></div><p align=justify>"+contenu+"</p><br><br><div align=left>Cordialement<br>Architech</div><div align=right>Signature</div><div align=right><img src='../myproject/signature.png' width='100' height='100'></div>";

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("../myproject/contrat.pdf");
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    document.print(&printer);
}

void Partenaire::Send_email(QString email, QString recipient,QString contenu,QString sujet)
{

    qDebug() << "mail in function = " << email << "and recipient = " << recipient << endl;
   SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

   qDebug() << "qssl = " << QSslSocket::sslLibraryBuildVersionString()<< "and second ssl is = " << QSslSocket::sslLibraryVersionNumber() << endl;

   smtp.setUser("easyrockettunisia@gmail.com");
   smtp.setPassword("easyrocketcliptec");

   MimeMessage message;

   message.setSender(new EmailAddress("easyrockettunisia@gmail.com", "Amrou"));
   message.addRecipient(new EmailAddress("easyrockettunisia@gmail.com", recipient));
   message.setSubject(sujet);


   MimeText text;

   text.setText(contenu);

   message.addPart(&text);

   smtp.connectToHost();
       smtp.login();
       smtp.sendMail(message);
       smtp.quit();
}


QString Partenaire::translate()
{
    QObject *parent = NULL;
               QProcess *myProcess = new QProcess(parent);
               myProcess->start("cmd /C python ../myproject/translate.py");
               myProcess->write("exit\n\r");
               myProcess->waitForFinished();
               myProcess->close();
               // end of script

               // Qt part to write translated text to "traduit"
                    // Reading translated content from file
               string translated_string;
               string end_result="";
               fstream Translated("../myproject/translated.txt",ios::in);
               while(getline(Translated,translated_string))
                   end_result += translated_string;
               Translated.close();
              return QString::fromStdString(end_result);
}

QString Partenaire::recommand()
{
    QObject *parent = NULL;
               QProcess *myProcess = new QProcess(parent);
               myProcess->start("cmd /C python ../myproject/recommend.py");
               myProcess->write("exit\n\r");
               myProcess->waitForFinished();
               myProcess->close();

               string recommended;
               string end_result="";
               fstream chosen("../myproject/recommend.txt",ios::in);
               while(getline(chosen,recommended))
                   end_result += recommended;
               chosen.close();
              return QString::fromStdString(end_result);
}
