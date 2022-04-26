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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

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
    QPushButton *gerer_tache;
    QPushButton *gerer_partenaires;
    QPushButton *gerer_employe;
    QPushButton *gerer_chantiers;
    QPushButton *gerer_mp;
    QPushButton *Plateforme_emp;
    QPushButton *gerer_fournisseur;
    QWidget *Employe;
    QComboBox *tri_emp_5;
    QTableView *tableView_9;
    QPushButton *Retour_employe_18;
    QCheckBox *direc_5;
    QPushButton *reclamations_5;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *ajouter_em_6;
    QPushButton *modifier_emp_6;
    QPushButton *del_emp_6;
    QPushButton *QR_interface_5;
    QLineEdit *chercher_employe_5;
    QWidget *Matiere_Premiere;
    QGroupBox *Crud_MP;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *le_chercherMP;
    QPushButton *chercherMP;
    QPushButton *Ajout_MP;
    QPushButton *update_MP;
    QPushButton *envoi_MP;
    QPushButton *supprimer_MP;
    QPushButton *file_MP;
    QGroupBox *Ajout_Box;
    QFormLayout *formLayout_2;
    QLabel *le_id_MP;
    QLineEdit *ID_MP;
    QLabel *le_nom_MP;
    QLineEdit *Nom_MP;
    QLabel *le_quatite_MP;
    QLineEdit *Quantite_MP;
    QLabel *le_prix_MP;
    QLineEdit *Prix_MP;
    QLabel *le_ID_FMP;
    QLineEdit *ID_FMP;
    QPushButton *clear;
    QPushButton *return_MP;
    QLabel *Matieres_Premierss;
    QGroupBox *metier_MP;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *triNM;
    QRadioButton *triQM;
    QRadioButton *triPM;
    QPushButton *Arduinoo;
    QCustomPlot *customPlot_2;
    QTableView *tab_test;
    QWidget *chantiers;
    QGroupBox *main_chantier;
    QHBoxLayout *horizontalLayout_2;
    QTableView *chan;
    QGroupBox *Crud_box_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *chercher_ch;
    QPushButton *chercher1;
    QPushButton *ajouter_chantiers;
    QPushButton *modifi;
    QPushButton *supprimer_c;
    QCheckBox *triem;
    QCheckBox *trida;
    QCheckBox *trisur;
    QPushButton *estimation;
    QPushButton *retour_chantier;
    QCustomPlot *customPlot;
    QWidget *chantiers2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *le_idc;
    QLabel *label;
    QLineEdit *emplacement;
    QLabel *label_2;
    QLineEdit *surface;
    QLabel *label_4;
    QLineEdit *description;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QComboBox *nomm;
    QLabel *label_7;
    QDateEdit *dateEdit_2;
    QLineEdit *planC;
    QLabel *label_21;
    QPushButton *retour_chantier_3;
    QPushButton *ajouter;
    QWidget *modifierch;
    QPushButton *modifier;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLineEdit *le_idc_3;
    QLabel *label_14;
    QLineEdit *emplacement_3;
    QLabel *label_15;
    QLineEdit *surface_3;
    QLabel *label_16;
    QLineEdit *description_3;
    QLabel *label_17;
    QLineEdit *date_3;
    QLabel *label_18;
    QLineEdit *date2_3;
    QLabel *label_19;
    QComboBox *id;
    QLabel *label_22;
    QLineEdit *planC_2;
    QPushButton *retour_chantier_5;
    QWidget *Taches;
    QGroupBox *main_taches;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *Input_Box_3;
    QFormLayout *formLayout_5;
    QLabel *tache_label_3;
    QLineEdit *idTache_3;
    QLabel *dateD_label_3;
    QDateEdit *dateDone_3;
    QLabel *idE_label_3;
    QLineEdit *idEmploye_3;
    QLabel *nomE_label_3;
    QLineEdit *nomEmploye_3;
    QLabel *description_label_3;
    QTextEdit *descEmploye_3;
    QDateEdit *dateUpload_3;
    QLabel *dateU_label_3;
    QGroupBox *Crud_box_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *chercher_tache;
    QPushButton *ajouter_tache;
    QPushButton *upload_taches_3;
    QPushButton *modifier_tache;
    QPushButton *supprimer_tache;
    QPushButton *chercher_tacheB_3;
    QPushButton *retour_taches;
    QTableView *tableView_tache;
    QGroupBox *Tri_box;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *tri_date_2;
    QRadioButton *tri_nom_2;
    QRadioButton *tri_id_2;
    QWidget *Arduino_MP;
    QPushButton *return_Arduino;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *simen;
    QLCDNumber *lcdNumber;
    QGroupBox *image_arduino;
    QWidget *amrou_index_partenaire;
    QFrame *line_187;
    QWidget *widget_17;
    QVBoxLayout *verticalLayout_35;
    QPushButton *amrou4_25;
    QPushButton *amrou3_5;
    QHBoxLayout *horizontalLayout_66;
    QPushButton *amrou1_9;
    QPushButton *amrou2_5;
    QPushButton *amrou1_10;
    QPushButton *logo_5;
    QWidget *amrou_center;
    QFrame *line_194;
    QFrame *line_188;
    QFrame *line_192;
    QPushButton *amrou5_9;
    QPushButton *logo2_25;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_36;
    QPushButton *amrou9_5;
    QFrame *line_191;
    QFrame *line_190;
    QFrame *line_189;
    QFrame *line_193;
    QWidget *widget_18;
    QVBoxLayout *verticalLayout_37;
    QPushButton *amrou6_5;
    QHBoxLayout *horizontalLayout_67;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *amrou_filter_reset_5;
    QComboBox *amrou_secteur_filter_5;
    QPushButton *amrou_filter_go_5;
    QTableView *amrou_outputtable_13;
    QHBoxLayout *horizontalLayout_68;
    QPushButton *amrou7_5;
    QPushButton *amrou8_5;
    QLabel *label_95;
    QWidget *amrou_ajouter;
    QFrame *line_201;
    QFrame *line_196;
    QFrame *line_199;
    QLabel *label_101;
    QWidget *widget_19;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_69;
    QLabel *label_96;
    QLineEdit *amrou_id_9;
    QHBoxLayout *horizontalLayout_70;
    QLabel *label_97;
    QLineEdit *amrou_nom_9;
    QHBoxLayout *horizontalLayout_71;
    QLabel *label_98;
    QComboBox *amrou_secteur_9;
    QHBoxLayout *horizontalLayout_72;
    QLabel *label_99;
    QLineEdit *amrou_email_9;
    QHBoxLayout *horizontalLayout_73;
    QLabel *label_100;
    QTextEdit *amrou_description_9;
    QHBoxLayout *horizontalLayout_74;
    QPushButton *amrou11_9;
    QPushButton *amrou10_9;
    QFrame *line_195;
    QPushButton *logo2_26;
    QFrame *line_198;
    QFrame *line_200;
    QPushButton *amrou4_26;
    QFrame *line_197;
    QWidget *amrou_generate;
    QLabel *label_102;
    QFrame *line_202;
    QFrame *line_203;
    QFrame *line_204;
    QPushButton *amrou4_27;
    QPushButton *logo2_27;
    QFrame *line_205;
    QFrame *line_206;
    QWidget *layoutWidget_16;
    QVBoxLayout *verticalLayout_39;
    QTableView *amrou_outputtable_14;
    QPushButton *amrou12_5;
    QFrame *line_207;
    QFrame *line_208;
    QWidget *amrou_contrat;
    QLineEdit *amrou_company_contrat;
    QPushButton *amrou_inverse_content;
    QTextEdit *amrou_contenu_contrat;
    QLabel *label_16aaa;
    QLabel *label_5adsqdq;
    QComboBox *amrou_language_translate;
    QLineEdit *amrou_header_contrat;
    QFrame *line_38gfdhjje;
    QLabel *label_7fdsfsfs;
    QLabel *label_6fqfqfq;
    QLineEdit *amrou_date_contrat;
    QFrame *line_35zzzzzzaaa;
    QFrame *line_36wdxwf;
    QFrame *line_39wouuuuh;
    QLineEdit *amrou_partner_contrat;
    QFrame *line_40leeeaaad;
    QPushButton *amrou4_28;
    QTextEdit *amrou_contenu_translated;
    QFrame *line_41mouchnormal;
    QFrame *line_37ersfsfs;
    QPushButton *amrou_download_pdf;
    QPushButton *logo2_28;
    QPushButton *amrou_translates;
    QLineEdit *amrou_lieu_contrat;
    QWidget *amrou_rec_select;
    QFrame *line_44dffffdd;
    QWidget *layoutWidget_17;
    QVBoxLayout *verticalLayout_40;
    QTableView *amrou_outputtable_15;
    QPushButton *amrou14_5;
    QFrame *line_47efdsfww;
    QPushButton *logo2_29;
    QFrame *line_48ggggjjjj;
    QFrame *line_46wcwcf;
    QPushButton *amrou4_29;
    QFrame *line_45vvdx;
    QFrame *line_43efzfdsfsfs;
    QLabel *label_17grave;
    QLabel *label_8walah;
    QFrame *line_42adsqdqdzaggg;
    QWidget *amrou_modifier;
    QFrame *line_54pf;
    QLabel *label_18ffffaaaaa;
    QFrame *line_49zaeasea;
    QFrame *line_55fadit;
    QFrame *line_51whateverrrrr;
    QFrame *line_53ouuh;
    QPushButton *logo2_30;
    QWidget *widget_20;
    QVBoxLayout *verticalLayout_41;
    QHBoxLayout *horizontalLayout_75;
    QLabel *label_19yeee;
    QLineEdit *amrou_id_10;
    QHBoxLayout *horizontalLayout_76;
    QLabel *label_20eeeey;
    QLineEdit *amrou_nom_10;
    QHBoxLayout *horizontalLayout_77;
    QLabel *label_21lala;
    QComboBox *amrou_secteur_10;
    QHBoxLayout *horizontalLayout_78;
    QLabel *label_22bom;
    QLineEdit *amrou_email_10;
    QHBoxLayout *horizontalLayout_79;
    QLabel *label_24bombom;
    QTextEdit *amrou_description_10;
    QHBoxLayout *horizontalLayout_80;
    QPushButton *amrou11_10;
    QPushButton *amrou10_10;
    QFrame *line_52olala;
    QFrame *line_50random;
    QPushButton *amrou4_30;
    QWidget *amrou_resultat;
    QLabel *amrou_recommend_result;
    QPushButton *amrou5_10;
    QPushButton *amrou_contact_email;
    QPlainTextEdit *amrou_email_content;
    QLabel *amrou_label13_13;
    QFrame *amrou_line_21;
    QFrame *line_16etesfs;
    QLabel *amrou_label13_14;
    QLabel *amrou_label13_15;
    QFrame *line_17test;
    QPlainTextEdit *amrou_email_sujet;
    QFrame *line_1amrou_9;
    QFrame *amrou_line_22;
    QFrame *line_18eeeeee;
    QPushButton *amrou_logo2_8;
    QWidget *reclamations_list_5;
    QTextEdit *msg_aff_5;
    QLineEdit *titre_aff_5;
    QLabel *reclamations_list_lab_5;
    QListView *titres_rec_5;
    QPushButton *retour_emp_9;
    QPushButton *supp_msg_5;
    QWidget *ajouter_emp_p_5;
    QPushButton *Retour_employe_19;
    QLabel *QR_aff_5;
    QWidget *formLayoutWidget_11;
    QFormLayout *formLayout_12;
    QLabel *id_emp_9;
    QLineEdit *id_emp_i_9;
    QLabel *nom_emp_9;
    QLineEdit *nom_emp_i_9;
    QLabel *role_emp_9;
    QLabel *login_emp_9;
    QLineEdit *login_emp_i_9;
    QLabel *pass_emp_9;
    QLineEdit *pass_emp_i_9;
    QPushButton *ajouter_emp_9;
    QComboBox *role_emp_i_9;
    QPushButton *generQR_5;
    QWidget *modifer_emp_5;
    QWidget *formLayoutWidget_12;
    QFormLayout *formLayout_13;
    QLabel *id_emp_10;
    QLineEdit *id_emp_i_10;
    QLabel *nom_emp_10;
    QLineEdit *nom_emp_i_10;
    QLabel *role_emp_10;
    QLabel *login_emp_10;
    QLineEdit *login_emp_i_10;
    QLabel *pass_emp_10;
    QLineEdit *pass_emp_i_10;
    QPushButton *ajouter_emp_10;
    QComboBox *role_emp_i_10;
    QPushButton *Retour_employe_20;
    QWidget *Interface_emp_5;
    QPushButton *pushButton_9;
    QPushButton *Retour_employe_21;
    QTextEdit *reclamation_i_5;
    QLineEdit *titre_rec_5;
    QLabel *contenu_rec_5;
    QLabel *titre_rec_lab_5;
    QCustomPlot *customPlot_7;
    QWidget *QR_Ardunio_verif_5;
    QLineEdit *id_entry_5;
    QPushButton *Activate_ard_5;
    QPushButton *terminate_ard_5;
    QLineEdit *entry_rej_acc_5;
    QPushButton *retour_emp_10;
    QLabel *label_12;
    QWidget *Architect;
    QPushButton *retour_taches_2;
    QGroupBox *groupBox_2;
    QLabel *image_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_12;
    QPushButton *publierPlan_2;
    QPushButton *accesPlan_2;
    QWidget *Employe_Tache;
    QTableView *tableView_employe;
    QPushButton *export_button;
    QPushButton *Retour_employe;
    QWidget *page;
    QGroupBox *groupBox_3;
    QLineEdit *id_f;
    QLineEdit *nom_f;
    QLineEdit *quantite_f;
    QLineEdit *prix_f;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_20;
    QLineEdit *date_f;
    QPushButton *ajouter_f;
    QPushButton *supprimer_f;
    QPushButton *modifier_f;
    QPushButton *enregistrer_f;
    QGroupBox *groupBox_5;
    QTableView *tableView_f;
    QGroupBox *groupBox_6;
    QPushButton *rechercher_f;
    QLineEdit *chercher_f;
    QGroupBox *groupBox_7;
    QPushButton *recue_f;
    QGroupBox *groupBox_8;
    QPushButton *Formulaire;
    QGroupBox *groupBox_9;
    QPushButton *optionbutton;
    QScrollArea *scrollAreaWidgetContents_2;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_10;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1396, 885);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1201, 881));
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
        gerer_tache = new QPushButton(layoutWidget_2);
        gerer_tache->setObjectName(QStringLiteral("gerer_tache"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
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

        gerer_partenaires = new QPushButton(layoutWidget_2);
        gerer_partenaires->setObjectName(QStringLiteral("gerer_partenaires"));
        sizePolicy1.setHeightForWidth(gerer_partenaires->sizePolicy().hasHeightForWidth());
        gerer_partenaires->setSizePolicy(sizePolicy1);
        gerer_partenaires->setStyleSheet(QLatin1String("QPushButton{\n"
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

        model_box->addWidget(gerer_partenaires, 2, 0, 1, 1);

        gerer_employe = new QPushButton(layoutWidget_2);
        gerer_employe->setObjectName(QStringLiteral("gerer_employe"));
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

        Plateforme_emp = new QPushButton(layoutWidget_2);
        Plateforme_emp->setObjectName(QStringLiteral("Plateforme_emp"));
        sizePolicy1.setHeightForWidth(Plateforme_emp->sizePolicy().hasHeightForWidth());
        Plateforme_emp->setSizePolicy(sizePolicy1);
        Plateforme_emp->setStyleSheet(QLatin1String("QPushButton{\n"
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

        model_box->addWidget(Plateforme_emp, 2, 1, 1, 1);

        gerer_fournisseur = new QPushButton(choose_model);
        gerer_fournisseur->setObjectName(QStringLiteral("gerer_fournisseur"));
        gerer_fournisseur->setGeometry(QRect(10, 630, 531, 198));
        sizePolicy1.setHeightForWidth(gerer_fournisseur->sizePolicy().hasHeightForWidth());
        gerer_fournisseur->setSizePolicy(sizePolicy1);
        gerer_fournisseur->setStyleSheet(QLatin1String("QPushButton{\n"
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
        stackedWidget->addWidget(choose_model);
        Employe = new QWidget();
        Employe->setObjectName(QStringLiteral("Employe"));
        tri_emp_5 = new QComboBox(Employe);
        tri_emp_5->setObjectName(QStringLiteral("tri_emp_5"));
        tri_emp_5->setGeometry(QRect(547, 10, 141, 41));
        tri_emp_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        tableView_9 = new QTableView(Employe);
        tableView_9->setObjectName(QStringLiteral("tableView_9"));
        tableView_9->setGeometry(QRect(10, 60, 1171, 631));
        tableView_9->setStyleSheet(QLatin1String("QWidget {\n"
"    background-color: #111827;\n"
"  	color: white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #111827;\n"
"    padding: 2px;\n"
"    border: 1px solid #ff5500;\n"
"    font-size: 13pt;\n"
"color: teal;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: teal;\n"
"    font-size: 11pt;\n"
"	color: white;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #646464;\n"
"    border: 1px solid #ff5500;\n"
"}"));
        Retour_employe_18 = new QPushButton(Employe);
        Retour_employe_18->setObjectName(QStringLiteral("Retour_employe_18"));
        Retour_employe_18->setGeometry(QRect(0, 10, 201, 41));
        Retour_employe_18->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        direc_5 = new QCheckBox(Employe);
        direc_5->setObjectName(QStringLiteral("direc_5"));
        direc_5->setGeometry(QRect(690, 10, 51, 41));
        direc_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 0px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        reclamations_5 = new QPushButton(Employe);
        reclamations_5->setObjectName(QStringLiteral("reclamations_5"));
        reclamations_5->setGeometry(QRect(740, 10, 141, 41));
        reclamations_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        horizontalLayoutWidget_5 = new QWidget(Employe);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(209, 10, 331, 41));
        horizontalLayout_26 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        ajouter_em_6 = new QPushButton(horizontalLayoutWidget_5);
        ajouter_em_6->setObjectName(QStringLiteral("ajouter_em_6"));
        ajouter_em_6->setMinimumSize(QSize(41, 0));
        ajouter_em_6->setStyleSheet(QLatin1String("#ajouter_em {\n"
"background-color: green;\n"
"color:white;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:15px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"}"));

        horizontalLayout_26->addWidget(ajouter_em_6);

        modifier_emp_6 = new QPushButton(horizontalLayoutWidget_5);
        modifier_emp_6->setObjectName(QStringLiteral("modifier_emp_6"));
        modifier_emp_6->setStyleSheet(QLatin1String("background-color: #00007f;\n"
"color:white;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:15px;\n"
"padding:8px;\n"
"border-radius: 10px;"));

        horizontalLayout_26->addWidget(modifier_emp_6);

        del_emp_6 = new QPushButton(horizontalLayoutWidget_5);
        del_emp_6->setObjectName(QStringLiteral("del_emp_6"));
        del_emp_6->setStyleSheet(QLatin1String("background-color: #b80000;\n"
"color:white;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:15px;\n"
"padding:8px;\n"
"border-radius: 10px;"));

        horizontalLayout_26->addWidget(del_emp_6);

        QR_interface_5 = new QPushButton(Employe);
        QR_interface_5->setObjectName(QStringLiteral("QR_interface_5"));
        QR_interface_5->setGeometry(QRect(880, 10, 91, 41));
        QR_interface_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        chercher_employe_5 = new QLineEdit(Employe);
        chercher_employe_5->setObjectName(QStringLiteral("chercher_employe_5"));
        chercher_employe_5->setGeometry(QRect(970, 10, 171, 41));
        chercher_employe_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(Employe);
        Matiere_Premiere = new QWidget();
        Matiere_Premiere->setObjectName(QStringLiteral("Matiere_Premiere"));
        Crud_MP = new QGroupBox(Matiere_Premiere);
        Crud_MP->setObjectName(QStringLiteral("Crud_MP"));
        Crud_MP->setGeometry(QRect(970, 50, 221, 411));
        Crud_MP->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_9 = new QVBoxLayout(Crud_MP);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        le_chercherMP = new QLineEdit(Crud_MP);
        le_chercherMP->setObjectName(QStringLiteral("le_chercherMP"));
        le_chercherMP->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        verticalLayout_9->addWidget(le_chercherMP);

        chercherMP = new QPushButton(Crud_MP);
        chercherMP->setObjectName(QStringLiteral("chercherMP"));
        chercherMP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_9->addWidget(chercherMP);

        Ajout_MP = new QPushButton(Crud_MP);
        Ajout_MP->setObjectName(QStringLiteral("Ajout_MP"));
        Ajout_MP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_9->addWidget(Ajout_MP);

        update_MP = new QPushButton(Crud_MP);
        update_MP->setObjectName(QStringLiteral("update_MP"));
        update_MP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_9->addWidget(update_MP);

        envoi_MP = new QPushButton(Crud_MP);
        envoi_MP->setObjectName(QStringLiteral("envoi_MP"));
        envoi_MP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_9->addWidget(envoi_MP);

        supprimer_MP = new QPushButton(Crud_MP);
        supprimer_MP->setObjectName(QStringLiteral("supprimer_MP"));
        supprimer_MP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_9->addWidget(supprimer_MP);

        file_MP = new QPushButton(Crud_MP);
        file_MP->setObjectName(QStringLiteral("file_MP"));
        file_MP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_9->addWidget(file_MP);

        Ajout_Box = new QGroupBox(Matiere_Premiere);
        Ajout_Box->setObjectName(QStringLiteral("Ajout_Box"));
        Ajout_Box->setGeometry(QRect(20, 60, 321, 251));
        Ajout_Box->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        formLayout_2 = new QFormLayout(Ajout_Box);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        le_id_MP = new QLabel(Ajout_Box);
        le_id_MP->setObjectName(QStringLiteral("le_id_MP"));
        le_id_MP->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, le_id_MP);

        ID_MP = new QLineEdit(Ajout_Box);
        ID_MP->setObjectName(QStringLiteral("ID_MP"));
        ID_MP->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: yellow;"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ID_MP);

        le_nom_MP = new QLabel(Ajout_Box);
        le_nom_MP->setObjectName(QStringLiteral("le_nom_MP"));
        le_nom_MP->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, le_nom_MP);

        Nom_MP = new QLineEdit(Ajout_Box);
        Nom_MP->setObjectName(QStringLiteral("Nom_MP"));
        Nom_MP->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: yellow;"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, Nom_MP);

        le_quatite_MP = new QLabel(Ajout_Box);
        le_quatite_MP->setObjectName(QStringLiteral("le_quatite_MP"));
        le_quatite_MP->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, le_quatite_MP);

        Quantite_MP = new QLineEdit(Ajout_Box);
        Quantite_MP->setObjectName(QStringLiteral("Quantite_MP"));
        Quantite_MP->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: yellow;"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, Quantite_MP);

        le_prix_MP = new QLabel(Ajout_Box);
        le_prix_MP->setObjectName(QStringLiteral("le_prix_MP"));
        le_prix_MP->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, le_prix_MP);

        Prix_MP = new QLineEdit(Ajout_Box);
        Prix_MP->setObjectName(QStringLiteral("Prix_MP"));
        Prix_MP->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: yellow;"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, Prix_MP);

        le_ID_FMP = new QLabel(Ajout_Box);
        le_ID_FMP->setObjectName(QStringLiteral("le_ID_FMP"));
        le_ID_FMP->setStyleSheet(QLatin1String("color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, le_ID_FMP);

        ID_FMP = new QLineEdit(Ajout_Box);
        ID_FMP->setObjectName(QStringLiteral("ID_FMP"));
        ID_FMP->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: yellow;"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, ID_FMP);

        clear = new QPushButton(Ajout_Box);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setStyleSheet(QLatin1String("color: yellow;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, clear);

        return_MP = new QPushButton(Matiere_Premiere);
        return_MP->setObjectName(QStringLiteral("return_MP"));
        return_MP->setGeometry(QRect(20, 10, 101, 41));
        return_MP->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: red;\n"
"border-radius: 10px;\n"
"color: red;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        Matieres_Premierss = new QLabel(Matiere_Premiere);
        Matieres_Premierss->setObjectName(QStringLiteral("Matieres_Premierss"));
        Matieres_Premierss->setGeometry(QRect(520, 10, 181, 31));
        Matieres_Premierss->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"font: 12pt \"MS Shell Dlg 2\";\n"
""));
        metier_MP = new QGroupBox(Matiere_Premiere);
        metier_MP->setObjectName(QStringLiteral("metier_MP"));
        metier_MP->setGeometry(QRect(970, 460, 231, 251));
        metier_MP->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        verticalLayout_10 = new QVBoxLayout(metier_MP);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        triNM = new QRadioButton(metier_MP);
        triNM->setObjectName(QStringLiteral("triNM"));
        triNM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_10->addWidget(triNM);

        triQM = new QRadioButton(metier_MP);
        triQM->setObjectName(QStringLiteral("triQM"));
        triQM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_10->addWidget(triQM);

        triPM = new QRadioButton(metier_MP);
        triPM->setObjectName(QStringLiteral("triPM"));
        triPM->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_10->addWidget(triPM);

        Arduinoo = new QPushButton(metier_MP);
        Arduinoo->setObjectName(QStringLiteral("Arduinoo"));
        Arduinoo->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_10->addWidget(Arduinoo);

        customPlot_2 = new QCustomPlot(Matiere_Premiere);
        customPlot_2->setObjectName(QStringLiteral("customPlot_2"));
        customPlot_2->setGeometry(QRect(20, 320, 941, 371));
        tab_test = new QTableView(Matiere_Premiere);
        tab_test->setObjectName(QStringLiteral("tab_test"));
        tab_test->setGeometry(QRect(340, 60, 631, 251));
        tab_test->setStyleSheet(QLatin1String("border: transparent;\n"
"border-color: rgb(107, 255, 251);\n"
"padding: 5px;\n"
"color: teal;\n"
"gridline-color: rgb(146, 255, 56);"));
        stackedWidget->addWidget(Matiere_Premiere);
        chantiers = new QWidget();
        chantiers->setObjectName(QStringLiteral("chantiers"));
        main_chantier = new QGroupBox(chantiers);
        main_chantier->setObjectName(QStringLiteral("main_chantier"));
        main_chantier->setGeometry(QRect(10, 50, 1061, 321));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(main_chantier->sizePolicy().hasHeightForWidth());
        main_chantier->setSizePolicy(sizePolicy2);
        main_chantier->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        horizontalLayout_2 = new QHBoxLayout(main_chantier);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        chan = new QTableView(main_chantier);
        chan->setObjectName(QStringLiteral("chan"));
        chan->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));

        horizontalLayout_2->addWidget(chan);

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
        chercher_ch = new QLineEdit(Crud_box_2);
        chercher_ch->setObjectName(QStringLiteral("chercher_ch"));
        chercher_ch->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(chercher_ch);

        chercher1 = new QPushButton(Crud_box_2);
        chercher1->setObjectName(QStringLiteral("chercher1"));
        chercher1->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(chercher1);

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

        modifi = new QPushButton(Crud_box_2);
        modifi->setObjectName(QStringLiteral("modifi"));
        modifi->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(modifi);

        supprimer_c = new QPushButton(Crud_box_2);
        supprimer_c->setObjectName(QStringLiteral("supprimer_c"));
        supprimer_c->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(supprimer_c);

        triem = new QCheckBox(Crud_box_2);
        triem->setObjectName(QStringLiteral("triem"));
        triem->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(triem);

        trida = new QCheckBox(Crud_box_2);
        trida->setObjectName(QStringLiteral("trida"));
        trida->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(trida);

        trisur = new QCheckBox(Crud_box_2);
        trisur->setObjectName(QStringLiteral("trisur"));
        trisur->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(trisur);

        estimation = new QPushButton(Crud_box_2);
        estimation->setObjectName(QStringLiteral("estimation"));
        estimation->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(estimation);


        horizontalLayout_2->addWidget(Crud_box_2);

        retour_chantier = new QPushButton(chantiers);
        retour_chantier->setObjectName(QStringLiteral("retour_chantier"));
        retour_chantier->setGeometry(QRect(10, 10, 93, 28));
        retour_chantier->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        customPlot = new QCustomPlot(chantiers);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(50, 400, 681, 231));
        stackedWidget->addWidget(chantiers);
        chantiers2 = new QWidget();
        chantiers2->setObjectName(QStringLiteral("chantiers2"));
        formLayoutWidget = new QWidget(chantiers2);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(300, 20, 421, 601));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        le_idc = new QLineEdit(formLayoutWidget);
        le_idc->setObjectName(QStringLiteral("le_idc"));
        le_idc->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_idc);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        emplacement = new QLineEdit(formLayoutWidget);
        emplacement->setObjectName(QStringLiteral("emplacement"));
        emplacement->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, emplacement);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        surface = new QLineEdit(formLayoutWidget);
        surface->setObjectName(QStringLiteral("surface"));
        surface->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, surface);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        description = new QLineEdit(formLayoutWidget);
        description->setObjectName(QStringLiteral("description"));
        description->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, description);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setStyleSheet(QLatin1String("color:	#FFFFFF;\n"
""));

        formLayout->setWidget(4, QFormLayout::FieldRole, dateEdit);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        nomm = new QComboBox(formLayoutWidget);
        nomm->setObjectName(QStringLiteral("nomm"));
        nomm->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout->setWidget(6, QFormLayout::FieldRole, nomm);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        dateEdit_2 = new QDateEdit(formLayoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout->setWidget(5, QFormLayout::FieldRole, dateEdit_2);

        planC = new QLineEdit(formLayoutWidget);
        planC->setObjectName(QStringLiteral("planC"));

        formLayout->setWidget(7, QFormLayout::FieldRole, planC);

        label_21 = new QLabel(formLayoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_21);

        retour_chantier_3 = new QPushButton(chantiers2);
        retour_chantier_3->setObjectName(QStringLiteral("retour_chantier_3"));
        retour_chantier_3->setGeometry(QRect(730, 590, 93, 28));
        retour_chantier_3->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #FF0000;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        ajouter = new QPushButton(chantiers2);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(830, 590, 93, 28));
        ajouter->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(chantiers2);
        modifierch = new QWidget();
        modifierch->setObjectName(QStringLiteral("modifierch"));
        modifier = new QPushButton(modifierch);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(830, 600, 93, 28));
        modifier->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        formLayoutWidget_3 = new QWidget(modifierch);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(300, 30, 421, 601));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        le_idc_3 = new QLineEdit(formLayoutWidget_3);
        le_idc_3->setObjectName(QStringLiteral("le_idc_3"));
        le_idc_3->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, le_idc_3);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        emplacement_3 = new QLineEdit(formLayoutWidget_3);
        emplacement_3->setObjectName(QStringLiteral("emplacement_3"));
        emplacement_3->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, emplacement_3);

        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        surface_3 = new QLineEdit(formLayoutWidget_3);
        surface_3->setObjectName(QStringLiteral("surface_3"));
        surface_3->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, surface_3);

        label_16 = new QLabel(formLayoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        description_3 = new QLineEdit(formLayoutWidget_3);
        description_3->setObjectName(QStringLiteral("description_3"));
        description_3->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, description_3);

        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_17);

        date_3 = new QLineEdit(formLayoutWidget_3);
        date_3->setObjectName(QStringLiteral("date_3"));
        date_3->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, date_3);

        label_18 = new QLabel(formLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_18);

        date2_3 = new QLineEdit(formLayoutWidget_3);
        date2_3->setObjectName(QStringLiteral("date2_3"));
        date2_3->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, date2_3);

        label_19 = new QLabel(formLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_19);

        id = new QComboBox(formLayoutWidget_3);
        id->setObjectName(QStringLiteral("id"));
        id->setStyleSheet(QStringLiteral("color:	#FFFFFF;"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, id);

        label_22 = new QLabel(formLayoutWidget_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("color: teal;\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_22);

        planC_2 = new QLineEdit(formLayoutWidget_3);
        planC_2->setObjectName(QStringLiteral("planC_2"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, planC_2);

        retour_chantier_5 = new QPushButton(modifierch);
        retour_chantier_5->setObjectName(QStringLiteral("retour_chantier_5"));
        retour_chantier_5->setGeometry(QRect(730, 600, 93, 28));
        retour_chantier_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #FF0000;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(modifierch);
        Taches = new QWidget();
        Taches->setObjectName(QStringLiteral("Taches"));
        main_taches = new QGroupBox(Taches);
        main_taches->setObjectName(QStringLiteral("main_taches"));
        main_taches->setGeometry(QRect(10, 30, 1151, 321));
        sizePolicy2.setHeightForWidth(main_taches->sizePolicy().hasHeightForWidth());
        main_taches->setSizePolicy(sizePolicy2);
        main_taches->setStyleSheet(QLatin1String("border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
""));
        horizontalLayout_4 = new QHBoxLayout(main_taches);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Input_Box_3 = new QGroupBox(main_taches);
        Input_Box_3->setObjectName(QStringLiteral("Input_Box_3"));
        sizePolicy.setHeightForWidth(Input_Box_3->sizePolicy().hasHeightForWidth());
        Input_Box_3->setSizePolicy(sizePolicy);
        formLayout_5 = new QFormLayout(Input_Box_3);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        tache_label_3 = new QLabel(Input_Box_3);
        tache_label_3->setObjectName(QStringLiteral("tache_label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tache_label_3->sizePolicy().hasHeightForWidth());
        tache_label_3->setSizePolicy(sizePolicy3);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, tache_label_3);

        idTache_3 = new QLineEdit(Input_Box_3);
        idTache_3->setObjectName(QStringLiteral("idTache_3"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(idTache_3->sizePolicy().hasHeightForWidth());
        idTache_3->setSizePolicy(sizePolicy4);
        idTache_3->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"color: red;\n"
""));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, idTache_3);

        dateD_label_3 = new QLabel(Input_Box_3);
        dateD_label_3->setObjectName(QStringLiteral("dateD_label_3"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, dateD_label_3);

        dateDone_3 = new QDateEdit(Input_Box_3);
        dateDone_3->setObjectName(QStringLiteral("dateDone_3"));
        sizePolicy4.setHeightForWidth(dateDone_3->sizePolicy().hasHeightForWidth());
        dateDone_3->setSizePolicy(sizePolicy4);
        dateDone_3->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"\n"
""));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, dateDone_3);

        idE_label_3 = new QLabel(Input_Box_3);
        idE_label_3->setObjectName(QStringLiteral("idE_label_3"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, idE_label_3);

        idEmploye_3 = new QLineEdit(Input_Box_3);
        idEmploye_3->setObjectName(QStringLiteral("idEmploye_3"));
        sizePolicy4.setHeightForWidth(idEmploye_3->sizePolicy().hasHeightForWidth());
        idEmploye_3->setSizePolicy(sizePolicy4);
        idEmploye_3->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"\n"
""));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, idEmploye_3);

        nomE_label_3 = new QLabel(Input_Box_3);
        nomE_label_3->setObjectName(QStringLiteral("nomE_label_3"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, nomE_label_3);

        nomEmploye_3 = new QLineEdit(Input_Box_3);
        nomEmploye_3->setObjectName(QStringLiteral("nomEmploye_3"));
        sizePolicy4.setHeightForWidth(nomEmploye_3->sizePolicy().hasHeightForWidth());
        nomEmploye_3->setSizePolicy(sizePolicy4);
        nomEmploye_3->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
""));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, nomEmploye_3);

        description_label_3 = new QLabel(Input_Box_3);
        description_label_3->setObjectName(QStringLiteral("description_label_3"));

        formLayout_5->setWidget(5, QFormLayout::LabelRole, description_label_3);

        descEmploye_3 = new QTextEdit(Input_Box_3);
        descEmploye_3->setObjectName(QStringLiteral("descEmploye_3"));
        descEmploye_3->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
