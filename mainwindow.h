#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "chantiers.h"
#include "arduino.h"
#include "qcustomplot_mp.h"
#include "matierep.h"
#include "messages.h"
#include "employees.h"
#include "tache.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int emp_tri_dir;

private slots:
    void on_login_button_clicked();

    void on_gerer_mp_clicked();

    void on_gerer_chantiers_clicked();

    void on_gerer_partenaires_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_retour_chantier_clicked();

    void on_retour_taches_clicked();

    void on_RetourM_clicked();

    void on_gerer_tache_clicked();

    void on_gerer_employe_clicked();

    void on_Retour_employe_clicked();

    void on_ajouter_chantiers_clicked();

    void on_retour_chantier_3_clicked();

    void on_ajouter_clicked();

    void on_supprimer_c_clicked();



    void on_modifi_clicked();

    void on_retour_chantier_5_clicked();

    void on_modifier_clicked();


    void on_chercher1_clicked();

    void on_triem_clicked();

    void on_trida_clicked();

    void on_trisur_clicked();

// matiere premiers

    void on_return_2_clicked();

    void on_arduino_clicked();

    void on_yajour_clicked();

    void update();

    void on_simen_clicked();

    void on_return_MP_clicked();

    void on_envoi_MP_clicked();

    void on_Ajout_MP_clicked();

    void on_update_MP_clicked();

    void on_supprimer_MP_clicked();

    void on_chercherMP_clicked();

    void on_file_MP_clicked();

    void on_triNM_clicked(bool checked);

    void on_triQM_clicked(bool checked);

    void on_triPM_clicked(bool checked);
// fin matiere premier//


    void on_return_Arduino_clicked();

    void on_Arduinoo_clicked();

    void on_amrou1_9_clicked();

    void on_amrou2_5_clicked();

    void on_amrou1_10_clicked();

    void on_amrou9_5_clicked();

    void on_amrou4_26_clicked();

    void on_amrou5_9_clicked();

    void on_amrou4_27_clicked();

    void on_amrou4_28_clicked();

    void on_amrou4_29_clicked();

    void on_amrou4_25_clicked();

    void on_amrou_filter_go_5_clicked();

    void on_amrou_filter_reset_5_clicked();

    void on_amrou7_5_clicked();

    void on_amrou4_30_clicked();

    void on_amrou8_5_clicked();

    void on_amrou10_9_clicked();

    void on_amrou11_9_clicked();

    void on_amrou12_5_clicked();

    void on_amrou_inverse_content_clicked();

    void on_amrou_download_pdf_clicked();

    void on_amrou_translates_clicked();

    void on_amrou14_5_clicked();

    void on_amrou5_10_clicked();

    void on_Retour_employe_18_clicked();

    void on_ajouter_em_6_clicked();

    void on_del_emp_6_clicked();

    void on_ajouter_emp_9_clicked();

    void on_Retour_employe_19_clicked();

    void on_ajouter_emp_10_clicked();

    void on_modifier_emp_6_clicked();

    void on_Retour_employe_20_clicked();


    void on_tri_emp_5_currentIndexChanged(int index);

    void on_direc_5_stateChanged(int arg1);

    void on_chercher_employe_5_textEdited(const QString &arg1);

    void on_generQR_5_clicked();

    void on_pushButton_9_clicked();

    void on_reclamations_5_clicked();

    void on_titres_rec_5_clicked(const QModelIndex &index);

    void on_supp_msg_5_clicked();

    void on_Retour_employe_21_clicked();

    void on_retour_emp_9_clicked();

    void on_QR_interface_5_clicked();

    void on_retour_emp_10_clicked();

    void readValues();

    void on_Activate_ard_5_clicked();

    void on_terminate_ard_5_clicked();

    void on_Plateforme_emp_clicked();

    void on_ajouter_tache_clicked();

    void on_upload_taches_3_clicked();

    void on_modifier_tache_clicked();

    void on_supprimer_tache_clicked();

    void on_chercher_tacheB_3_clicked();

    void on_tri_date_2_clicked(bool checked);

    void on_tri_nom_2_clicked(bool checked);

    void on_tri_id_2_clicked(bool checked);

    void on_retour_taches_2_clicked();

    void on_publierPlan_clicked();

    void on_accesPlan_clicked();

    void on_publierPlan_2_clicked();

    void on_accesPlan_2_clicked();

    void on_export_button_clicked();

private:
    QSerialPort *serial;
        QString portname;
        quint16 vendorId;
        quint16 productId;
        bool arduino_available;
        void arduino_init();
    Ui::MainWindow *ui;
    MatiereP M;
    Arduino A;
    chantiers a ;
    QByteArray data;
    Employees Emp;
    Messages Msg;
    bool ArdunioProcess;
    Tache T;

};
#endif // MAINWINDOW_H
