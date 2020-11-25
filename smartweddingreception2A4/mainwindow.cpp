#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "salle.h"
#include "reclamation.h"
#include "QMessageBox"
#include "QFileDialog"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_2->setModel(r.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->pages->setCurrentIndex(1);
}
void MainWindow::on_pushButton_14_clicked()
{
    ui->pages->setCurrentIndex(9);
}
void MainWindow::on_pushButton_15_clicked()
{
    ui->pages->setCurrentIndex(11);
}
void MainWindow::on_pushButton_16_clicked()
{
    ui->pages->setCurrentIndex(12);
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->pages->setCurrentIndex(0);
}
void MainWindow::on_pushButton_37_clicked()
{
    ui->pages->setCurrentIndex(0);
}
void MainWindow::on_pushButton_43_clicked()
{
    ui->pages->setCurrentIndex(0);
}
void MainWindow::on_pushButton_39_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_pushButton_6_clicked()
{
    //bouton ajout client
    ui->pages->setCurrentIndex(2);

    QString nom=ui->lineEdit_16->text();
    QString prenom=ui->lineEdit_17->text();
    int age=ui->lineEdit_18->text().toInt();
    int cin=ui->lineEdit_19->text().toInt();
    QString email=ui->lineEdit_20->text();
    int numero=ui->lineEdit_21->text().toInt();
    QDate dat=ui->dateEdit_2->date();
    QString region=ui->comboBox_2->currentText();
client c(nom,prenom,age,cin,numero,email,dat,region);

bool test=c.ajouter();

if(test)
{
    QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("ajout successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("ajout failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}
void MainWindow::on_pushButton_5_clicked()
{
    ui->pages->setCurrentIndex(1);
}
void MainWindow::on_pushButton_8_clicked()
{
    ui->pages->setCurrentIndex(3);
}
void MainWindow::on_pushButton_27_clicked()
{
    ui->pages->setCurrentIndex(3);
}
void MainWindow::on_pushButton_17_clicked()
{
    ui->pages->setCurrentIndex(3);
}
void MainWindow::on_pushButton_26_clicked()
{
    ui->pages->setCurrentIndex(3);
}

void MainWindow::on_pushButton_35_clicked()
{
    ui->pages->setCurrentIndex(2);

}

void MainWindow::on_pushButton_123_clicked()
{
    ui->pages->setCurrentIndex(4);

}

void MainWindow::on_pushButton_126_clicked()
{
    ui->pages->setCurrentIndex(4);

}

void MainWindow::on_pushButton_125_clicked()
{
    ui->pages->setCurrentIndex(4);

}

void MainWindow::on_pushButton_124_clicked()
{
    ui->pages->setCurrentIndex(4);

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->pages->setCurrentIndex(3);

}

void MainWindow::on_pushButton_22_clicked()
{
    ui->pages->setCurrentIndex(5);

}

void MainWindow::on_pushButton_23_clicked()
{
    ui->pages->setCurrentIndex(5);

}


void MainWindow::on_pushButton_24_clicked()
{
    ui->pages->setCurrentIndex(5);

}

void MainWindow::on_pushButton_25_clicked()
{
    ui->pages->setCurrentIndex(5);

}

void MainWindow::on_pushButton_31_clicked()
{
    ui->pages->setCurrentIndex(4);

}

void MainWindow::on_pushButton_40_clicked()
{
    ui->pages->setCurrentIndex(6);

}

void MainWindow::on_pushButton_45_clicked()
{
    ui->pages->setCurrentIndex(6);

}

void MainWindow::on_pushButton_46_clicked()
{
    ui->pages->setCurrentIndex(6);

}

void MainWindow::on_pushButton_47_clicked()
{
    ui->pages->setCurrentIndex(6);

}

void MainWindow::on_pushButton_32_clicked()
{
    ui->pages->setCurrentIndex(5);

}

void MainWindow::on_pushButton_30_clicked()
{
    ui->pages->setCurrentIndex(7);

}

void MainWindow::on_pushButton_33_clicked()
{
    ui->pages->setCurrentIndex(6);
}

void MainWindow::on_pushButton_29_clicked()
{
    ui->pages->setCurrentIndex(8);

}

void MainWindow::on_pushButton_34_clicked()
{
    ui->pages->setCurrentIndex(7);

}

void MainWindow::on_pushButton_28_clicked()
{
    ui->pages->setCurrentIndex(0);

}

void MainWindow::on_pushButton_36_clicked()
{
    ui->pages->setCurrentIndex(10);

}

void MainWindow::on_pushButton_38_clicked()
{
    ui->pages->setCurrentIndex(9);

}

void MainWindow::on_pushButton_41_clicked()
{
    ui->pages->setCurrentIndex(0);

}

void MainWindow::on_pushButton_42_clicked()
{
    ui->pages->setCurrentIndex(0);

}

void MainWindow::on_ajoutImage_clicked()
{
QString filename= QFileDialog::getOpenFileName(this,tr("choisir"),"",tr("Images(*.png *.xpm *.jpg)"));
QImage image;
bool valid= image.load(filename);
if(valid)
{
    image=image.scaledToWidth(ui->label_2->width(),Qt::SmoothTransformation);
   ui->label_2->setPixmap(QPixmap::fromImage(image));
}
}

void MainWindow::on_ajoutSalle_clicked()
{
    QString emplacement=ui->lineEdit_2->text();
    QString nom=ui->lineEdit_3->text();
    int prix=ui->lineEdit_4->text().toInt();
    int capacite=ui->lineEdit_5->text().toInt();
int idS=-1;
int dispo=0;
salle s(idS,emplacement,nom,dispo,prix,capacite);
bool test=s.ajouter();
if(test)
{
    QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("ajout successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("ajout failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);

}

void MainWindow::on_pushButton_49_clicked()
{
    ui->stackedWidget_5->setCurrentIndex(1);
}

void MainWindow::on_pushButton_50_clicked()
{
    ui->stackedWidget_5->setCurrentIndex(0);

}

void MainWindow::on_pushButton_57_clicked()
{
    ui->stackedWidget_9->setCurrentIndex(1);
}

void MainWindow::on_pushButton_65_clicked()
{
    ui->stackedWidget_9->setCurrentIndex(0);
}

void MainWindow::on_pushButton_53_clicked()
{
    ui->stackedWidget_7->setCurrentIndex(1);
}

void MainWindow::on_pushButton_54_clicked()
{
    ui->stackedWidget_7->setCurrentIndex(0);
}

void MainWindow::on_pushButton_59_clicked()
{
    ui->stackedWidget_10->setCurrentIndex(1);
}

void MainWindow::on_pushButton_66_clicked()
{
    ui->stackedWidget_10->setCurrentIndex(0);
}

void MainWindow::on_pushButton_61_clicked()
{
    ui->stackedWidget_11->setCurrentIndex(1);
}

void MainWindow::on_pushButton_67_clicked()
{
    ui->stackedWidget_11->setCurrentIndex(0);
}

void MainWindow::on_back_2_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->pages->setCurrentIndex(13);

}

void MainWindow::on_ajoutSalle_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_pushButton_68_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);

}



void MainWindow::on_ajout_reclamation_2_clicked()
{
    QDate dat=ui->dateEdit_4->date();
    QString commentaire=ui->lineEdit_6->text();
    int cin=ui->lineEdit_11->text().toInt();
    int rate=ui->comboBox_9->currentText().toInt();

reclamation r(dat,commentaire,cin,rate);

bool test=r.ajouter();

if(test)
{
    ui->tableView->setModel(r.afficher());
    QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("ajout successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("ajout failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_pushButton_63_clicked()
{
   ui->stackedWidget_13->setCurrentIndex(0);
}




/*void MainWindow::on_ajout_reclamation_4_clicked()
{
 int d=ui->lineEdit_72->text().toInt();
 bool test=r;
}*/

void MainWindow::on_ajout_reclamation_5_clicked()
{
    int d=ui->lineEdit_72->text().toInt();

    bool test=r.supprimer(d);
    if(test)
    {
            ui->tableView->setModel(r.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
