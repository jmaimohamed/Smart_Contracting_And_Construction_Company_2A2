#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_amrou1_clicked();

    void on_pushButton_32_clicked();

    void on_amrou5_clicked();

    void on_amrou1_3_clicked();

    void on_amrou4_2_clicked();

    void on_amrou2_clicked();

    void on_amrou4_8_clicked();

    void on_amrou9_clicked();

    void on_amrou12_clicked();

    void on_amrou4_3_clicked();

    void on_amrou4_7_clicked();

    void on_amrou10_clicked();

    void on_amrou11_clicked();

    void on_amrou8_clicked();

    void on_amrou4_9_clicked();

    void on_amrou7_clicked();

    void on_amrou10_2_clicked();

    void on_amrou11_2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_amrou_filter_reset_clicked();

    void on_amrou_filter_go_clicked();

    void on_amrou_download_pdf_clicked();

    void on_amrou14_clicked();

    void on_amrou_translates_clicked();

    void on_amrou_inverse_content_clicked();

    void on_amrou5_2_clicked();

    void on_amrou_contact_email_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