""));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, descEmploye_3);

        dateUpload_3 = new QDateEdit(Input_Box_3);
        dateUpload_3->setObjectName(QStringLiteral("dateUpload_3"));
        sizePolicy4.setHeightForWidth(dateUpload_3->sizePolicy().hasHeightForWidth());
        dateUpload_3->setSizePolicy(sizePolicy4);
        dateUpload_3->setStyleSheet(QLatin1String("border: 2px solid teal;\n"
"padding: 5px;\n"
"\n"
""));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, dateUpload_3);

        dateU_label_3 = new QLabel(Input_Box_3);
        dateU_label_3->setObjectName(QStringLiteral("dateU_label_3"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, dateU_label_3);


        horizontalLayout_4->addWidget(Input_Box_3);

        Crud_box_3 = new QGroupBox(main_taches);
        Crud_box_3->setObjectName(QStringLiteral("Crud_box_3"));
        sizePolicy.setHeightForWidth(Crud_box_3->sizePolicy().hasHeightForWidth());
        Crud_box_3->setSizePolicy(sizePolicy);
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
        ajouter_tache->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_3->addWidget(ajouter_tache);

        upload_taches_3 = new QPushButton(Crud_box_3);
        upload_taches_3->setObjectName(QStringLiteral("upload_taches_3"));
        upload_taches_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_3->addWidget(upload_taches_3);

        modifier_tache = new QPushButton(Crud_box_3);
        modifier_tache->setObjectName(QStringLiteral("modifier_tache"));
        modifier_tache->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_3->addWidget(modifier_tache);

        supprimer_tache = new QPushButton(Crud_box_3);
        supprimer_tache->setObjectName(QStringLiteral("supprimer_tache"));
        supprimer_tache->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_3->addWidget(supprimer_tache);

        chercher_tacheB_3 = new QPushButton(Crud_box_3);
        chercher_tacheB_3->setObjectName(QStringLiteral("chercher_tacheB_3"));
        chercher_tacheB_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_3->addWidget(chercher_tacheB_3);


        horizontalLayout_4->addWidget(Crud_box_3);

        retour_taches = new QPushButton(Taches);
        retour_taches->setObjectName(QStringLiteral("retour_taches"));
        retour_taches->setGeometry(QRect(10, 0, 93, 28));
        retour_taches->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        tableView_tache = new QTableView(Taches);
        tableView_tache->setObjectName(QStringLiteral("tableView_tache"));
        tableView_tache->setGeometry(QRect(10, 360, 951, 331));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tableView_tache->sizePolicy().hasHeightForWidth());
        tableView_tache->setSizePolicy(sizePolicy5);
        tableView_tache->setStyleSheet(QLatin1String("border: transparent;\n"
"color: teal;\n"
""));
        Tri_box = new QGroupBox(Taches);
        Tri_box->setObjectName(QStringLiteral("Tri_box"));
        Tri_box->setGeometry(QRect(970, 360, 191, 321));
        Tri_box->setStyleSheet(QStringLiteral("border: transparent;"));
        verticalLayout_7 = new QVBoxLayout(Tri_box);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tri_date_2 = new QRadioButton(Tri_box);
        tri_date_2->setObjectName(QStringLiteral("tri_date_2"));
        tri_date_2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_7->addWidget(tri_date_2);

        tri_nom_2 = new QRadioButton(Tri_box);
        tri_nom_2->setObjectName(QStringLiteral("tri_nom_2"));
        tri_nom_2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_7->addWidget(tri_nom_2);

        tri_id_2 = new QRadioButton(Tri_box);
        tri_id_2->setObjectName(QStringLiteral("tri_id_2"));
        tri_id_2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        verticalLayout_7->addWidget(tri_id_2);

        stackedWidget->addWidget(Taches);
        Arduino_MP = new QWidget();
        Arduino_MP->setObjectName(QStringLiteral("Arduino_MP"));
        return_Arduino = new QPushButton(Arduino_MP);
        return_Arduino->setObjectName(QStringLiteral("return_Arduino"));
        return_Arduino->setGeometry(QRect(30, 30, 93, 28));
        return_Arduino->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        groupBox = new QGroupBox(Arduino_MP);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 440, 411, 131));
        groupBox->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        simen = new QPushButton(groupBox);
        simen->setObjectName(QStringLiteral("simen"));
        simen->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));

        horizontalLayout_3->addWidget(simen);

        lcdNumber = new QLCDNumber(Arduino_MP);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(130, 260, 341, 91));
        image_arduino = new QGroupBox(Arduino_MP);
        image_arduino->setObjectName(QStringLiteral("image_arduino"));
        image_arduino->setGeometry(QRect(570, 0, 621, 681));
        image_arduino->setStyleSheet(QLatin1String("#image_arduino{\n"
"background-image:url(\"C:/Users/moham/OneDrive/Bureau/2A/projet web/interface_finale/logo.png\");\n"
"background-position: center no-repeat;\n"
"background-size: 50%;\n"
"border: none;\n"
"border: transparent;\n"
"padding: 5px;\n"
"color: teal;\n"
"}\n"
""));
        stackedWidget->addWidget(Arduino_MP);
        amrou_index_partenaire = new QWidget();
        amrou_index_partenaire->setObjectName(QStringLiteral("amrou_index_partenaire"));
        line_187 = new QFrame(amrou_index_partenaire);
        line_187->setObjectName(QStringLiteral("line_187"));
        line_187->setGeometry(QRect(0, 0, 101, 701));
        line_187->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_187->setFrameShape(QFrame::VLine);
        line_187->setFrameShadow(QFrame::Sunken);
        widget_17 = new QWidget(amrou_index_partenaire);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        widget_17->setGeometry(QRect(120, 120, 1021, 411));
        widget_17->setStyleSheet(QStringLiteral("background: none;"));
        verticalLayout_35 = new QVBoxLayout(widget_17);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        amrou4_25 = new QPushButton(widget_17);
        amrou4_25->setObjectName(QStringLiteral("amrou4_25"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(amrou4_25->sizePolicy().hasHeightForWidth());
        amrou4_25->setSizePolicy(sizePolicy6);
        amrou4_25->setCursor(QCursor(Qt::PointingHandCursor));
        amrou4_25->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));

        verticalLayout_35->addWidget(amrou4_25);

        amrou3_5 = new QPushButton(widget_17);
        amrou3_5->setObjectName(QStringLiteral("amrou3_5"));
        amrou3_5->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        amrou3_5->setFont(font);
        amrou3_5->setStyleSheet(QLatin1String("background: transparent;\n"
"color: #ffffff;"));

        verticalLayout_35->addWidget(amrou3_5);

        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setSpacing(0);
        horizontalLayout_66->setObjectName(QStringLiteral("horizontalLayout_66"));
        horizontalLayout_66->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_66->setContentsMargins(10, 15, 10, 15);
        amrou1_9 = new QPushButton(widget_17);
        amrou1_9->setObjectName(QStringLiteral("amrou1_9"));
        sizePolicy1.setHeightForWidth(amrou1_9->sizePolicy().hasHeightForWidth());
        amrou1_9->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        amrou1_9->setFont(font1);
        amrou1_9->setCursor(QCursor(Qt::PointingHandCursor));
        amrou1_9->setStyleSheet(QLatin1String("background: white;\n"
"color: #115e59;\n"
"letter-spacing: 0.1px;\n"
"margin: 10px;\n"
"border-radius: 25px;"));

        horizontalLayout_66->addWidget(amrou1_9);

        amrou2_5 = new QPushButton(widget_17);
        amrou2_5->setObjectName(QStringLiteral("amrou2_5"));
        sizePolicy1.setHeightForWidth(amrou2_5->sizePolicy().hasHeightForWidth());
        amrou2_5->setSizePolicy(sizePolicy1);
        amrou2_5->setFont(font1);
        amrou2_5->setCursor(QCursor(Qt::PointingHandCursor));
        amrou2_5->setStyleSheet(QLatin1String("background: white;\n"
"color: #115e59;\n"
"letter-spacing: 0.1px;\n"
"margin: 10px;\n"
"border-radius: 25px;"));

        horizontalLayout_66->addWidget(amrou2_5);

        amrou1_10 = new QPushButton(widget_17);
        amrou1_10->setObjectName(QStringLiteral("amrou1_10"));
        sizePolicy1.setHeightForWidth(amrou1_10->sizePolicy().hasHeightForWidth());
        amrou1_10->setSizePolicy(sizePolicy1);
        amrou1_10->setFont(font1);
        amrou1_10->setCursor(QCursor(Qt::PointingHandCursor));
        amrou1_10->setStyleSheet(QLatin1String("background: white;\n"
"color: #115e59;\n"
"letter-spacing: 0.1px;\n"
"margin: 10px;\n"
"border-radius: 25px;"));

        horizontalLayout_66->addWidget(amrou1_10);


        verticalLayout_35->addLayout(horizontalLayout_66);

        logo_5 = new QPushButton(amrou_index_partenaire);
        logo_5->setObjectName(QStringLiteral("logo_5"));
        logo_5->setGeometry(QRect(20, 20, 61, 51));
        logo_5->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        stackedWidget->addWidget(amrou_index_partenaire);
        amrou_center = new QWidget();
        amrou_center->setObjectName(QStringLiteral("amrou_center"));
        line_194 = new QFrame(amrou_center);
        line_194->setObjectName(QStringLiteral("line_194"));
        line_194->setGeometry(QRect(0, 0, 101, 631));
        line_194->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_194->setFrameShape(QFrame::VLine);
        line_194->setFrameShadow(QFrame::Sunken);
        line_188 = new QFrame(amrou_center);
        line_188->setObjectName(QStringLiteral("line_188"));
        line_188->setGeometry(QRect(80, 570, 1130, 2));
        line_188->setFrameShape(QFrame::HLine);
        line_188->setFrameShadow(QFrame::Sunken);
        line_192 = new QFrame(amrou_center);
        line_192->setObjectName(QStringLiteral("line_192"));
        line_192->setGeometry(QRect(70, 600, 1131, 2));
        line_192->setFrameShape(QFrame::HLine);
        line_192->setFrameShadow(QFrame::Sunken);
        amrou5_9 = new QPushButton(amrou_center);
        amrou5_9->setObjectName(QStringLiteral("amrou5_9"));
        amrou5_9->setGeometry(QRect(120, 30, 65, 20));
        sizePolicy6.setHeightForWidth(amrou5_9->sizePolicy().hasHeightForWidth());
        amrou5_9->setSizePolicy(sizePolicy6);
        amrou5_9->setCursor(QCursor(Qt::PointingHandCursor));
        amrou5_9->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        logo2_25 = new QPushButton(amrou_center);
        logo2_25->setObjectName(QStringLiteral("logo2_25"));
        logo2_25->setGeometry(QRect(20, 20, 61, 51));
        logo2_25->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        layoutWidget_11 = new QWidget(amrou_center);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(720, 110, 381, 461));
        verticalLayout_36 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_36->setSpacing(95);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        amrou9_5 = new QPushButton(layoutWidget_11);
        amrou9_5->setObjectName(QStringLiteral("amrou9_5"));
        sizePolicy1.setHeightForWidth(amrou9_5->sizePolicy().hasHeightForWidth());
        amrou9_5->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        amrou9_5->setFont(font2);
        amrou9_5->setCursor(QCursor(Qt::PointingHandCursor));
        amrou9_5->setStyleSheet(QLatin1String("color: #134e4a;\n"
"background: #f0fdfa;\n"
"border: none;"));

        verticalLayout_36->addWidget(amrou9_5);

        line_191 = new QFrame(amrou_center);
        line_191->setObjectName(QStringLiteral("line_191"));
        line_191->setGeometry(QRect(70, 590, 1131, 2));
        line_191->setFrameShape(QFrame::HLine);
        line_191->setFrameShadow(QFrame::Sunken);
        line_190 = new QFrame(amrou_center);
        line_190->setObjectName(QStringLiteral("line_190"));
        line_190->setGeometry(QRect(70, 580, 1131, 2));
        line_190->setFrameShape(QFrame::HLine);
        line_190->setFrameShadow(QFrame::Sunken);
        line_189 = new QFrame(amrou_center);
        line_189->setObjectName(QStringLiteral("line_189"));
        line_189->setGeometry(QRect(70, 610, 1131, 2));
        line_189->setFrameShape(QFrame::HLine);
        line_189->setFrameShadow(QFrame::Sunken);
        line_193 = new QFrame(amrou_center);
        line_193->setObjectName(QStringLiteral("line_193"));
        line_193->setGeometry(QRect(80, 110, 1131, 2));
        line_193->setFrameShape(QFrame::HLine);
        line_193->setFrameShadow(QFrame::Sunken);
        widget_18 = new QWidget(amrou_center);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        widget_18->setGeometry(QRect(120, 160, 551, 381));
        widget_18->setStyleSheet(QStringLiteral("background: transparent;"));
        verticalLayout_37 = new QVBoxLayout(widget_18);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        amrou6_5 = new QPushButton(widget_18);
        amrou6_5->setObjectName(QStringLiteral("amrou6_5"));
        sizePolicy6.setHeightForWidth(amrou6_5->sizePolicy().hasHeightForWidth());
        amrou6_5->setSizePolicy(sizePolicy6);
        amrou6_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;\n"
