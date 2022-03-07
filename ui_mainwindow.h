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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QGroupBox *login_group;
    QHBoxLayout *horizontalLayout;
    QGroupBox *bhema_box;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *username;
    QLineEdit *username_box;
    QLabel *password;
    QLineEdit *password_box;
    QPushButton *forget_button;
    QPushButton *login_button;
    QGroupBox *image_login;
    QWidget *choose_model;
    QWidget *layoutWidget_2;
    QGridLayout *model_box;
    QPushButton *gerer_employe;
    QPushButton *gerer_chantiers;
    QPushButton *gerer_mp;
    QPushButton *gerer_tache;
    QWidget *Employe;
    QGroupBox *main_employe;
    QHBoxLayout *horizontalLayout_5;
    QTableView *tableView_2;
    QGroupBox *Crud_box_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *chercher_employe;
    QPushButton *ajouter_employe;
    QPushButton *modifier_employe;
    QPushButton *supprimer_employe;
    QPushButton *trier_employe;
    QPushButton *Retour_employe;
    QWidget *Matiere_Premiere;
    QGroupBox *ajout_box;
    QGridLayout *gridLayout_3;
    QVBoxLayout *Abutton_box;
    QPushButton *effacer_mp;
    QGridLayout *cle_box;
    QLineEdit *le_quantite;
    QLineEdit *le_prix;
    QLabel *prix;
    QLineEdit *idM;
    QLabel *quantite;
    QLabel *le_idM;
    QLineEdit *le_nom;
    QLabel *nom;
    QLineEdit *ID_F;
    QLabel *label;
    QGroupBox *Crud_box;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *le_chercherM;
    QPushButton *chercherM_2;
    QPushButton *ajouter_mp;
    QPushButton *update_mp;
    QPushButton *pushButton_2;
    QPushButton *supprimer_mp;
    QPushButton *pred_mp;
    QTableView *tab_test;
    QGroupBox *statistique;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *RetourM;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *TriNM;
    QRadioButton *TriQM;
    QRadioButton *TriPM;
    QPushButton *pushButton;
    QWidget *chantiers;
    QGroupBox *main_chantier;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QGroupBox *Crud_box_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *chercher_chantiers;
    QPushButton *ajouter_chantiers;
    QPushButton *modifier_chantier;
    QPushButton *supprimer_chantiers;
    QPushButton *trier_chantiers;
    QPushButton *retour_chantier;
    QWidget *Taches;
    QGroupBox *main_taches;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView_tache;
    QGroupBox *Crud_box_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *chercher_tache;
    QPushButton *ajouter_tache;
    QPushButton *modifier_tache;
    QPushButton *supprimer_tache;
    QPushButton *trier_taches;
    QPushButton *retour_taches;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1157, 746);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 1141, 721));
        stackedWidget->setStyleSheet(QStringLiteral("background: #111827;"));
        login_page = new QWidget();
        login_page->setObjectName(QStringLiteral("login_page"));
        login_group = new QGroupBox(login_page);
        login_group->setObjectName(QStringLiteral("login_group"));
        login_group->setGeometry(QRect(-10, -10, 1281, 671));
        login_group->setAutoFillBackground(false);
        login_group->setStyleSheet(QStringLiteral("background: #111827;"));
        horizontalLayout = new QHBoxLayout(login_group);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bhema_box = new QGroupBox(login_group);
        bhema_box->setObjectName(QStringLiteral("bhema_box"));
        bhema_box->setStyleSheet(QLatin1String("#groupBox {\n"
"border: none;\n"
"}"));
        layoutWidget = new QWidget(bhema_box);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 90, 341, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(layoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(username);

        username_box = new QLineEdit(layoutWidget);
        username_box->setObjectName(QStringLiteral("username_box"));
        username_box->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        verticalLayout->addWidget(username_box);

        password = new QLabel(layoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setStyleSheet(QLatin1String("color: teal;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(password);

        password_box = new QLineEdit(layoutWidget);
        password_box->setObjectName(QStringLiteral("password_box"));
        password_box->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        verticalLayout->addWidget(password_box);

        forget_button = new QPushButton(layoutWidget);
        forget_button->setObjectName(QStringLiteral("forget_button"));
        forget_button->setStyleSheet(QLatin1String("#pushButton_2{\n"
"color:#0d9488;\n"
"background-color:transparent;\n"
"}"));

        verticalLayout->addWidget(forget_button);

        login_button = new QPushButton(layoutWidget);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setStyleSheet(QLatin1String("background-color: rgb(200, 200, 200);\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: medium;"));

        verticalLayout->addWidget(login_button);

        image_login = new QGroupBox(bhema_box);
        image_login->setObjectName(QStringLiteral("image_login"));
        image_login->setGeometry(QRect(550, 10, 627, 651));
        image_login->setStyleSheet(QLatin1String("#image_login{\n"
"background-image:url(\"C:/Users/youfo/Documents/Kraya/Qt/Interface_Finale/logo.png\");\n"
"background-position: center no-repeat;\n"
"background-size: 50%;\n"
"border: none;\n"
"}"));

        horizontalLayout->addWidget(bhema_box);

        stackedWidget->addWidget(login_page);
        choose_model = new QWidget();
        choose_model->setObjectName(QStringLiteral("choose_model"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(choose_model->sizePolicy().hasHeightForWidth());
        choose_model->setSizePolicy(sizePolicy);
        layoutWidget_2 = new QWidget(choose_model);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 1071, 611));
        model_box = new QGridLayout(layoutWidget_2);
        model_box->setObjectName(QStringLiteral("model_box"));
        model_box->setSizeConstraint(QLayout::SetDefaultConstraint);
        model_box->setContentsMargins(0, 0, 0, 0);
        gerer_employe = new QPushButton(layoutWidget_2);
        gerer_employe->setObjectName(QStringLiteral("gerer_employe"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gerer_employe->sizePolicy().hasHeightForWidth());
        gerer_employe->setSizePolicy(sizePolicy1);
        gerer_employe->setStyleSheet(QLatin1String("QPushButton{\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"   background-color:#0d9488;\n"
"	color:black;\n"
"}\n"
""));

        model_box->addWidget(gerer_employe, 0, 0, 1, 1);

        gerer_chantiers = new QPushButton(layoutWidget_2);
        gerer_chantiers->setObjectName(QStringLiteral("gerer_chantiers"));
        sizePolicy1.setHeightForWidth(gerer_chantiers->sizePolicy().hasHeightForWidth());
        gerer_chantiers->setSizePolicy(sizePolicy1);
        gerer_chantiers->setStyleSheet(QLatin1String("QPushButton{\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"   background-color:#0d9488;\n"
"	color:black;\n"
"}\n"
""));

        model_box->addWidget(gerer_chantiers, 1, 0, 1, 1);

        gerer_mp = new QPushButton(layoutWidget_2);
        gerer_mp->setObjectName(QStringLiteral("gerer_mp"));
        sizePolicy1.setHeightForWidth(gerer_mp->sizePolicy().hasHeightForWidth());
        gerer_mp->setSizePolicy(sizePolicy1);
        gerer_mp->setFocusPolicy(Qt::NoFocus);
        gerer_mp->setAutoFillBackground(false);
        gerer_mp->setStyleSheet(QLatin1String("QPushButton{\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"   background-color:#0d9488;\n"
"	color:black;\n"
"}\n"
""));

        model_box->addWidget(gerer_mp, 0, 1, 1, 1);

        gerer_tache = new QPushButton(layoutWidget_2);
        gerer_tache->setObjectName(QStringLiteral("gerer_tache"));
        sizePolicy1.setHeightForWidth(gerer_tache->sizePolicy().hasHeightForWidth());
        gerer_tache->setSizePolicy(sizePolicy1);
        gerer_tache->setStyleSheet(QLatin1String("QPushButton{\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"   background-color:#0d9488;\n"
"	color:black;\n"
"}\n"
""));

        model_box->addWidget(gerer_tache, 1, 1, 1, 1);

        stackedWidget->addWidget(choose_model);
        Employe = new QWidget();
        Employe->setObjectName(QStringLiteral("Employe"));
        main_employe = new QGroupBox(Employe);
        main_employe->setObjectName(QStringLiteral("main_employe"));
        main_employe->setGeometry(QRect(0, 40, 1061, 321));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(main_employe->sizePolicy().hasHeightForWidth());
        main_employe->setSizePolicy(sizePolicy2);
        main_employe->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        horizontalLayout_5 = new QHBoxLayout(main_employe);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tableView_2 = new QTableView(main_employe);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        horizontalLayout_5->addWidget(tableView_2);

        Crud_box_4 = new QGroupBox(main_employe);
        Crud_box_4->setObjectName(QStringLiteral("Crud_box_4"));
        sizePolicy2.setHeightForWidth(Crud_box_4->sizePolicy().hasHeightForWidth());
        Crud_box_4->setSizePolicy(sizePolicy2);
        Crud_box_4->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_5 = new QVBoxLayout(Crud_box_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        chercher_employe = new QLineEdit(Crud_box_4);
        chercher_employe->setObjectName(QStringLiteral("chercher_employe"));
        chercher_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(chercher_employe);

        ajouter_employe = new QPushButton(Crud_box_4);
        ajouter_employe->setObjectName(QStringLiteral("ajouter_employe"));
        ajouter_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(ajouter_employe);

        modifier_employe = new QPushButton(Crud_box_4);
        modifier_employe->setObjectName(QStringLiteral("modifier_employe"));
        modifier_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(modifier_employe);

        supprimer_employe = new QPushButton(Crud_box_4);
        supprimer_employe->setObjectName(QStringLiteral("supprimer_employe"));
        supprimer_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(supprimer_employe);

        trier_employe = new QPushButton(Crud_box_4);
        trier_employe->setObjectName(QStringLiteral("trier_employe"));
        trier_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(trier_employe);


        horizontalLayout_5->addWidget(Crud_box_4);

        Retour_employe = new QPushButton(Employe);
        Retour_employe->setObjectName(QStringLiteral("Retour_employe"));
        Retour_employe->setGeometry(QRect(0, 0, 131, 41));
        Retour_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(Employe);
        Matiere_Premiere = new QWidget();
        Matiere_Premiere->setObjectName(QStringLiteral("Matiere_Premiere"));
        ajout_box = new QGroupBox(Matiere_Premiere);
        ajout_box->setObjectName(QStringLiteral("ajout_box"));
        ajout_box->setGeometry(QRect(0, 30, 351, 271));
        ajout_box->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        gridLayout_3 = new QGridLayout(ajout_box);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Abutton_box = new QVBoxLayout();
        Abutton_box->setObjectName(QStringLiteral("Abutton_box"));
        effacer_mp = new QPushButton(ajout_box);
        effacer_mp->setObjectName(QStringLiteral("effacer_mp"));
        effacer_mp->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius:10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
""));

        Abutton_box->addWidget(effacer_mp);


        gridLayout_3->addLayout(Abutton_box, 1, 0, 1, 1);

        cle_box = new QGridLayout();
        cle_box->setObjectName(QStringLiteral("cle_box"));
        le_quantite = new QLineEdit(ajout_box);
        le_quantite->setObjectName(QStringLiteral("le_quantite"));
        le_quantite->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        cle_box->addWidget(le_quantite, 2, 1, 1, 1);

        le_prix = new QLineEdit(ajout_box);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        cle_box->addWidget(le_prix, 3, 1, 1, 1);

        prix = new QLabel(ajout_box);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        cle_box->addWidget(prix, 3, 0, 1, 1);

        idM = new QLineEdit(ajout_box);
        idM->setObjectName(QStringLiteral("idM"));
        idM->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: yellow;\n"
""));

        cle_box->addWidget(idM, 0, 1, 1, 1);

        quantite = new QLabel(ajout_box);
        quantite->setObjectName(QStringLiteral("quantite"));
        quantite->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        cle_box->addWidget(quantite, 2, 0, 1, 1);

        le_idM = new QLabel(ajout_box);
        le_idM->setObjectName(QStringLiteral("le_idM"));
        le_idM->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        cle_box->addWidget(le_idM, 0, 0, 1, 1);

        le_nom = new QLineEdit(ajout_box);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: red;\n"
""));

        cle_box->addWidget(le_nom, 1, 1, 1, 1);

        nom = new QLabel(ajout_box);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        cle_box->addWidget(nom, 1, 0, 1, 1);

        ID_F = new QLineEdit(ajout_box);
        ID_F->setObjectName(QStringLiteral("ID_F"));
        ID_F->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        cle_box->addWidget(ID_F, 4, 1, 1, 1);

        label = new QLabel(ajout_box);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        cle_box->addWidget(label, 4, 0, 1, 1);


        gridLayout_3->addLayout(cle_box, 0, 0, 1, 1);

        Crud_box = new QGroupBox(Matiere_Premiere);
        Crud_box->setObjectName(QStringLiteral("Crud_box"));
        Crud_box->setGeometry(QRect(920, 30, 221, 421));
        Crud_box->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_4 = new QVBoxLayout(Crud_box);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        le_chercherM = new QLineEdit(Crud_box);
        le_chercherM->setObjectName(QStringLiteral("le_chercherM"));

        verticalLayout_4->addWidget(le_chercherM);

        chercherM_2 = new QPushButton(Crud_box);
        chercherM_2->setObjectName(QStringLiteral("chercherM_2"));
        chercherM_2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(chercherM_2);

        ajouter_mp = new QPushButton(Crud_box);
        ajouter_mp->setObjectName(QStringLiteral("ajouter_mp"));
        ajouter_mp->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(ajouter_mp);

        update_mp = new QPushButton(Crud_box);
        update_mp->setObjectName(QStringLiteral("update_mp"));
        update_mp->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(update_mp);

        pushButton_2 = new QPushButton(Crud_box);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(pushButton_2);

        supprimer_mp = new QPushButton(Crud_box);
        supprimer_mp->setObjectName(QStringLiteral("supprimer_mp"));
        supprimer_mp->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(supprimer_mp);

        pred_mp = new QPushButton(Crud_box);
        pred_mp->setObjectName(QStringLiteral("pred_mp"));
        pred_mp->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(pred_mp);

        tab_test = new QTableView(Matiere_Premiere);
        tab_test->setObjectName(QStringLiteral("tab_test"));
        tab_test->setGeometry(QRect(360, 30, 561, 271));
        tab_test->setStyleSheet(QLatin1String("border: transparent;\n"
"border-color: rgb(107, 255, 251);\n"
"padding: 5px;\n"
"color: teal;\n"
"gridline-color: rgb(146, 255, 56);"));
        statistique = new QGroupBox(Matiere_Premiere);
        statistique->setObjectName(QStringLiteral("statistique"));
        statistique->setGeometry(QRect(10, 310, 901, 381));
        statistique->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        horizontalLayout_3 = new QHBoxLayout(statistique);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        RetourM = new QPushButton(Matiere_Premiere);
        RetourM->setObjectName(QStringLiteral("RetourM"));
        RetourM->setGeometry(QRect(0, 0, 131, 41));
        RetourM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        groupBox = new QGroupBox(Matiere_Premiere);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(920, 460, 221, 231));
        groupBox->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        TriNM = new QRadioButton(groupBox);
        TriNM->setObjectName(QStringLiteral("TriNM"));
        TriNM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_6->addWidget(TriNM);

        TriQM = new QRadioButton(groupBox);
        TriQM->setObjectName(QStringLiteral("TriQM"));
        TriQM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_6->addWidget(TriQM);

        TriPM = new QRadioButton(groupBox);
        TriPM->setObjectName(QStringLiteral("TriPM"));
        TriPM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_6->addWidget(TriPM);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_6->addWidget(pushButton);

        stackedWidget->addWidget(Matiere_Premiere);
        chantiers = new QWidget();
        chantiers->setObjectName(QStringLiteral("chantiers"));
        main_chantier = new QGroupBox(chantiers);
        main_chantier->setObjectName(QStringLiteral("main_chantier"));
        main_chantier->setGeometry(QRect(0, 30, 1061, 321));
        sizePolicy2.setHeightForWidth(main_chantier->sizePolicy().hasHeightForWidth());
        main_chantier->setSizePolicy(sizePolicy2);
        main_chantier->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        horizontalLayout_2 = new QHBoxLayout(main_chantier);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(main_chantier);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        horizontalLayout_2->addWidget(tableView);

        Crud_box_2 = new QGroupBox(main_chantier);
        Crud_box_2->setObjectName(QStringLiteral("Crud_box_2"));
        sizePolicy2.setHeightForWidth(Crud_box_2->sizePolicy().hasHeightForWidth());
        Crud_box_2->setSizePolicy(sizePolicy2);
        Crud_box_2->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_2 = new QVBoxLayout(Crud_box_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chercher_chantiers = new QLineEdit(Crud_box_2);
        chercher_chantiers->setObjectName(QStringLiteral("chercher_chantiers"));
        chercher_chantiers->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(chercher_chantiers);

        ajouter_chantiers = new QPushButton(Crud_box_2);
        ajouter_chantiers->setObjectName(QStringLiteral("ajouter_chantiers"));
        ajouter_chantiers->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(ajouter_chantiers);

        modifier_chantier = new QPushButton(Crud_box_2);
        modifier_chantier->setObjectName(QStringLiteral("modifier_chantier"));
        modifier_chantier->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(modifier_chantier);

        supprimer_chantiers = new QPushButton(Crud_box_2);
        supprimer_chantiers->setObjectName(QStringLiteral("supprimer_chantiers"));
        supprimer_chantiers->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(supprimer_chantiers);

        trier_chantiers = new QPushButton(Crud_box_2);
        trier_chantiers->setObjectName(QStringLiteral("trier_chantiers"));
        trier_chantiers->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(trier_chantiers);


        horizontalLayout_2->addWidget(Crud_box_2);

        retour_chantier = new QPushButton(chantiers);
        retour_chantier->setObjectName(QStringLiteral("retour_chantier"));
        retour_chantier->setGeometry(QRect(0, 0, 93, 28));
        retour_chantier->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(chantiers);
        Taches = new QWidget();
        Taches->setObjectName(QStringLiteral("Taches"));
        main_taches = new QGroupBox(Taches);
        main_taches->setObjectName(QStringLiteral("main_taches"));
        main_taches->setGeometry(QRect(10, 30, 1061, 321));
        sizePolicy2.setHeightForWidth(main_taches->sizePolicy().hasHeightForWidth());
        main_taches->setSizePolicy(sizePolicy2);
        main_taches->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        horizontalLayout_4 = new QHBoxLayout(main_taches);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableView_tache = new QTableView(main_taches);
        tableView_tache->setObjectName(QStringLiteral("tableView_tache"));
        tableView_tache->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        horizontalLayout_4->addWidget(tableView_tache);

        Crud_box_3 = new QGroupBox(main_taches);
        Crud_box_3->setObjectName(QStringLiteral("Crud_box_3"));
        sizePolicy2.setHeightForWidth(Crud_box_3->sizePolicy().hasHeightForWidth());
        Crud_box_3->setSizePolicy(sizePolicy2);
        Crud_box_3->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_3 = new QVBoxLayout(Crud_box_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        chercher_tache = new QLineEdit(Crud_box_3);
        chercher_tache->setObjectName(QStringLiteral("chercher_tache"));
        chercher_tache->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(chercher_tache);

        ajouter_tache = new QPushButton(Crud_box_3);
        ajouter_tache->setObjectName(QStringLiteral("ajouter_tache"));
        ajouter_tache->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(ajouter_tache);

        modifier_tache = new QPushButton(Crud_box_3);
        modifier_tache->setObjectName(QStringLiteral("modifier_tache"));
        modifier_tache->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(modifier_tache);

        supprimer_tache = new QPushButton(Crud_box_3);
        supprimer_tache->setObjectName(QStringLiteral("supprimer_tache"));
        supprimer_tache->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(supprimer_tache);

        trier_taches = new QPushButton(Crud_box_3);
        trier_taches->setObjectName(QStringLiteral("trier_taches"));
        trier_taches->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(trier_taches);


        horizontalLayout_4->addWidget(Crud_box_3);

        retour_taches = new QPushButton(Taches);
        retour_taches->setObjectName(QStringLiteral("retour_taches"));
        retour_taches->setGeometry(QRect(0, 0, 93, 28));
        retour_taches->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(Taches);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1157, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        login_group->setTitle(QString());
        bhema_box->setTitle(QString());
        username->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        password->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        forget_button->setText(QApplication::translate("MainWindow", "Forget Password?", Q_NULLPTR));
        login_button->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        image_login->setTitle(QString());
        gerer_employe->setText(QApplication::translate("MainWindow", "Gerer les Employees", Q_NULLPTR));
        gerer_chantiers->setText(QApplication::translate("MainWindow", "Gerer les chantiers", Q_NULLPTR));
        gerer_mp->setText(QApplication::translate("MainWindow", "Gerer les Matieres Premieres", Q_NULLPTR));
        gerer_tache->setText(QApplication::translate("MainWindow", "Gerer les taches", Q_NULLPTR));
        main_employe->setTitle(QString());
        Crud_box_4->setTitle(QString());
        chercher_employe->setPlaceholderText(QApplication::translate("MainWindow", "chercher...", Q_NULLPTR));
        ajouter_employe->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier_employe->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_employe->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        trier_employe->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        Retour_employe->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        ajout_box->setTitle(QString());
        effacer_mp->setText(QApplication::translate("MainWindow", "Effacer", Q_NULLPTR));
        prix->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        quantite->setText(QApplication::translate("MainWindow", "Quantite", Q_NULLPTR));
        le_idM->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        nom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Id_fournisseur", Q_NULLPTR));
        Crud_box->setTitle(QApplication::translate("MainWindow", "Metiers", Q_NULLPTR));
        le_chercherM->setPlaceholderText(QApplication::translate("MainWindow", "Search...", Q_NULLPTR));
        chercherM_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        ajouter_mp->setText(QApplication::translate("MainWindow", "Ajouter MP", Q_NULLPTR));
        update_mp->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "envoi pour modifier", Q_NULLPTR));
        supprimer_mp->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pred_mp->setText(QApplication::translate("MainWindow", "Sys.Prediction", Q_NULLPTR));
        statistique->setTitle(QString());
        RetourM->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Metiers", Q_NULLPTR));
        TriNM->setText(QApplication::translate("MainWindow", "Tri par Nom ", Q_NULLPTR));
        TriQM->setText(QApplication::translate("MainWindow", "Tri par Quantite", Q_NULLPTR));
        TriPM->setText(QApplication::translate("MainWindow", "Tri par Prix", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Notification", Q_NULLPTR));
        main_chantier->setTitle(QString());
        Crud_box_2->setTitle(QString());
        chercher_chantiers->setPlaceholderText(QApplication::translate("MainWindow", "chercher...", Q_NULLPTR));
        ajouter_chantiers->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier_chantier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_chantiers->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        trier_chantiers->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        retour_chantier->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        main_taches->setTitle(QString());
        Crud_box_3->setTitle(QString());
        chercher_tache->setPlaceholderText(QApplication::translate("MainWindow", "Chercher...", Q_NULLPTR));
        ajouter_tache->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier_tache->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_tache->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        trier_taches->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        retour_taches->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
