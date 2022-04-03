#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "matierep.h"
#include <QMainWindow>
#include "qcustomplot.h"
#include <QDebug>
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

    void on_supprimer_mp_clicked();

    void on_ajouter_mp_clicked();

    void on_update_mp_clicked();

    void on_chercherM_2_clicked();

    void on_TriNM_clicked(bool checked);

    void on_TriQM_clicked(bool checked);

    void on_TriPM_clicked(bool checked);


    void on_envoiMP_clicked();



    void on_fileMP_clicked();

private:
    Ui::MainWindow *ui;
    MatiereP M;

};
#endif // MAINWINDOW_H