""));

        verticalLayout_37->addWidget(amrou6_5);

        horizontalLayout_67 = new QHBoxLayout();
        horizontalLayout_67->setObjectName(QStringLiteral("horizontalLayout_67"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_67->addItem(horizontalSpacer_5);

        amrou_filter_reset_5 = new QPushButton(widget_18);
        amrou_filter_reset_5->setObjectName(QStringLiteral("amrou_filter_reset_5"));
        amrou_filter_reset_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px 10px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));

        horizontalLayout_67->addWidget(amrou_filter_reset_5);

        amrou_secteur_filter_5 = new QComboBox(widget_18);
        amrou_secteur_filter_5->setObjectName(QStringLiteral("amrou_secteur_filter_5"));
        amrou_secteur_filter_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 2px 5px;\n"
"color: black;\n"
"font-weight: bold;\n"
"border: none;\n"
"letter-spacing: 0.1px;"));

        horizontalLayout_67->addWidget(amrou_secteur_filter_5);

        amrou_filter_go_5 = new QPushButton(widget_18);
        amrou_filter_go_5->setObjectName(QStringLiteral("amrou_filter_go_5"));
        amrou_filter_go_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px 10px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));

        horizontalLayout_67->addWidget(amrou_filter_go_5);


        verticalLayout_37->addLayout(horizontalLayout_67);

        amrou_outputtable_13 = new QTableView(widget_18);
        amrou_outputtable_13->setObjectName(QStringLiteral("amrou_outputtable_13"));
        amrou_outputtable_13->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    font-size: 12pt;\n"
