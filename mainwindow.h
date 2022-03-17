#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "chantiers.h"
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

private:
    Ui::MainWindow *ui;
    chantiers a ;
};
#endif // MAINWINDOW_H
