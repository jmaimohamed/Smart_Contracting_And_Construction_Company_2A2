#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tache.h"
#include <QFileDialog>

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

    void on_retour_chantier_clicked();

    void on_retour_taches_clicked();

    void on_RetourM_clicked();

    void on_gerer_tache_clicked();

    void on_gerer_employe_clicked();

    void on_Retour_employe_clicked();

    void on_ajouter_tache_clicked();

    void on_supprimer_tache_clicked();

    void on_modifier_tache_clicked();

    void on_upload_taches_clicked();


    void on_tri_nom_clicked(bool checked);

    void on_tri_date_clicked(bool checked);

    void on_tri_id_clicked(bool checked);

    void on_publierPlan_clicked();

    void on_accesPlan_clicked();

private:
    Ui::MainWindow *ui;
    Tache T;
};
#endif // MAINWINDOW_H