"    border-style: none;\n"
"    /*border-bottom: 1px solid #fffff8;\n"
"    border-right: 1px solid #fffff8; */\n"
"	color: #134e4a;\n"
"	letter-spacing: 0.2px\n"
"	text-align: center;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal\n"
"{\n"
"    border-top: 1px solid #fffff8;\n"
"}\n"
"\n"
"QHeaderView::section:vertical\n"
"{\n"
"    border-left: 1px solid #fffff8;\n"
"}"));

        verticalLayout_37->addWidget(amrou_outputtable_13);

        horizontalLayout_68 = new QHBoxLayout();
        horizontalLayout_68->setObjectName(QStringLiteral("horizontalLayout_68"));
        amrou7_5 = new QPushButton(widget_18);
        amrou7_5->setObjectName(QStringLiteral("amrou7_5"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(amrou7_5->sizePolicy().hasHeightForWidth());
        amrou7_5->setSizePolicy(sizePolicy7);
        amrou7_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));

        horizontalLayout_68->addWidget(amrou7_5);

        amrou8_5 = new QPushButton(widget_18);
        amrou8_5->setObjectName(QStringLiteral("amrou8_5"));
        sizePolicy7.setHeightForWidth(amrou8_5->sizePolicy().hasHeightForWidth());
        amrou8_5->setSizePolicy(sizePolicy7);
        amrou8_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));

        horizontalLayout_68->addWidget(amrou8_5);


        verticalLayout_37->addLayout(horizontalLayout_68);

        label_95 = new QLabel(amrou_center);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(120, 60, 291, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_95->setFont(font3);
        label_95->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        stackedWidget->addWidget(amrou_center);
        amrou_ajouter = new QWidget();
        amrou_ajouter->setObjectName(QStringLiteral("amrou_ajouter"));
        line_201 = new QFrame(amrou_ajouter);
        line_201->setObjectName(QStringLiteral("line_201"));
        line_201->setGeometry(QRect(100, 580, 1130, 2));
        line_201->setFrameShape(QFrame::HLine);
        line_201->setFrameShadow(QFrame::Sunken);
        line_196 = new QFrame(amrou_ajouter);
        line_196->setObjectName(QStringLiteral("line_196"));
        line_196->setGeometry(QRect(0, 0, 101, 631));
        line_196->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_196->setFrameShape(QFrame::VLine);
        line_196->setFrameShadow(QFrame::Sunken);
        line_199 = new QFrame(amrou_ajouter);
        line_199->setObjectName(QStringLiteral("line_199"));
        line_199->setGeometry(QRect(90, 620, 1131, 2));
        line_199->setFrameShape(QFrame::HLine);
        line_199->setFrameShadow(QFrame::Sunken);
        label_101 = new QLabel(amrou_ajouter);
        label_101->setObjectName(QStringLiteral("label_101"));
        label_101->setGeometry(QRect(130, 70, 291, 31));
        label_101->setFont(font3);
        label_101->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        widget_19 = new QWidget(amrou_ajouter);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        widget_19->setGeometry(QRect(400, 170, 431, 371));
        widget_19->setStyleSheet(QLatin1String("margin: 2px;\n"
"border: 1px solid white;"));
        verticalLayout_38 = new QVBoxLayout(widget_19);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        horizontalLayout_69 = new QHBoxLayout();
        horizontalLayout_69->setObjectName(QStringLiteral("horizontalLayout_69"));
        label_96 = new QLabel(widget_19);
        label_96->setObjectName(QStringLiteral("label_96"));
        QFont font4;
        font4.setPointSize(11);
        label_96->setFont(font4);
        label_96->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_69->addWidget(label_96);

        amrou_id_9 = new QLineEdit(widget_19);
        amrou_id_9->setObjectName(QStringLiteral("amrou_id_9"));
        amrou_id_9->setMinimumSize(QSize(0, 30));
        amrou_id_9->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));
        amrou_id_9->setMaxLength(4);

        horizontalLayout_69->addWidget(amrou_id_9);


        verticalLayout_38->addLayout(horizontalLayout_69);

        horizontalLayout_70 = new QHBoxLayout();
        horizontalLayout_70->setObjectName(QStringLiteral("horizontalLayout_70"));
        label_97 = new QLabel(widget_19);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setFont(font4);
        label_97->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_70->addWidget(label_97);

        amrou_nom_9 = new QLineEdit(widget_19);
        amrou_nom_9->setObjectName(QStringLiteral("amrou_nom_9"));
        amrou_nom_9->setMinimumSize(QSize(0, 30));
        amrou_nom_9->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));
        amrou_nom_9->setMaxLength(25);

        horizontalLayout_70->addWidget(amrou_nom_9);


        verticalLayout_38->addLayout(horizontalLayout_70);

        horizontalLayout_71 = new QHBoxLayout();
        horizontalLayout_71->setObjectName(QStringLiteral("horizontalLayout_71"));
        label_98 = new QLabel(widget_19);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setFont(font4);
        label_98->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_71->addWidget(label_98);

        amrou_secteur_9 = new QComboBox(widget_19);
        amrou_secteur_9->setObjectName(QStringLiteral("amrou_secteur_9"));
        amrou_secteur_9->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_71->addWidget(amrou_secteur_9);


        verticalLayout_38->addLayout(horizontalLayout_71);

        horizontalLayout_72 = new QHBoxLayout();
        horizontalLayout_72->setObjectName(QStringLiteral("horizontalLayout_72"));
        label_99 = new QLabel(widget_19);
        label_99->setObjectName(QStringLiteral("label_99"));
        label_99->setFont(font4);
        label_99->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_72->addWidget(label_99);

        amrou_email_9 = new QLineEdit(widget_19);
        amrou_email_9->setObjectName(QStringLiteral("amrou_email_9"));
        amrou_email_9->setMinimumSize(QSize(0, 30));
        amrou_email_9->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_72->addWidget(amrou_email_9);


        verticalLayout_38->addLayout(horizontalLayout_72);

        horizontalLayout_73 = new QHBoxLayout();
        horizontalLayout_73->setObjectName(QStringLiteral("horizontalLayout_73"));
        label_100 = new QLabel(widget_19);
        label_100->setObjectName(QStringLiteral("label_100"));
        label_100->setFont(font4);
        label_100->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_73->addWidget(label_100);

        amrou_description_9 = new QTextEdit(widget_19);
        amrou_description_9->setObjectName(QStringLiteral("amrou_description_9"));
        amrou_description_9->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_73->addWidget(amrou_description_9);


        verticalLayout_38->addLayout(horizontalLayout_73);

        horizontalLayout_74 = new QHBoxLayout();
        horizontalLayout_74->setObjectName(QStringLiteral("horizontalLayout_74"));
        amrou11_9 = new QPushButton(widget_19);
        amrou11_9->setObjectName(QStringLiteral("amrou11_9"));
        amrou11_9->setStyleSheet(QLatin1String("background: white;\n"
"color: black;"));

        horizontalLayout_74->addWidget(amrou11_9);

        amrou10_9 = new QPushButton(widget_19);
        amrou10_9->setObjectName(QStringLiteral("amrou10_9"));
        amrou10_9->setStyleSheet(QLatin1String("background: white;\n"
"color: black;"));

        horizontalLayout_74->addWidget(amrou10_9);


        verticalLayout_38->addLayout(horizontalLayout_74);

        line_195 = new QFrame(amrou_ajouter);
        line_195->setObjectName(QStringLiteral("line_195"));
        line_195->setGeometry(QRect(90, 610, 1131, 2));
        line_195->setFrameShape(QFrame::HLine);
        line_195->setFrameShadow(QFrame::Sunken);
        logo2_26 = new QPushButton(amrou_ajouter);
        logo2_26->setObjectName(QStringLiteral("logo2_26"));
        logo2_26->setGeometry(QRect(20, 20, 61, 51));
        logo2_26->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        line_198 = new QFrame(amrou_ajouter);
        line_198->setObjectName(QStringLiteral("line_198"));
        line_198->setGeometry(QRect(100, 120, 1131, 2));
        line_198->setFrameShape(QFrame::HLine);
        line_198->setFrameShadow(QFrame::Sunken);
        line_200 = new QFrame(amrou_ajouter);
        line_200->setObjectName(QStringLiteral("line_200"));
        line_200->setGeometry(QRect(90, 600, 1131, 2));
        line_200->setFrameShape(QFrame::HLine);
        line_200->setFrameShadow(QFrame::Sunken);
        amrou4_26 = new QPushButton(amrou_ajouter);
        amrou4_26->setObjectName(QStringLiteral("amrou4_26"));
        amrou4_26->setGeometry(QRect(120, 30, 93, 28));
        sizePolicy6.setHeightForWidth(amrou4_26->sizePolicy().hasHeightForWidth());
        amrou4_26->setSizePolicy(sizePolicy6);
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        amrou4_26->setFont(font5);
        amrou4_26->setCursor(QCursor(Qt::PointingHandCursor));
        amrou4_26->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        line_197 = new QFrame(amrou_ajouter);
        line_197->setObjectName(QStringLiteral("line_197"));
        line_197->setGeometry(QRect(90, 590, 1131, 2));
        line_197->setFrameShape(QFrame::HLine);
        line_197->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(amrou_ajouter);
        amrou_generate = new QWidget();
        amrou_generate->setObjectName(QStringLiteral("amrou_generate"));
        label_102 = new QLabel(amrou_generate);
        label_102->setObjectName(QStringLiteral("label_102"));
        label_102->setGeometry(QRect(130, 70, 311, 31));
        label_102->setFont(font3);
        label_102->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        line_202 = new QFrame(amrou_generate);
        line_202->setObjectName(QStringLiteral("line_202"));
        line_202->setGeometry(QRect(90, 580, 1130, 2));
        line_202->setFrameShape(QFrame::HLine);
        line_202->setFrameShadow(QFrame::Sunken);
        line_203 = new QFrame(amrou_generate);
        line_203->setObjectName(QStringLiteral("line_203"));
        line_203->setGeometry(QRect(80, 620, 1131, 2));
        line_203->setFrameShape(QFrame::HLine);
        line_203->setFrameShadow(QFrame::Sunken);
        line_204 = new QFrame(amrou_generate);
        line_204->setObjectName(QStringLiteral("line_204"));
        line_204->setGeometry(QRect(90, 120, 1131, 2));
        line_204->setFrameShape(QFrame::HLine);
        line_204->setFrameShadow(QFrame::Sunken);
        amrou4_27 = new QPushButton(amrou_generate);
        amrou4_27->setObjectName(QStringLiteral("amrou4_27"));
        amrou4_27->setGeometry(QRect(120, 30, 93, 28));
        sizePolicy6.setHeightForWidth(amrou4_27->sizePolicy().hasHeightForWidth());
        amrou4_27->setSizePolicy(sizePolicy6);
        amrou4_27->setCursor(QCursor(Qt::PointingHandCursor));
        amrou4_27->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        logo2_27 = new QPushButton(amrou_generate);
        logo2_27->setObjectName(QStringLiteral("logo2_27"));
        logo2_27->setGeometry(QRect(20, 20, 61, 51));
        logo2_27->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        line_205 = new QFrame(amrou_generate);
        line_205->setObjectName(QStringLiteral("line_205"));
        line_205->setGeometry(QRect(80, 600, 1131, 2));
        line_205->setFrameShape(QFrame::HLine);
        line_205->setFrameShadow(QFrame::Sunken);
        line_206 = new QFrame(amrou_generate);
        line_206->setObjectName(QStringLiteral("line_206"));
        line_206->setGeometry(QRect(80, 590, 1131, 2));
        line_206->setFrameShape(QFrame::HLine);
        line_206->setFrameShadow(QFrame::Sunken);
        layoutWidget_16 = new QWidget(amrou_generate);
        layoutWidget_16->setObjectName(QStringLiteral("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(350, 180, 501, 301));
        verticalLayout_39 = new QVBoxLayout(layoutWidget_16);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        amrou_outputtable_14 = new QTableView(layoutWidget_16);
        amrou_outputtable_14->setObjectName(QStringLiteral("amrou_outputtable_14"));
        amrou_outputtable_14->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"color: #115e59;\n"
"font-weight: bold;"));

        verticalLayout_39->addWidget(amrou_outputtable_14);

        amrou12_5 = new QPushButton(layoutWidget_16);
        amrou12_5->setObjectName(QStringLiteral("amrou12_5"));
        amrou12_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));

        verticalLayout_39->addWidget(amrou12_5);

        line_207 = new QFrame(amrou_generate);
        line_207->setObjectName(QStringLiteral("line_207"));
        line_207->setGeometry(QRect(0, 0, 101, 631));
        line_207->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_207->setFrameShape(QFrame::VLine);
        line_207->setFrameShadow(QFrame::Sunken);
        line_208 = new QFrame(amrou_generate);
        line_208->setObjectName(QStringLiteral("line_208"));
        line_208->setGeometry(QRect(80, 610, 1131, 2));
        line_208->setFrameShape(QFrame::HLine);
        line_208->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(amrou_generate);
        amrou_contrat = new QWidget();
        amrou_contrat->setObjectName(QStringLiteral("amrou_contrat"));
        amrou_company_contrat = new QLineEdit(amrou_contrat);
        amrou_company_contrat->setObjectName(QStringLiteral("amrou_company_contrat"));
        amrou_company_contrat->setEnabled(false);
        amrou_company_contrat->setGeometry(QRect(160, 160, 113, 22));
        amrou_company_contrat->setStyleSheet(QLatin1String("color: white;\n"
"border: none"));
        amrou_inverse_content = new QPushButton(amrou_contrat);
        amrou_inverse_content->setObjectName(QStringLiteral("amrou_inverse_content"));
        amrou_inverse_content->setGeometry(QRect(580, 270, 161, 28));
        sizePolicy7.setHeightForWidth(amrou_inverse_content->sizePolicy().hasHeightForWidth());
        amrou_inverse_content->setSizePolicy(sizePolicy7);
        amrou_inverse_content->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));
        amrou_contenu_contrat = new QTextEdit(amrou_contrat);
        amrou_contenu_contrat->setObjectName(QStringLiteral("amrou_contenu_contrat"));
        amrou_contenu_contrat->setGeometry(QRect(160, 310, 481, 211));
        label_16aaa = new QLabel(amrou_contrat);
        label_16aaa->setObjectName(QStringLiteral("label_16aaa"));
        label_16aaa->setGeometry(QRect(130, 70, 111, 31));
        label_16aaa->setFont(font3);
        label_16aaa->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        label_5adsqdq = new QLabel(amrou_contrat);
        label_5adsqdq->setObjectName(QStringLiteral("label_5adsqdq"));
        label_5adsqdq->setGeometry(QRect(160, 530, 56, 16));
        label_5adsqdq->setStyleSheet(QLatin1String("color: white;\n"
"font-size: bold;"));
        amrou_language_translate = new QComboBox(amrou_contrat);
        amrou_language_translate->setObjectName(QStringLiteral("amrou_language_translate"));
        amrou_language_translate->setGeometry(QRect(1110, 150, 73, 22));
        amrou_language_translate->setStyleSheet(QStringLiteral("color: white;"));
        amrou_header_contrat = new QLineEdit(amrou_contrat);
        amrou_header_contrat->setObjectName(QStringLiteral("amrou_header_contrat"));
        amrou_header_contrat->setEnabled(false);
        amrou_header_contrat->setGeometry(QRect(270, 210, 271, 31));
        QFont font6;
        font6.setPointSize(14);
        amrou_header_contrat->setFont(font6);
        amrou_header_contrat->setStyleSheet(QLatin1String("color: white;\n"
"border: none"));
        line_38gfdhjje = new QFrame(amrou_contrat);
        line_38gfdhjje->setObjectName(QStringLiteral("line_38gfdhjje"));
        line_38gfdhjje->setGeometry(QRect(80, 600, 1131, 2));
        line_38gfdhjje->setFrameShape(QFrame::HLine);
        line_38gfdhjje->setFrameShadow(QFrame::Sunken);
        label_7fdsfsfs = new QLabel(amrou_contrat);
        label_7fdsfsfs->setObjectName(QStringLiteral("label_7fdsfsfs"));
        label_7fdsfsfs->setGeometry(QRect(1010, 150, 81, 20));
        label_7fdsfsfs->setStyleSheet(QStringLiteral("color: white;"));
        label_6fqfqfq = new QLabel(amrou_contrat);
        label_6fqfqfq->setObjectName(QStringLiteral("label_6fqfqfq"));
        label_6fqfqfq->setGeometry(QRect(690, 530, 56, 16));
        label_6fqfqfq->setStyleSheet(QLatin1String("color: white;\n"
"font-size: bold;"));
        amrou_date_contrat = new QLineEdit(amrou_contrat);
        amrou_date_contrat->setObjectName(QStringLiteral("amrou_date_contrat"));
        amrou_date_contrat->setEnabled(false);
        amrou_date_contrat->setGeometry(QRect(510, 180, 141, 22));
        amrou_date_contrat->setStyleSheet(QLatin1String("border: none;\n"
"color: white;"));
        line_35zzzzzzaaa = new QFrame(amrou_contrat);
        line_35zzzzzzaaa->setObjectName(QStringLiteral("line_35zzzzzzaaa"));
        line_35zzzzzzaaa->setGeometry(QRect(90, 580, 1130, 2));
        line_35zzzzzzaaa->setFrameShape(QFrame::HLine);
        line_35zzzzzzaaa->setFrameShadow(QFrame::Sunken);
        line_36wdxwf = new QFrame(amrou_contrat);
        line_36wdxwf->setObjectName(QStringLiteral("line_36wdxwf"));
        line_36wdxwf->setGeometry(QRect(80, 610, 1131, 2));
        line_36wdxwf->setFrameShape(QFrame::HLine);
        line_36wdxwf->setFrameShadow(QFrame::Sunken);
        line_39wouuuuh = new QFrame(amrou_contrat);
        line_39wouuuuh->setObjectName(QStringLiteral("line_39wouuuuh"));
        line_39wouuuuh->setGeometry(QRect(90, 120, 1131, 2));
        line_39wouuuuh->setFrameShape(QFrame::HLine);
        line_39wouuuuh->setFrameShadow(QFrame::Sunken);
        amrou_partner_contrat = new QLineEdit(amrou_contrat);
        amrou_partner_contrat->setObjectName(QStringLiteral("amrou_partner_contrat"));
        amrou_partner_contrat->setEnabled(false);
        amrou_partner_contrat->setGeometry(QRect(160, 260, 141, 22));
        amrou_partner_contrat->setStyleSheet(QLatin1String("color: white;\n"
"border: none"));
        line_40leeeaaad = new QFrame(amrou_contrat);
        line_40leeeaaad->setObjectName(QStringLiteral("line_40leeeaaad"));
        line_40leeeaaad->setGeometry(QRect(80, 620, 1131, 2));
        line_40leeeaaad->setFrameShape(QFrame::HLine);
        line_40leeeaaad->setFrameShadow(QFrame::Sunken);
        amrou4_28 = new QPushButton(amrou_contrat);
        amrou4_28->setObjectName(QStringLiteral("amrou4_28"));
        amrou4_28->setGeometry(QRect(120, 30, 93, 28));
        sizePolicy6.setHeightForWidth(amrou4_28->sizePolicy().hasHeightForWidth());
        amrou4_28->setSizePolicy(sizePolicy6);
        amrou4_28->setCursor(QCursor(Qt::PointingHandCursor));
        amrou4_28->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        amrou_contenu_translated = new QTextEdit(amrou_contrat);
        amrou_contenu_translated->setObjectName(QStringLiteral("amrou_contenu_translated"));
        amrou_contenu_translated->setEnabled(false);
        amrou_contenu_translated->setGeometry(QRect(690, 310, 481, 211));
        line_41mouchnormal = new QFrame(amrou_contrat);
        line_41mouchnormal->setObjectName(QStringLiteral("line_41mouchnormal"));
        line_41mouchnormal->setGeometry(QRect(0, 0, 101, 631));
        line_41mouchnormal->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_41mouchnormal->setFrameShape(QFrame::VLine);
        line_41mouchnormal->setFrameShadow(QFrame::Sunken);
        line_37ersfsfs = new QFrame(amrou_contrat);
        line_37ersfsfs->setObjectName(QStringLiteral("line_37ersfsfs"));
        line_37ersfsfs->setGeometry(QRect(80, 590, 1131, 2));
        line_37ersfsfs->setFrameShape(QFrame::HLine);
        line_37ersfsfs->setFrameShadow(QFrame::Sunken);
        amrou_download_pdf = new QPushButton(amrou_contrat);
        amrou_download_pdf->setObjectName(QStringLiteral("amrou_download_pdf"));
        amrou_download_pdf->setGeometry(QRect(850, 180, 161, 28));
        sizePolicy7.setHeightForWidth(amrou_download_pdf->sizePolicy().hasHeightForWidth());
        amrou_download_pdf->setSizePolicy(sizePolicy7);
        amrou_download_pdf->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));
        logo2_28 = new QPushButton(amrou_contrat);
        logo2_28->setObjectName(QStringLiteral("logo2_28"));
        logo2_28->setGeometry(QRect(20, 20, 61, 51));
        logo2_28->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        amrou_translates = new QPushButton(amrou_contrat);
        amrou_translates->setObjectName(QStringLiteral("amrou_translates"));
        amrou_translates->setGeometry(QRect(1020, 180, 161, 28));
        sizePolicy7.setHeightForWidth(amrou_translates->sizePolicy().hasHeightForWidth());
        amrou_translates->setSizePolicy(sizePolicy7);
        amrou_translates->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));
        amrou_lieu_contrat = new QLineEdit(amrou_contrat);
        amrou_lieu_contrat->setObjectName(QStringLiteral("amrou_lieu_contrat"));
        amrou_lieu_contrat->setEnabled(false);
        amrou_lieu_contrat->setGeometry(QRect(510, 150, 113, 22));
        amrou_lieu_contrat->setStyleSheet(QLatin1String("color: white;\n"
"border: none"));
        stackedWidget->addWidget(amrou_contrat);
        amrou_rec_select = new QWidget();
        amrou_rec_select->setObjectName(QStringLiteral("amrou_rec_select"));
        line_44dffffdd = new QFrame(amrou_rec_select);
        line_44dffffdd->setObjectName(QStringLiteral("line_44dffffdd"));
        line_44dffffdd->setGeometry(QRect(80, 590, 1131, 2));
        line_44dffffdd->setFrameShape(QFrame::HLine);
        line_44dffffdd->setFrameShadow(QFrame::Sunken);
        layoutWidget_17 = new QWidget(amrou_rec_select);
        layoutWidget_17->setObjectName(QStringLiteral("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(350, 180, 501, 301));
        verticalLayout_40 = new QVBoxLayout(layoutWidget_17);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        amrou_outputtable_15 = new QTableView(layoutWidget_17);
        amrou_outputtable_15->setObjectName(QStringLiteral("amrou_outputtable_15"));
        amrou_outputtable_15->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"color: #115e59;\n"
"font-weight: bold;"));

        verticalLayout_40->addWidget(amrou_outputtable_15);

        amrou14_5 = new QPushButton(layoutWidget_17);
        amrou14_5->setObjectName(QStringLiteral("amrou14_5"));
        amrou14_5->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));

        verticalLayout_40->addWidget(amrou14_5);

        line_47efdsfww = new QFrame(amrou_rec_select);
        line_47efdsfww->setObjectName(QStringLiteral("line_47efdsfww"));
        line_47efdsfww->setGeometry(QRect(80, 620, 1131, 2));
        line_47efdsfww->setFrameShape(QFrame::HLine);
        line_47efdsfww->setFrameShadow(QFrame::Sunken);
        logo2_29 = new QPushButton(amrou_rec_select);
        logo2_29->setObjectName(QStringLiteral("logo2_29"));
        logo2_29->setGeometry(QRect(20, 20, 61, 51));
        logo2_29->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        line_48ggggjjjj = new QFrame(amrou_rec_select);
        line_48ggggjjjj->setObjectName(QStringLiteral("line_48ggggjjjj"));
        line_48ggggjjjj->setGeometry(QRect(0, 0, 101, 631));
        line_48ggggjjjj->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_48ggggjjjj->setFrameShape(QFrame::VLine);
        line_48ggggjjjj->setFrameShadow(QFrame::Sunken);
        line_46wcwcf = new QFrame(amrou_rec_select);
        line_46wcwcf->setObjectName(QStringLiteral("line_46wcwcf"));
        line_46wcwcf->setGeometry(QRect(90, 120, 1131, 2));
        line_46wcwcf->setFrameShape(QFrame::HLine);
        line_46wcwcf->setFrameShadow(QFrame::Sunken);
        amrou4_29 = new QPushButton(amrou_rec_select);
        amrou4_29->setObjectName(QStringLiteral("amrou4_29"));
        amrou4_29->setGeometry(QRect(120, 30, 93, 28));
        sizePolicy6.setHeightForWidth(amrou4_29->sizePolicy().hasHeightForWidth());
        amrou4_29->setSizePolicy(sizePolicy6);
        amrou4_29->setCursor(QCursor(Qt::PointingHandCursor));
        amrou4_29->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        line_45vvdx = new QFrame(amrou_rec_select);
        line_45vvdx->setObjectName(QStringLiteral("line_45vvdx"));
        line_45vvdx->setGeometry(QRect(80, 600, 1131, 2));
        line_45vvdx->setFrameShape(QFrame::HLine);
        line_45vvdx->setFrameShadow(QFrame::Sunken);
        line_43efzfdsfsfs = new QFrame(amrou_rec_select);
        line_43efzfdsfsfs->setObjectName(QStringLiteral("line_43efzfdsfsfs"));
        line_43efzfdsfsfs->setGeometry(QRect(80, 610, 1131, 2));
        line_43efzfdsfsfs->setFrameShape(QFrame::HLine);
        line_43efzfdsfsfs->setFrameShadow(QFrame::Sunken);
        label_17grave = new QLabel(amrou_rec_select);
        label_17grave->setObjectName(QStringLiteral("label_17grave"));
        label_17grave->setGeometry(QRect(130, 70, 621, 31));
        label_17grave->setFont(font3);
        label_17grave->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        label_8walah = new QLabel(amrou_rec_select);
        label_8walah->setObjectName(QStringLiteral("label_8walah"));
        label_8walah->setGeometry(QRect(130, 130, 251, 41));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        label_8walah->setFont(font7);
        label_8walah->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        line_42adsqdqdzaggg = new QFrame(amrou_rec_select);
        line_42adsqdqdzaggg->setObjectName(QStringLiteral("line_42adsqdqdzaggg"));
        line_42adsqdqdzaggg->setGeometry(QRect(90, 580, 1130, 2));
        line_42adsqdqdzaggg->setFrameShape(QFrame::HLine);
        line_42adsqdqdzaggg->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(amrou_rec_select);
        amrou_modifier = new QWidget();
        amrou_modifier->setObjectName(QStringLiteral("amrou_modifier"));
        line_54pf = new QFrame(amrou_modifier);
        line_54pf->setObjectName(QStringLiteral("line_54pf"));
        line_54pf->setGeometry(QRect(90, 610, 1131, 2));
        line_54pf->setFrameShape(QFrame::HLine);
        line_54pf->setFrameShadow(QFrame::Sunken);
        label_18ffffaaaaa = new QLabel(amrou_modifier);
        label_18ffffaaaaa->setObjectName(QStringLiteral("label_18ffffaaaaa"));
        label_18ffffaaaaa->setGeometry(QRect(130, 70, 291, 31));
        label_18ffffaaaaa->setFont(font3);
        label_18ffffaaaaa->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        line_49zaeasea = new QFrame(amrou_modifier);
        line_49zaeasea->setObjectName(QStringLiteral("line_49zaeasea"));
        line_49zaeasea->setGeometry(QRect(0, 0, 101, 631));
        line_49zaeasea->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        line_49zaeasea->setFrameShape(QFrame::VLine);
        line_49zaeasea->setFrameShadow(QFrame::Sunken);
        line_55fadit = new QFrame(amrou_modifier);
        line_55fadit->setObjectName(QStringLiteral("line_55fadit"));
        line_55fadit->setGeometry(QRect(90, 590, 1131, 2));
        line_55fadit->setFrameShape(QFrame::HLine);
        line_55fadit->setFrameShadow(QFrame::Sunken);
        line_51whateverrrrr = new QFrame(amrou_modifier);
        line_51whateverrrrr->setObjectName(QStringLiteral("line_51whateverrrrr"));
        line_51whateverrrrr->setGeometry(QRect(90, 600, 1131, 2));
        line_51whateverrrrr->setFrameShape(QFrame::HLine);
        line_51whateverrrrr->setFrameShadow(QFrame::Sunken);
        line_53ouuh = new QFrame(amrou_modifier);
        line_53ouuh->setObjectName(QStringLiteral("line_53ouuh"));
        line_53ouuh->setGeometry(QRect(100, 580, 1130, 2));
        line_53ouuh->setFrameShape(QFrame::HLine);
        line_53ouuh->setFrameShadow(QFrame::Sunken);
        logo2_30 = new QPushButton(amrou_modifier);
        logo2_30->setObjectName(QStringLiteral("logo2_30"));
        logo2_30->setGeometry(QRect(20, 20, 61, 51));
        logo2_30->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        widget_20 = new QWidget(amrou_modifier);
        widget_20->setObjectName(QStringLiteral("widget_20"));
        widget_20->setGeometry(QRect(400, 170, 431, 371));
        widget_20->setStyleSheet(QLatin1String("margin: 2px;\n"
"border: 1px solid white;"));
        verticalLayout_41 = new QVBoxLayout(widget_20);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        horizontalLayout_75 = new QHBoxLayout();
        horizontalLayout_75->setObjectName(QStringLiteral("horizontalLayout_75"));
        label_19yeee = new QLabel(widget_20);
        label_19yeee->setObjectName(QStringLiteral("label_19yeee"));
        label_19yeee->setFont(font4);
        label_19yeee->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_75->addWidget(label_19yeee);

        amrou_id_10 = new QLineEdit(widget_20);
        amrou_id_10->setObjectName(QStringLiteral("amrou_id_10"));
        amrou_id_10->setEnabled(false);
        amrou_id_10->setMinimumSize(QSize(0, 30));
        amrou_id_10->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_75->addWidget(amrou_id_10);


        verticalLayout_41->addLayout(horizontalLayout_75);

        horizontalLayout_76 = new QHBoxLayout();
        horizontalLayout_76->setObjectName(QStringLiteral("horizontalLayout_76"));
        label_20eeeey = new QLabel(widget_20);
        label_20eeeey->setObjectName(QStringLiteral("label_20eeeey"));
        label_20eeeey->setFont(font4);
        label_20eeeey->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_76->addWidget(label_20eeeey);

        amrou_nom_10 = new QLineEdit(widget_20);
        amrou_nom_10->setObjectName(QStringLiteral("amrou_nom_10"));
        amrou_nom_10->setMinimumSize(QSize(0, 30));
        amrou_nom_10->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_76->addWidget(amrou_nom_10);


        verticalLayout_41->addLayout(horizontalLayout_76);

        horizontalLayout_77 = new QHBoxLayout();
        horizontalLayout_77->setObjectName(QStringLiteral("horizontalLayout_77"));
        label_21lala = new QLabel(widget_20);
        label_21lala->setObjectName(QStringLiteral("label_21lala"));
        label_21lala->setFont(font4);
        label_21lala->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_77->addWidget(label_21lala);

        amrou_secteur_10 = new QComboBox(widget_20);
        amrou_secteur_10->setObjectName(QStringLiteral("amrou_secteur_10"));
        amrou_secteur_10->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_77->addWidget(amrou_secteur_10);


        verticalLayout_41->addLayout(horizontalLayout_77);

        horizontalLayout_78 = new QHBoxLayout();
        horizontalLayout_78->setObjectName(QStringLiteral("horizontalLayout_78"));
        label_22bom = new QLabel(widget_20);
        label_22bom->setObjectName(QStringLiteral("label_22bom"));
        label_22bom->setFont(font4);
        label_22bom->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_78->addWidget(label_22bom);

        amrou_email_10 = new QLineEdit(widget_20);
        amrou_email_10->setObjectName(QStringLiteral("amrou_email_10"));
        amrou_email_10->setMinimumSize(QSize(0, 30));
        amrou_email_10->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_78->addWidget(amrou_email_10);


        verticalLayout_41->addLayout(horizontalLayout_78);

        horizontalLayout_79 = new QHBoxLayout();
        horizontalLayout_79->setObjectName(QStringLiteral("horizontalLayout_79"));
        label_24bombom = new QLabel(widget_20);
        label_24bombom->setObjectName(QStringLiteral("label_24bombom"));
        label_24bombom->setFont(font4);
        label_24bombom->setStyleSheet(QLatin1String("color: white;\n"
"border: none;"));

        horizontalLayout_79->addWidget(label_24bombom);

        amrou_description_10 = new QTextEdit(widget_20);
        amrou_description_10->setObjectName(QStringLiteral("amrou_description_10"));
        amrou_description_10->setStyleSheet(QLatin1String("border: 1px solid #134e4a;\n"
"color: white;"));

        horizontalLayout_79->addWidget(amrou_description_10);


        verticalLayout_41->addLayout(horizontalLayout_79);

        horizontalLayout_80 = new QHBoxLayout();
        horizontalLayout_80->setObjectName(QStringLiteral("horizontalLayout_80"));
        amrou11_10 = new QPushButton(widget_20);
        amrou11_10->setObjectName(QStringLiteral("amrou11_10"));
        amrou11_10->setStyleSheet(QLatin1String("background: white;\n"
"color: black;"));

        horizontalLayout_80->addWidget(amrou11_10);

        amrou10_10 = new QPushButton(widget_20);
        amrou10_10->setObjectName(QStringLiteral("amrou10_10"));
        amrou10_10->setStyleSheet(QLatin1String("background: white;\n"
"color: black;"));

        horizontalLayout_80->addWidget(amrou10_10);


        verticalLayout_41->addLayout(horizontalLayout_80);

        line_52olala = new QFrame(amrou_modifier);
        line_52olala->setObjectName(QStringLiteral("line_52olala"));
        line_52olala->setGeometry(QRect(90, 620, 1131, 2));
        line_52olala->setFrameShape(QFrame::HLine);
        line_52olala->setFrameShadow(QFrame::Sunken);
        line_50random = new QFrame(amrou_modifier);
        line_50random->setObjectName(QStringLiteral("line_50random"));
        line_50random->setGeometry(QRect(100, 120, 1131, 2));
        line_50random->setFrameShape(QFrame::HLine);
        line_50random->setFrameShadow(QFrame::Sunken);
        amrou4_30 = new QPushButton(amrou_modifier);
        amrou4_30->setObjectName(QStringLiteral("amrou4_30"));
        amrou4_30->setGeometry(QRect(120, 30, 93, 28));
        sizePolicy6.setHeightForWidth(amrou4_30->sizePolicy().hasHeightForWidth());
        amrou4_30->setSizePolicy(sizePolicy6);
        amrou4_30->setFont(font5);
        amrou4_30->setCursor(QCursor(Qt::PointingHandCursor));
        amrou4_30->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        stackedWidget->addWidget(amrou_modifier);
        amrou_resultat = new QWidget();
        amrou_resultat->setObjectName(QStringLiteral("amrou_resultat"));
        amrou_recommend_result = new QLabel(amrou_resultat);
        amrou_recommend_result->setObjectName(QStringLiteral("amrou_recommend_result"));
        amrou_recommend_result->setGeometry(QRect(120, 130, 531, 31));
        QFont font8;
        font8.setPointSize(10);
        amrou_recommend_result->setFont(font8);
        amrou_recommend_result->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        amrou5_10 = new QPushButton(amrou_resultat);
        amrou5_10->setObjectName(QStringLiteral("amrou5_10"));
        amrou5_10->setGeometry(QRect(120, 30, 65, 20));
        sizePolicy6.setHeightForWidth(amrou5_10->sizePolicy().hasHeightForWidth());
        amrou5_10->setSizePolicy(sizePolicy6);
        amrou5_10->setCursor(QCursor(Qt::PointingHandCursor));
        amrou5_10->setStyleSheet(QLatin1String("color: #dc2626;\n"
"font-weight: bold;\n"
"background: transparent;"));
        amrou_contact_email = new QPushButton(amrou_resultat);
        amrou_contact_email->setObjectName(QStringLiteral("amrou_contact_email"));
        amrou_contact_email->setGeometry(QRect(450, 520, 151, 28));
        amrou_contact_email->setStyleSheet(QLatin1String("background: white;\n"
"padding: 5px;\n"
"color: #115e59;\n"
"font-weight: bold;\n"
"letter-spacing: 0.1px;"));
        amrou_email_content = new QPlainTextEdit(amrou_resultat);
        amrou_email_content->setObjectName(QStringLiteral("amrou_email_content"));
        amrou_email_content->setGeometry(QRect(120, 330, 481, 171));
        amrou_email_content->setStyleSheet(QLatin1String("color: white;\n"
""));
        amrou_label13_13 = new QLabel(amrou_resultat);
        amrou_label13_13->setObjectName(QStringLiteral("amrou_label13_13"));
        amrou_label13_13->setGeometry(QRect(120, 280, 351, 31));
        QFont font9;
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setWeight(75);
        amrou_label13_13->setFont(font9);
        amrou_label13_13->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        amrou_line_21 = new QFrame(amrou_resultat);
        amrou_line_21->setObjectName(QStringLiteral("amrou_line_21"));
        amrou_line_21->setGeometry(QRect(70, 600, 1131, 2));
        amrou_line_21->setFrameShape(QFrame::HLine);
        amrou_line_21->setFrameShadow(QFrame::Sunken);
        line_16etesfs = new QFrame(amrou_resultat);
        line_16etesfs->setObjectName(QStringLiteral("line_16etesfs"));
        line_16etesfs->setGeometry(QRect(70, 610, 1131, 2));
        line_16etesfs->setFrameShape(QFrame::HLine);
        line_16etesfs->setFrameShadow(QFrame::Sunken);
        amrou_label13_14 = new QLabel(amrou_resultat);
        amrou_label13_14->setObjectName(QStringLiteral("amrou_label13_14"));
        amrou_label13_14->setGeometry(QRect(120, 60, 351, 31));
        amrou_label13_14->setFont(font3);
        amrou_label13_14->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        amrou_label13_15 = new QLabel(amrou_resultat);
        amrou_label13_15->setObjectName(QStringLiteral("amrou_label13_15"));
        amrou_label13_15->setGeometry(QRect(120, 190, 351, 31));
        amrou_label13_15->setFont(font9);
        amrou_label13_15->setStyleSheet(QLatin1String("letter-spacing: 0.2px;\n"
"Color: white;\n"
"background: transparent;"));
        line_17test = new QFrame(amrou_resultat);
        line_17test->setObjectName(QStringLiteral("line_17test"));
        line_17test->setGeometry(QRect(70, 590, 1131, 2));
        line_17test->setFrameShape(QFrame::HLine);
        line_17test->setFrameShadow(QFrame::Sunken);
        amrou_email_sujet = new QPlainTextEdit(amrou_resultat);
        amrou_email_sujet->setObjectName(QStringLiteral("amrou_email_sujet"));
        amrou_email_sujet->setGeometry(QRect(120, 240, 481, 31));
        amrou_email_sujet->setStyleSheet(QLatin1String("color: white;\n"
""));
        line_1amrou_9 = new QFrame(amrou_resultat);
        line_1amrou_9->setObjectName(QStringLiteral("line_1amrou_9"));
        line_1amrou_9->setGeometry(QRect(70, 580, 1131, 2));
        line_1amrou_9->setFrameShape(QFrame::HLine);
        line_1amrou_9->setFrameShadow(QFrame::Sunken);
        amrou_line_22 = new QFrame(amrou_resultat);
        amrou_line_22->setObjectName(QStringLiteral("amrou_line_22"));
        amrou_line_22->setGeometry(QRect(0, 0, 101, 631));
        amrou_line_22->setStyleSheet(QLatin1String("background: #111827;\n"
"border: none;\n"
""));
        amrou_line_22->setFrameShape(QFrame::VLine);
        amrou_line_22->setFrameShadow(QFrame::Sunken);
        line_18eeeeee = new QFrame(amrou_resultat);
        line_18eeeeee->setObjectName(QStringLiteral("line_18eeeeee"));
        line_18eeeeee->setGeometry(QRect(80, 570, 1130, 2));
        line_18eeeeee->setFrameShape(QFrame::HLine);
        line_18eeeeee->setFrameShadow(QFrame::Sunken);
        amrou_logo2_8 = new QPushButton(amrou_resultat);
        amrou_logo2_8->setObjectName(QStringLiteral("amrou_logo2_8"));
        amrou_logo2_8->setGeometry(QRect(20, 20, 61, 51));
        amrou_logo2_8->setStyleSheet(QLatin1String("image: url(:/new/prefix1/logo.png);\n"
"background: transparent;"));
        stackedWidget->addWidget(amrou_resultat);
        reclamations_list_5 = new QWidget();
        reclamations_list_5->setObjectName(QStringLiteral("reclamations_list_5"));
        msg_aff_5 = new QTextEdit(reclamations_list_5);
        msg_aff_5->setObjectName(QStringLiteral("msg_aff_5"));
        msg_aff_5->setGeometry(QRect(650, 170, 451, 481));
        msg_aff_5->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:white;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:20px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;"));
        msg_aff_5->setReadOnly(true);
        titre_aff_5 = new QLineEdit(reclamations_list_5);
        titre_aff_5->setObjectName(QStringLiteral("titre_aff_5"));
        titre_aff_5->setGeometry(QRect(650, 110, 451, 41));
        titre_aff_5->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:red;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:20px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;"));
        titre_aff_5->setReadOnly(true);
        reclamations_list_lab_5 = new QLabel(reclamations_list_5);
        reclamations_list_lab_5->setObjectName(QStringLiteral("reclamations_list_lab_5"));
        reclamations_list_lab_5->setGeometry(QRect(20, 60, 201, 41));
        reclamations_list_lab_5->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:red;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:20px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;\n"
