#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "smtp.h"
#include <QMainWindow>
#include "reclamation.h"
#include <QPropertyAnimation>
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
    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_123_clicked();

    void on_pushButton_126_clicked();

    void on_pushButton_125_clicked();

    void on_pushButton_124_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_42_clicked();

    void on_ajoutImage_clicked();

    void on_ajoutSalle_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_67_clicked();

    void on_back_2_clicked();

    void on_pushButton_21_clicked();

    void on_ajoutSalle_2_clicked();

    void on_pushButton_68_clicked();


    void on_ajout_reclamation_2_clicked();


    void on_pushButton_63_clicked();


    void on_ajout_reclamation_5_clicked();


    void on_ajout_gateau_clicked();

    void on_ajoutSalle_21_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_73_clicked();


    void on_ajoutSalle_19_clicked();

    void on_ajoutSalle_22_clicked();

    void on_pushButton_56_clicked();


    void on_ajoutSalle_32_clicked();

    void on_ajoutSalle_31_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_72_clicked();

    void on_ajoutSalle_36_clicked();

    void on_ajoutSalle_39_clicked();

    void on_pdf_fleu_clicked();

    void on_imp_fleuriste_clicked();
    void sendMail();
    void mailSent(QString status);
    void on_ajoutSalle_37_clicked();

    void on_ajoutSalle_38_clicked();

    void on_ajoutSalle_40_clicked();

    void on_pushButton_48_clicked();

private:
    Ui::MainWindow *ui;
    reclamation r;
    QPropertyAnimation *animation;
};
#endif // MAINWINDOW_H
