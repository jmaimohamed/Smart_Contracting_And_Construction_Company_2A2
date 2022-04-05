/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLineEdit *id_f;
    QLineEdit *nom_f;
    QLineEdit *quantite_f;
    QLineEdit *prix_f;
    QLineEdit *date_f;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *modifier_f;
    QPushButton *enregistrer_f;
    QGroupBox *groupBox_2;
    QTableView *afficher_fournisseur;
    QGroupBox *groupBox_3;
    QLineEdit *rechercher;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QPushButton *optionbutton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_5;
    QPushButton *payer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(973, 612);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 391, 191));
        id_f = new QLineEdit(groupBox);
        id_f->setObjectName(QStringLiteral("id_f"));
        id_f->setGeometry(QRect(20, 20, 113, 22));
        id_f->setStyleSheet(QStringLiteral("background: #2555;"));
        nom_f = new QLineEdit(groupBox);
        nom_f->setObjectName(QStringLiteral("nom_f"));
        nom_f->setGeometry(QRect(20, 60, 113, 22));
        quantite_f = new QLineEdit(groupBox);
        quantite_f->setObjectName(QStringLiteral("quantite_f"));
        quantite_f->setGeometry(QRect(20, 100, 113, 22));
        prix_f = new QLineEdit(groupBox);
        prix_f->setObjectName(QStringLiteral("prix_f"));
        prix_f->setGeometry(QRect(20, 130, 113, 22));
        date_f = new QLineEdit(groupBox);
        date_f->setObjectName(QStringLiteral("date_f"));
        date_f->setGeometry(QRect(20, 160, 113, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 110, 93, 28));
        pushButton->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"background: white;\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 60, 56, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 100, 56, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 130, 56, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 160, 56, 16));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 50, 93, 28));
        pushButton_2->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"background: white;"));
        modifier_f = new QPushButton(groupBox);
        modifier_f->setObjectName(QStringLiteral("modifier_f"));
        modifier_f->setGeometry(QRect(300, 160, 93, 28));
        modifier_f->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"background: white;"));
        enregistrer_f = new QPushButton(groupBox);
        enregistrer_f->setObjectName(QStringLiteral("enregistrer_f"));
        enregistrer_f->setGeometry(QRect(190, 160, 101, 28));
        enregistrer_f->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"background: white;"));
        id_f->raise();
        quantite_f->raise();
        prix_f->raise();
        date_f->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        pushButton_2->raise();
        modifier_f->raise();
        enregistrer_f->raise();
        nom_f->raise();
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 210, 491, 231));
        afficher_fournisseur = new QTableView(groupBox_2);
        afficher_fournisseur->setObjectName(QStringLiteral("afficher_fournisseur"));
        afficher_fournisseur->setGeometry(QRect(-10, 0, 511, 192));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(430, 20, 251, 101));
        rechercher = new QLineEdit(groupBox_3);
        rechercher->setObjectName(QStringLiteral("rechercher"));
        rechercher->setGeometry(QRect(110, 30, 113, 22));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 30, 91, 16));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 60, 93, 28));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(570, 220, 381, 341));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        optionbutton = new QPushButton(groupBox_4);
        optionbutton->setObjectName(QStringLiteral("optionbutton"));

        verticalLayout->addWidget(optionbutton);

        scrollArea = new QScrollArea(groupBox_4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 269));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(760, 90, 120, 80));
        payer = new QPushButton(groupBox_5);
        payer->setObjectName(QStringLiteral("payer"));
        payer->setGeometry(QRect(10, 30, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 973, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "ajout", Q_NULLPTR));
        id_f->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "quantite", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "prix", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "date", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        modifier_f->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        enregistrer_f->setText(QApplication::translate("MainWindow", "enregistrer", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "nom fournisseur", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "rechercher", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        optionbutton->setText(QApplication::translate("MainWindow", "option", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        payer->setText(QApplication::translate("MainWindow", "payer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