"text-align:center;"));
        titres_rec_5 = new QListView(reclamations_list_5);
        titres_rec_5->setObjectName(QStringLiteral("titres_rec_5"));
        titres_rec_5->setGeometry(QRect(20, 100, 451, 531));
        titres_rec_5->setStyleSheet(QLatin1String("QListView {\n"
"        color:#b4b4b4;\n"
"        font-size: 25px;\n"
"        border: 1px solid #232323;;\n"
"        alternate-background-color: #232323;\n"
"       show-decoration-selected: 1;\n"
"        background: #111827;\n"
"    }\n"
"    QListView::item {\n"
"       border: 0px solid gray;\n"
"        background: #232323;\n"
"		font-size:20px;\n"
"color:white;\n"
"    }\n"
"   QListView::item:alternate {\n"
"        border: 0px solid gray;\n"
"        background: #232323;\n"
"    }\n"
"    QListView::item:selected {\n"
"        background: white;\n"
"color:red;\n"
"        border: 0px solid #6a6ea9;\n"
"    }\n"
"   QListView::item:selected:!active {\n"
"        border: 0px solid gray;\n"
"        background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 black, stop: 1 #232323);\n"
"    }\n"
"    QListView::item:selected:active {\n"
"       border: 0px solid gray;\n"
"        background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    "
                        "               stop: 0 black, stop: 1 #232323);\n"
"   }\n"
"    QListView::item:hover {\n"
"       border: 0px solid gray;\n"
"        background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 black, stop: 1 #232323);\n"
"    };"));
        retour_emp_9 = new QPushButton(reclamations_list_5);
        retour_emp_9->setObjectName(QStringLiteral("retour_emp_9"));
        retour_emp_9->setGeometry(QRect(10, 10, 161, 41));
        retour_emp_9->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        supp_msg_5 = new QPushButton(reclamations_list_5);
        supp_msg_5->setObjectName(QStringLiteral("supp_msg_5"));
        supp_msg_5->setGeometry(QRect(490, 300, 141, 51));
        supp_msg_5->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:red;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:23px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;"));
        stackedWidget->addWidget(reclamations_list_5);
        ajouter_emp_p_5 = new QWidget();
        ajouter_emp_p_5->setObjectName(QStringLiteral("ajouter_emp_p_5"));
        Retour_employe_19 = new QPushButton(ajouter_emp_p_5);
        Retour_employe_19->setObjectName(QStringLiteral("Retour_employe_19"));
        Retour_employe_19->setGeometry(QRect(0, 0, 311, 41));
        Retour_employe_19->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        QR_aff_5 = new QLabel(ajouter_emp_p_5);
        QR_aff_5->setObjectName(QStringLiteral("QR_aff_5"));
        QR_aff_5->setGeometry(QRect(880, 500, 111, 101));
        formLayoutWidget_11 = new QWidget(ajouter_emp_p_5);
        formLayoutWidget_11->setObjectName(QStringLiteral("formLayoutWidget_11"));
        formLayoutWidget_11->setGeometry(QRect(420, 50, 391, 591));
        formLayout_12 = new QFormLayout(formLayoutWidget_11);
        formLayout_12->setObjectName(QStringLiteral("formLayout_12"));
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        id_emp_9 = new QLabel(formLayoutWidget_11);
        id_emp_9->setObjectName(QStringLiteral("id_emp_9"));
        id_emp_9->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_12->setWidget(0, QFormLayout::LabelRole, id_emp_9);

        id_emp_i_9 = new QLineEdit(formLayoutWidget_11);
        id_emp_i_9->setObjectName(QStringLiteral("id_emp_i_9"));
        id_emp_i_9->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"color:white;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, id_emp_i_9);

        nom_emp_9 = new QLabel(formLayoutWidget_11);
        nom_emp_9->setObjectName(QStringLiteral("nom_emp_9"));
        nom_emp_9->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_12->setWidget(1, QFormLayout::LabelRole, nom_emp_9);

        nom_emp_i_9 = new QLineEdit(formLayoutWidget_11);
        nom_emp_i_9->setObjectName(QStringLiteral("nom_emp_i_9"));
        nom_emp_i_9->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));

        formLayout_12->setWidget(1, QFormLayout::FieldRole, nom_emp_i_9);

        role_emp_9 = new QLabel(formLayoutWidget_11);
        role_emp_9->setObjectName(QStringLiteral("role_emp_9"));
        role_emp_9->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_12->setWidget(2, QFormLayout::LabelRole, role_emp_9);

        login_emp_9 = new QLabel(formLayoutWidget_11);
        login_emp_9->setObjectName(QStringLiteral("login_emp_9"));
        login_emp_9->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_12->setWidget(3, QFormLayout::LabelRole, login_emp_9);

        login_emp_i_9 = new QLineEdit(formLayoutWidget_11);
        login_emp_i_9->setObjectName(QStringLiteral("login_emp_i_9"));
        login_emp_i_9->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));

        formLayout_12->setWidget(3, QFormLayout::FieldRole, login_emp_i_9);

        pass_emp_9 = new QLabel(formLayoutWidget_11);
        pass_emp_9->setObjectName(QStringLiteral("pass_emp_9"));
        pass_emp_9->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_12->setWidget(4, QFormLayout::LabelRole, pass_emp_9);

        pass_emp_i_9 = new QLineEdit(formLayoutWidget_11);
        pass_emp_i_9->setObjectName(QStringLiteral("pass_emp_i_9"));
        pass_emp_i_9->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));

        formLayout_12->setWidget(4, QFormLayout::FieldRole, pass_emp_i_9);

        ajouter_emp_9 = new QPushButton(formLayoutWidget_11);
        ajouter_emp_9->setObjectName(QStringLiteral("ajouter_emp_9"));
        ajouter_emp_9->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:red;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:20px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;"));

        formLayout_12->setWidget(5, QFormLayout::FieldRole, ajouter_emp_9);

        role_emp_i_9 = new QComboBox(formLayoutWidget_11);
        role_emp_i_9->setObjectName(QStringLiteral("role_emp_i_9"));
        role_emp_i_9->setStyleSheet(QLatin1String("background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;\n"
"color:white;"));

        formLayout_12->setWidget(2, QFormLayout::FieldRole, role_emp_i_9);

        generQR_5 = new QPushButton(ajouter_emp_p_5);
        generQR_5->setObjectName(QStringLiteral("generQR_5"));
        generQR_5->setGeometry(QRect(840, 440, 181, 41));
        generQR_5->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:red;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:20px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;"));
        stackedWidget->addWidget(ajouter_emp_p_5);
        modifer_emp_5 = new QWidget();
        modifer_emp_5->setObjectName(QStringLiteral("modifer_emp_5"));
        formLayoutWidget_12 = new QWidget(modifer_emp_5);
        formLayoutWidget_12->setObjectName(QStringLiteral("formLayoutWidget_12"));
        formLayoutWidget_12->setGeometry(QRect(420, 50, 391, 591));
        formLayout_13 = new QFormLayout(formLayoutWidget_12);
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        id_emp_10 = new QLabel(formLayoutWidget_12);
        id_emp_10->setObjectName(QStringLiteral("id_emp_10"));
        id_emp_10->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, id_emp_10);

        id_emp_i_10 = new QLineEdit(formLayoutWidget_12);
        id_emp_i_10->setObjectName(QStringLiteral("id_emp_i_10"));
        id_emp_i_10->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"color:white;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));
        id_emp_i_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        id_emp_i_10->setReadOnly(true);
        id_emp_i_10->setCursorMoveStyle(Qt::VisualMoveStyle);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, id_emp_i_10);

        nom_emp_10 = new QLabel(formLayoutWidget_12);
        nom_emp_10->setObjectName(QStringLiteral("nom_emp_10"));
        nom_emp_10->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, nom_emp_10);

        nom_emp_i_10 = new QLineEdit(formLayoutWidget_12);
        nom_emp_i_10->setObjectName(QStringLiteral("nom_emp_i_10"));
        nom_emp_i_10->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"color:white;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));
        nom_emp_i_10->setCursorPosition(0);
        nom_emp_i_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        nom_emp_i_10->setCursorMoveStyle(Qt::LogicalMoveStyle);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, nom_emp_i_10);

        role_emp_10 = new QLabel(formLayoutWidget_12);
        role_emp_10->setObjectName(QStringLiteral("role_emp_10"));
        role_emp_10->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_13->setWidget(2, QFormLayout::LabelRole, role_emp_10);

        login_emp_10 = new QLabel(formLayoutWidget_12);
        login_emp_10->setObjectName(QStringLiteral("login_emp_10"));
        login_emp_10->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_13->setWidget(3, QFormLayout::LabelRole, login_emp_10);

        login_emp_i_10 = new QLineEdit(formLayoutWidget_12);
        login_emp_i_10->setObjectName(QStringLiteral("login_emp_i_10"));
        login_emp_i_10->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"color:white;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));

        formLayout_13->setWidget(3, QFormLayout::FieldRole, login_emp_i_10);

        pass_emp_10 = new QLabel(formLayoutWidget_12);
        pass_emp_10->setObjectName(QStringLiteral("pass_emp_10"));
        pass_emp_10->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));

        formLayout_13->setWidget(4, QFormLayout::LabelRole, pass_emp_10);

        pass_emp_i_10 = new QLineEdit(formLayoutWidget_12);
        pass_emp_i_10->setObjectName(QStringLiteral("pass_emp_i_10"));
        pass_emp_i_10->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"color:white;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));

        formLayout_13->setWidget(4, QFormLayout::FieldRole, pass_emp_i_10);

        ajouter_emp_10 = new QPushButton(formLayoutWidget_12);
        ajouter_emp_10->setObjectName(QStringLiteral("ajouter_emp_10"));
        ajouter_emp_10->setStyleSheet(QLatin1String("background-color:#111827;\n"
"color:red;\n"
"border: none;\n"
"background-repeat: none;\n"
"font-size:23px;\n"
"padding:8px;\n"
"border-radius: 10px;\n"
"border: 2px solid teal;"));

        formLayout_13->setWidget(5, QFormLayout::FieldRole, ajouter_emp_10);

        role_emp_i_10 = new QComboBox(formLayoutWidget_12);
        role_emp_i_10->setObjectName(QStringLiteral("role_emp_i_10"));
        role_emp_i_10->setStyleSheet(QLatin1String("background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;\n"
"color:white;"));

        formLayout_13->setWidget(2, QFormLayout::FieldRole, role_emp_i_10);

        Retour_employe_20 = new QPushButton(modifer_emp_5);
        Retour_employe_20->setObjectName(QStringLiteral("Retour_employe_20"));
        Retour_employe_20->setGeometry(QRect(70, 30, 311, 41));
        Retour_employe_20->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(modifer_emp_5);
        Interface_emp_5 = new QWidget();
        Interface_emp_5->setObjectName(QStringLiteral("Interface_emp_5"));
        pushButton_9 = new QPushButton(Interface_emp_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(750, 430, 201, 41));
        pushButton_9->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        Retour_employe_21 = new QPushButton(Interface_emp_5);
        Retour_employe_21->setObjectName(QStringLiteral("Retour_employe_21"));
        Retour_employe_21->setGeometry(QRect(50, 20, 311, 41));
        Retour_employe_21->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        reclamation_i_5 = new QTextEdit(Interface_emp_5);
        reclamation_i_5->setObjectName(QStringLiteral("reclamation_i_5"));
        reclamation_i_5->setGeometry(QRect(590, 110, 501, 301));
        reclamation_i_5->setStyleSheet(QLatin1String("background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"color:white;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;"));
        titre_rec_5 = new QLineEdit(Interface_emp_5);
        titre_rec_5->setObjectName(QStringLiteral("titre_rec_5"));
        titre_rec_5->setGeometry(QRect(590, 60, 501, 31));
        titre_rec_5->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"color:white;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));
        contenu_rec_5 = new QLabel(Interface_emp_5);
        contenu_rec_5->setObjectName(QStringLiteral("contenu_rec_5"));
        contenu_rec_5->setGeometry(QRect(500, 260, 81, 21));
        contenu_rec_5->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));
        titre_rec_lab_5 = new QLabel(Interface_emp_5);
        titre_rec_lab_5->setObjectName(QStringLiteral("titre_rec_lab_5"));
        titre_rec_lab_5->setGeometry(QRect(510, 70, 61, 21));
        titre_rec_lab_5->setStyleSheet(QLatin1String("\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));
        customPlot_7 = new QCustomPlot(Interface_emp_5);
        customPlot_7->setObjectName(QStringLiteral("customPlot_7"));
        customPlot_7->setGeometry(QRect(70, 330, 501, 321));
        stackedWidget->addWidget(Interface_emp_5);
        QR_Ardunio_verif_5 = new QWidget();
        QR_Ardunio_verif_5->setObjectName(QStringLiteral("QR_Ardunio_verif_5"));
        id_entry_5 = new QLineEdit(QR_Ardunio_verif_5);
        id_entry_5->setObjectName(QStringLiteral("id_entry_5"));
        id_entry_5->setGeometry(QRect(430, 300, 281, 41));
        id_entry_5->setStyleSheet(QLatin1String("QLineEdit{ background-color:#111827;\n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"color:white;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}\n"
"QLineEdit:focus { background-color:rgb(192, 192, 255);}"));
        id_entry_5->setReadOnly(true);
        Activate_ard_5 = new QPushButton(QR_Ardunio_verif_5);
        Activate_ard_5->setObjectName(QStringLiteral("Activate_ard_5"));
        Activate_ard_5->setGeometry(QRect(310, 160, 171, 51));
        Activate_ard_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        terminate_ard_5 = new QPushButton(QR_Ardunio_verif_5);
        terminate_ard_5->setObjectName(QStringLiteral("terminate_ard_5"));
        terminate_ard_5->setGeometry(QRect(680, 160, 161, 51));
        terminate_ard_5->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        entry_rej_acc_5 = new QLineEdit(QR_Ardunio_verif_5);
        entry_rej_acc_5->setObjectName(QStringLiteral("entry_rej_acc_5"));
        entry_rej_acc_5->setGeometry(QRect(340, 370, 461, 101));
        entry_rej_acc_5->setStyleSheet(QLatin1String("QLineEdit{ \n"
"border: 2px solid teal;\n"
"border-radius: 10px;\n"
"color:white;\n"
"padding: 0 8px;\n"
"selection-background-color: darkgray;\n"
"font-size: 25px;}"));
        entry_rej_acc_5->setReadOnly(true);
        retour_emp_10 = new QPushButton(QR_Ardunio_verif_5);
        retour_emp_10->setObjectName(QStringLiteral("retour_emp_10"));
        retour_emp_10->setGeometry(QRect(90, 70, 221, 41));
        retour_emp_10->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        label_12 = new QLabel(QR_Ardunio_verif_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(540, 270, 91, 16));
        label_12->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-weight: bold;\n"
"color: rgb(255, 0, 0);"));
        stackedWidget->addWidget(QR_Ardunio_verif_5);
        Architect = new QWidget();
        Architect->setObjectName(QStringLiteral("Architect"));
        retour_taches_2 = new QPushButton(Architect);
        retour_taches_2->setObjectName(QStringLiteral("retour_taches_2"));
        retour_taches_2->setGeometry(QRect(10, 0, 93, 28));
        retour_taches_2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        groupBox_2 = new QGroupBox(Architect);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 1161, 671));
        image_2 = new QLabel(groupBox_2);
        image_2->setObjectName(QStringLiteral("image_2"));
        image_2->setGeometry(QRect(184, 10, 861, 601));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 162, 94));
        verticalLayout_12 = new QVBoxLayout(groupBox_4);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        publierPlan_2 = new QPushButton(groupBox_4);
        publierPlan_2->setObjectName(QStringLiteral("publierPlan_2"));
        sizePolicy1.setHeightForWidth(publierPlan_2->sizePolicy().hasHeightForWidth());
        publierPlan_2->setSizePolicy(sizePolicy1);
        publierPlan_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_12->addWidget(publierPlan_2);

        accesPlan_2 = new QPushButton(groupBox_4);
        accesPlan_2->setObjectName(QStringLiteral("accesPlan_2"));
        sizePolicy1.setHeightForWidth(accesPlan_2->sizePolicy().hasHeightForWidth());
        accesPlan_2->setSizePolicy(sizePolicy1);
        accesPlan_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
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

        verticalLayout_12->addWidget(accesPlan_2);

        stackedWidget->addWidget(Architect);
        Employe_Tache = new QWidget();
        Employe_Tache->setObjectName(QStringLiteral("Employe_Tache"));
        tableView_employe = new QTableView(Employe_Tache);
        tableView_employe->setObjectName(QStringLiteral("tableView_employe"));
        tableView_employe->setGeometry(QRect(10, 70, 1061, 321));
        tableView_employe->setStyleSheet(QLatin1String("border: transparent;\n"
"color: teal;\n"
""));
        export_button = new QPushButton(Employe_Tache);
        export_button->setObjectName(QStringLiteral("export_button"));
        export_button->setGeometry(QRect(350, 410, 421, 101));
        export_button->setStyleSheet(QLatin1String("QPushButton{\n"
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
        Retour_employe = new QPushButton(Employe_Tache);
        Retour_employe->setObjectName(QStringLiteral("Retour_employe"));
        Retour_employe->setGeometry(QRect(0, 0, 131, 41));
        Retour_employe->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"padding: 5px;\n"
"color: teal;\n"
"border-radius: 10px;\n"
"color: #0d9488;\n"
"font-size: 16px;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(Employe_Tache);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(100, 40, 351, 271));
        id_f = new QLineEdit(groupBox_3);
        id_f->setObjectName(QStringLiteral("id_f"));
        id_f->setGeometry(QRect(10, 40, 113, 28));
        nom_f = new QLineEdit(groupBox_3);
        nom_f->setObjectName(QStringLiteral("nom_f"));
        nom_f->setGeometry(QRect(10, 90, 113, 28));
        quantite_f = new QLineEdit(groupBox_3);
        quantite_f->setObjectName(QStringLiteral("quantite_f"));
        quantite_f->setGeometry(QRect(10, 140, 113, 28));
        prix_f = new QLineEdit(groupBox_3);
        prix_f->setObjectName(QStringLiteral("prix_f"));
        prix_f->setGeometry(QRect(10, 190, 113, 28));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 50, 63, 20));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 90, 63, 20));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 140, 63, 20));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 190, 63, 20));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(140, 240, 63, 20));
        date_f = new QLineEdit(groupBox_3);
        date_f->setObjectName(QStringLiteral("date_f"));
        date_f->setGeometry(QRect(10, 240, 113, 28));
        ajouter_f = new QPushButton(groupBox_3);
        ajouter_f->setObjectName(QStringLiteral("ajouter_f"));
        ajouter_f->setGeometry(QRect(250, 50, 83, 29));
        supprimer_f = new QPushButton(groupBox_3);
        supprimer_f->setObjectName(QStringLiteral("supprimer_f"));
        supprimer_f->setGeometry(QRect(250, 120, 83, 29));
        modifier_f = new QPushButton(groupBox_3);
        modifier_f->setObjectName(QStringLiteral("modifier_f"));
        modifier_f->setGeometry(QRect(250, 180, 83, 29));
        enregistrer_f = new QPushButton(groupBox_3);
        enregistrer_f->setObjectName(QStringLiteral("enregistrer_f"));
        enregistrer_f->setGeometry(QRect(250, 230, 83, 29));
        groupBox_5 = new QGroupBox(page);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(40, 330, 681, 261));
        tableView_f = new QTableView(groupBox_5);
        tableView_f->setObjectName(QStringLiteral("tableView_f"));
        tableView_f->setGeometry(QRect(0, 20, 681, 241));
        groupBox_6 = new QGroupBox(page);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(650, 60, 221, 101));
        rechercher_f = new QPushButton(groupBox_6);
        rechercher_f->setObjectName(QStringLiteral("rechercher_f"));
        rechercher_f->setGeometry(QRect(130, 40, 83, 29));
        chercher_f = new QLineEdit(groupBox_6);
        chercher_f->setObjectName(QStringLiteral("chercher_f"));
        chercher_f->setGeometry(QRect(0, 40, 113, 28));
        groupBox_7 = new QGroupBox(page);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(770, 210, 120, 80));
        recue_f = new QPushButton(groupBox_7);
        recue_f->setObjectName(QStringLiteral("recue_f"));
        recue_f->setGeometry(QRect(20, 30, 83, 29));
        groupBox_8 = new QGroupBox(page);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(770, 320, 120, 80));
        Formulaire = new QPushButton(groupBox_8);
        Formulaire->setObjectName(QStringLiteral("Formulaire"));
        Formulaire->setGeometry(QRect(20, 40, 83, 29));
        groupBox_9 = new QGroupBox(page);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(760, 430, 311, 281));
        optionbutton = new QPushButton(groupBox_9);
        optionbutton->setObjectName(QStringLiteral("optionbutton"));
        optionbutton->setGeometry(QRect(0, 25, 311, 31));
        scrollAreaWidgetContents_2 = new QScrollArea(groupBox_9);
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 60, 311, 221));
        scrollAreaWidgetContents_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 309, 219));
        scrollAreaWidgetContents_2->setWidget(scrollAreaWidgetContents);
        groupBox_10 = new QGroupBox(page);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, -20, 101, 71));
        pushButton = new QPushButton(groupBox_10);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 83, 29));
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1396, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(6);


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
        gerer_tache->setText(QApplication::translate("MainWindow", "Gerer les taches", Q_NULLPTR));
        gerer_partenaires->setText(QApplication::translate("MainWindow", "Gerer les partenaires", Q_NULLPTR));
        gerer_employe->setText(QApplication::translate("MainWindow", "Gerer les Employees", Q_NULLPTR));
        gerer_chantiers->setText(QApplication::translate("MainWindow", "Gerer les chantiers", Q_NULLPTR));
        gerer_mp->setText(QApplication::translate("MainWindow", "Gerer les Matieres Premieres", Q_NULLPTR));
        Plateforme_emp->setText(QApplication::translate("MainWindow", "Plateforme Employe", Q_NULLPTR));
        gerer_fournisseur->setText(QApplication::translate("MainWindow", "Gerer les fournisseurs", Q_NULLPTR));
        tri_emp_5->clear();
        tri_emp_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Trier Par Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trier par date d'embauche", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trier Par Id", Q_NULLPTR)
        );
        Retour_employe_18->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        direc_5->setText(QApplication::translate("MainWindow", "\342\206\225", Q_NULLPTR));
        reclamations_5->setText(QApplication::translate("MainWindow", "Messages", Q_NULLPTR));
        ajouter_em_6->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier_emp_6->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        del_emp_6->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        QR_interface_5->setText(QApplication::translate("MainWindow", "QR", Q_NULLPTR));
        chercher_employe_5->setText(QString());
        chercher_employe_5->setPlaceholderText(QApplication::translate("MainWindow", "Chercher..", Q_NULLPTR));
        Crud_MP->setTitle(QString());
        le_chercherMP->setPlaceholderText(QApplication::translate("MainWindow", "Search...", Q_NULLPTR));
        chercherMP->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        Ajout_MP->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        update_MP->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        envoi_MP->setText(QApplication::translate("MainWindow", "Envoi pour modifier", Q_NULLPTR));
        supprimer_MP->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        file_MP->setText(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        Ajout_Box->setTitle(QApplication::translate("MainWindow", "ajout /modif", Q_NULLPTR));
        le_id_MP->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        le_nom_MP->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        le_quatite_MP->setText(QApplication::translate("MainWindow", "Qunatite", Q_NULLPTR));
        le_prix_MP->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        le_ID_FMP->setText(QApplication::translate("MainWindow", "ID_F", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        return_MP->setText(QApplication::translate("MainWindow", "RETURN", Q_NULLPTR));
        Matieres_Premierss->setText(QApplication::translate("MainWindow", "Matieres Premiers", Q_NULLPTR));
        metier_MP->setTitle(QApplication::translate("MainWindow", "metier", Q_NULLPTR));
        triNM->setText(QApplication::translate("MainWindow", "Tri par nom", Q_NULLPTR));
        triQM->setText(QApplication::translate("MainWindow", "Tri par quantite", Q_NULLPTR));
        triPM->setText(QApplication::translate("MainWindow", "tri par Prix", Q_NULLPTR));
        Arduinoo->setText(QApplication::translate("MainWindow", "Arduino", Q_NULLPTR));
        main_chantier->setTitle(QString());
        Crud_box_2->setTitle(QString());
        chercher_ch->setPlaceholderText(QApplication::translate("MainWindow", "chercher...", Q_NULLPTR));
        chercher1->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        ajouter_chantiers->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifi->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_c->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        triem->setText(QApplication::translate("MainWindow", "tri par emplacement", Q_NULLPTR));
        trida->setText(QApplication::translate("MainWindow", "tri par date", Q_NULLPTR));
        trisur->setText(QApplication::translate("MainWindow", "tri par surface", Q_NULLPTR));
        estimation->setText(QApplication::translate("MainWindow", "Estimation Temps de fin", Q_NULLPTR));
        retour_chantier->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "idc", Q_NULLPTR));
        le_idc->setInputMask(QApplication::translate("MainWindow", "9999", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Surface", Q_NULLPTR));
        surface->setInputMask(QApplication::translate("MainWindow", "99999", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "date debut", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Manager", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "date fin", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Plan", Q_NULLPTR));
        retour_chantier_3->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "idc", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Surface", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "date debut", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "date fin", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Manager", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "plan", Q_NULLPTR));
        retour_chantier_5->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        main_taches->setTitle(QString());
        Input_Box_3->setTitle(QString());
        tache_label_3->setText(QApplication::translate("MainWindow", "ID Tache", Q_NULLPTR));
        dateD_label_3->setText(QApplication::translate("MainWindow", "Date_Done", Q_NULLPTR));
        idE_label_3->setText(QApplication::translate("MainWindow", "ID Employe", Q_NULLPTR));
        nomE_label_3->setText(QApplication::translate("MainWindow", "Nom Employe", Q_NULLPTR));
        description_label_3->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        descEmploye_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", Q_NULLPTR));
        dateU_label_3->setText(QApplication::translate("MainWindow", "Date_Upload", Q_NULLPTR));
        Crud_box_3->setTitle(QString());
        chercher_tache->setPlaceholderText(QApplication::translate("MainWindow", "Chercher...", Q_NULLPTR));
        ajouter_tache->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        upload_taches_3->setText(QApplication::translate("MainWindow", "Upload", Q_NULLPTR));
        modifier_tache->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_tache->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        chercher_tacheB_3->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        retour_taches->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        Tri_box->setTitle(QString());
        tri_date_2->setText(QApplication::translate("MainWindow", "Trier par Date ", Q_NULLPTR));
        tri_nom_2->setText(QApplication::translate("MainWindow", "Trier par Nom", Q_NULLPTR));
        tri_id_2->setText(QApplication::translate("MainWindow", "Trier par ID", Q_NULLPTR));
        return_Arduino->setText(QApplication::translate("MainWindow", "return", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "choose", Q_NULLPTR));
        simen->setText(QApplication::translate("MainWindow", "simen", Q_NULLPTR));
        image_arduino->setTitle(QString());
        amrou4_25->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        amrou3_5->setText(QApplication::translate("MainWindow", "Choisir la page desir\303\251e ", Q_NULLPTR));
        amrou1_9->setText(QApplication::translate("MainWindow", "Page des partenaires", Q_NULLPTR));
        amrou2_5->setText(QApplication::translate("MainWindow", "Page de recommandation des partenaires", Q_NULLPTR));
        amrou1_10->setText(QApplication::translate("MainWindow", "Ajouter un partenaire", Q_NULLPTR));
        logo_5->setText(QString());
        amrou5_9->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        logo2_25->setText(QString());
        amrou9_5->setText(QApplication::translate("MainWindow", "Choisir un partenaire", Q_NULLPTR));
        amrou6_5->setText(QApplication::translate("MainWindow", "Filtrer les partenaires par secteur", Q_NULLPTR));
        amrou_filter_reset_5->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        amrou_secteur_filter_5->clear();
        amrou_secteur_filter_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Technologie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Industrie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Commerce", Q_NULLPTR)
        );
        amrou_filter_go_5->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        amrou7_5->setText(QApplication::translate("MainWindow", "Mise \303\240 jour d'un partenaire", Q_NULLPTR));
        amrou8_5->setText(QApplication::translate("MainWindow", "Supprimer un partenaire", Q_NULLPTR));
        label_95->setText(QApplication::translate("MainWindow", "Liste des partenaires \342\206\223", Q_NULLPTR));
        label_101->setText(QApplication::translate("MainWindow", "Ajouter partenaire", Q_NULLPTR));
        label_96->setText(QApplication::translate("MainWindow", "Id du partenaire", Q_NULLPTR));
        amrou_id_9->setInputMask(QApplication::translate("MainWindow", "9999", Q_NULLPTR));
        label_97->setText(QApplication::translate("MainWindow", "Nom du partenaire", Q_NULLPTR));
        amrou_nom_9->setInputMask(QApplication::translate("MainWindow", ">A<AAAAAAAAAAAAAAAAAAAAAAAA", Q_NULLPTR));
        amrou_nom_9->setText(QString());
        label_98->setText(QApplication::translate("MainWindow", "Secteur partenaire", Q_NULLPTR));
        amrou_secteur_9->clear();
        amrou_secteur_9->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Commerce", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Industrie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Technologie", Q_NULLPTR)
        );
        label_99->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        label_100->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        amrou11_9->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        amrou10_9->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        logo2_26->setText(QString());
        amrou4_26->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        label_102->setText(QApplication::translate("MainWindow", "Generation du contrat", Q_NULLPTR));
        amrou4_27->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        logo2_27->setText(QString());
        amrou12_5->setText(QApplication::translate("MainWindow", "Generer contrat", Q_NULLPTR));
        amrou_company_contrat->setText(QApplication::translate("MainWindow", "Company name", Q_NULLPTR));
        amrou_inverse_content->setText(QApplication::translate("MainWindow", "\342\206\222      Inverser     \342\206\220", Q_NULLPTR));
        amrou_contenu_contrat->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", Q_NULLPTR));
        label_16aaa->setText(QApplication::translate("MainWindow", "Contrat", Q_NULLPTR));
        label_5adsqdq->setText(QApplication::translate("MainWindow", "Source", Q_NULLPTR));
        amrou_language_translate->clear();
        amrou_language_translate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "fr", Q_NULLPTR)
         << QApplication::translate("MainWindow", "en", Q_NULLPTR)
         << QApplication::translate("MainWindow", "de", Q_NULLPTR)
        );
        amrou_header_contrat->setText(QApplication::translate("MainWindow", "Contrat de sous-traitance", Q_NULLPTR));
        label_7fdsfsfs->setText(QApplication::translate("MainWindow", "Traduire en:", Q_NULLPTR));
        label_6fqfqfq->setText(QApplication::translate("MainWindow", "Traduit", Q_NULLPTR));
        amrou_date_contrat->setText(QApplication::translate("MainWindow", "date here", Q_NULLPTR));
        amrou_partner_contrat->setText(QApplication::translate("MainWindow", "To:", Q_NULLPTR));
        amrou4_28->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        amrou_contenu_translated->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", Q_NULLPTR));
        amrou_download_pdf->setText(QApplication::translate("MainWindow", "T\303\251l\303\251charger en PDF", Q_NULLPTR));
        logo2_28->setText(QString());
        amrou_translates->setText(QApplication::translate("MainWindow", "Traduire le contenu", Q_NULLPTR));
        amrou_lieu_contrat->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        amrou14_5->setText(QApplication::translate("MainWindow", "Suivant", Q_NULLPTR));
        logo2_29->setText(QString());
        amrou4_29->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        label_17grave->setText(QApplication::translate("MainWindow", "Recommendation intelligente de partenariat", Q_NULLPTR));
        label_8walah->setText(QApplication::translate("MainWindow", "Etape 1: Choisir un chantier \342\206\223", Q_NULLPTR));
        label_18ffffaaaaa->setText(QApplication::translate("MainWindow", "Modifier partenaire", Q_NULLPTR));
        logo2_30->setText(QString());
        label_19yeee->setText(QApplication::translate("MainWindow", "Id du partenaire", Q_NULLPTR));
        amrou_id_10->setInputMask(QApplication::translate("MainWindow", "9999", Q_NULLPTR));
        label_20eeeey->setText(QApplication::translate("MainWindow", "Nom du partenaire", Q_NULLPTR));
        amrou_nom_10->setInputMask(QApplication::translate("MainWindow", ">A<AAAAAAAAAAAAAAAAAAAAAAAA", Q_NULLPTR));
        label_21lala->setText(QApplication::translate("MainWindow", "Secteur partenaire", Q_NULLPTR));
        amrou_secteur_10->clear();
        amrou_secteur_10->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Commerce", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Industrie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Technologie", Q_NULLPTR)
        );
        label_22bom->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        label_24bombom->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        amrou11_10->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        amrou10_10->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        amrou4_30->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        amrou_recommend_result->setText(QString());
        amrou5_10->setText(QApplication::translate("MainWindow", "\342\206\220 Retour", Q_NULLPTR));
        amrou_contact_email->setText(QApplication::translate("MainWindow", "Contacter via Email", Q_NULLPTR));
        amrou_label13_13->setText(QApplication::translate("MainWindow", "Contenu de l'email", Q_NULLPTR));
        amrou_label13_14->setText(QApplication::translate("MainWindow", "Notre recommandation \342\206\223", Q_NULLPTR));
        amrou_label13_15->setText(QApplication::translate("MainWindow", "Sujet de l'email", Q_NULLPTR));
        amrou_logo2_8->setText(QString());
        reclamations_list_lab_5->setText(QApplication::translate("MainWindow", "Reclamations", Q_NULLPTR));
        retour_emp_9->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        supp_msg_5->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Retour_employe_19->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        QR_aff_5->setText(QString());
        id_emp_9->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        id_emp_i_9->setInputMask(QString());
        id_emp_i_9->setText(QString());
        nom_emp_9->setText(QApplication::translate("MainWindow", "NOM", Q_NULLPTR));
        nom_emp_i_9->setInputMask(QApplication::translate("MainWindow", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", Q_NULLPTR));
        role_emp_9->setText(QApplication::translate("MainWindow", "ROLE", Q_NULLPTR));
        login_emp_9->setText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        pass_emp_9->setText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        ajouter_emp_9->setText(QApplication::translate("MainWindow", "Ajouter Employe", Q_NULLPTR));
        role_emp_i_9->clear();
        role_emp_i_9->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Chef", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ingenieur", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Architecte", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ouvrier", Q_NULLPTR)
        );
        generQR_5->setText(QApplication::translate("MainWindow", "Generer QR CODE", Q_NULLPTR));
        id_emp_10->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        id_emp_i_10->setText(QString());
        nom_emp_10->setText(QApplication::translate("MainWindow", "NOM", Q_NULLPTR));
        nom_emp_i_10->setInputMask(QApplication::translate("MainWindow", "AAAAAAAAAAAAAAAAAAAAAAA", Q_NULLPTR));
        role_emp_10->setText(QApplication::translate("MainWindow", "ROLE", Q_NULLPTR));
        login_emp_10->setText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        pass_emp_10->setText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        ajouter_emp_10->setText(QApplication::translate("MainWindow", "Modifer Employe", Q_NULLPTR));
        role_emp_i_10->clear();
        role_emp_i_10->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Chef", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ingenieur", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Architecte", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ouvrier", Q_NULLPTR)
        );
        Retour_employe_20->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Envoyer Reclamation", Q_NULLPTR));
        Retour_employe_21->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        contenu_rec_5->setText(QApplication::translate("MainWindow", "Contenu", Q_NULLPTR));
        titre_rec_lab_5->setText(QApplication::translate("MainWindow", "Titre", Q_NULLPTR));
        Activate_ard_5->setText(QApplication::translate("MainWindow", "Activer", Q_NULLPTR));
        terminate_ard_5->setText(QApplication::translate("MainWindow", "Terminer", Q_NULLPTR));
        retour_emp_10->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "QR CODE", Q_NULLPTR));
        retour_taches_2->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        image_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        publierPlan_2->setText(QApplication::translate("MainWindow", "Publier le plan", Q_NULLPTR));
        accesPlan_2->setText(QApplication::translate("MainWindow", "Acceder au plan", Q_NULLPTR));
        export_button->setText(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
        Retour_employe->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "prix", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "quantit\303\251", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "date", Q_NULLPTR));
        ajouter_f->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        supprimer_f->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        modifier_f->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        enregistrer_f->setText(QApplication::translate("MainWindow", "enregistrer", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        rechercher_f->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        recue_f->setText(QApplication::translate("MainWindow", "re\303\247ue", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        Formulaire->setText(QApplication::translate("MainWindow", "formulaire", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        optionbutton->setText(QApplication::translate("MainWindow", "option", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
