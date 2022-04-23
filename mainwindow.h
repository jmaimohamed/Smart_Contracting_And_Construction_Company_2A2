#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "chantiers.h"
#include "arduino.h"
#include "qcustomplot_mp.h"
#include "matierep.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

};
#endif // MAINWINDOW_H
