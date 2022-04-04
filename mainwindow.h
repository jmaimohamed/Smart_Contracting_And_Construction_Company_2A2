#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "employees.h"
#include "messages.h"

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



    void on_ajouter_emp_clicked();

    void on_del_emp_clicked();

    void on_Retour_employe_3_clicked();

    void on_ajouter_em_clicked();

    void on_Retour_employe_2_clicked();

    void on_ajouter_emp_2_clicked();

    void on_modifier_emp_clicked();

    void on_Retour_employe_4_clicked();

    void on_tri_emp_currentIndexChanged(int index);

    void on_direc_stateChanged(int arg1);

    void on_chercher_employe_textEdited(const QString &arg1);

    void on_generQR_clicked();

    void on_pushButton_clicked();

    void on_reclamations_clicked();

    void on_titres_rec_clicked(const QModelIndex &index);


    void on_supp_msg_clicked();

private:
    Ui::MainWindow *ui;
    Employees Emp;
    Messages M;
};
#endif // MAINWINDOW_H
