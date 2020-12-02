#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "gateau.h"
#include "salle.h"
#include "fleuriste.h"
#include "decoration.h"
#include "reclamation.h"
#include "QMessageBox"
#include "QFileDialog"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    if(nom=="")
    {
    ui->lineEdit_16->setText("saisir le nom");
    }
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
    int idS=ui->lineEdit_13->text().toInt();
    int capacite=ui->lineEdit_5->text().toInt();
int dispo=0;
salle s(idS,emplacement,nom,dispo,prix,capacite);
bool test=s.ajouter();
if(test)
{
    ui->tableView_3->setModel(s.afficher());

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
    bool test;
    salle s;
       int idS;
       int prix;
       QString nom=ui->lineEdit_10->text();
       if(nom=="")
       {
           ui->lineEdit_10->setText("saisir l input");
       }
       else
       {
       QString choix=ui->comboBox_12->currentText();
   if(choix=="nom")
   {
       test=s.recherche(-1,nom,-1);
       ui->lineEdit_26->setText(nom);
   }
   if(choix=="prix")
   {
      prix= nom.toInt();
      test=s.recherche(0,"",prix);
   }
   if(choix=="id")
   {
       idS=nom.toInt();
      test= s.recherche(idS,"",-1);
   }


if(test)
{
    ui->stackedWidget_2->setCurrentIndex(1);
}
}
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
    bool test;
    decoration r;
       int idR;
       int prix;
       QString nom=ui->lineEdit_42->text();
       if(nom=="")
       {
           ui->lineEdit_42->setText("saisir l input");
       }
       else
       {
       QString choix=ui->comboBox_13->currentText();
   if(choix=="nom")
   {
       test=r.recherche(-1,nom,-1);
       ui->lineEdit_48->setText(nom);
   }
   if(choix=="prix")
   {
      prix= nom.toInt();
      test=r.recherche(0,"",prix);
   }
   if(choix=="id")
   {
       idR=nom.toInt();
      test= r.recherche(idR,"",-1);
   }

    ui->stackedWidget_7->setCurrentIndex(1);
}
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
   ui->stackedWidget_14->setCurrentIndex(0);
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
//// ajout gateau
void MainWindow::on_ajout_gateau_clicked()
{
QString nom=ui->lineEdit_74->text();
int verif=0;
if(nom=="")
{
    ui->lineEdit_74->setText("saisir le nom");
}
else
    verif++;
QString ingrediant=ui->lineEdit_75->text();
if(ingrediant=="")
{
    ui->lineEdit_75->setText("saisir les ingrediants");
}
else
    verif++;
int   prix=ui->lineEdit_76->text().toInt();
if(prix==NULL)
{
    ui->lineEdit_76->setText("saisir le prix");
}
else
    verif++;
int idg=ui->lineEdit_100->text().toInt();
if(idg==NULL)
{
    ui->lineEdit_100->setText("saisir id gateau");
}
else verif++;
if(verif==4)
{
gateau g(idg,nom,prix,ingrediant);


 bool exis=g.existance(idg);
 if(exis==1)
 {
bool test=g.ajouter();
if(test)
{
    ui->tableView_8->setModel(g.afficher());

    QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("ajout successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("ajout failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
 else
     QMessageBox::critical(nullptr, QObject::tr("database is open"),
                 QObject::tr("saisir un autre id.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);

}

}

//ajout fleuriste
void MainWindow::on_ajoutSalle_21_clicked()
{
    int verif=0;
    QString nom=ui->lineEdit_83->text();
    if(nom=="")
    {
        ui->lineEdit_83->setText("saisir le nom");
    }
    else
        verif++;
    int numero=ui->lineEdit_85->text().toInt();
    if(numero==NULL)
    {
        ui->lineEdit_85->setText("saisir le numero");
    }
    else
        verif++;
    int prix=ui->lineEdit_86->text().toInt();
    if(prix==NULL)
    {
        ui->lineEdit_86->setText("saisir le prix");
    }
    else verif++;
    int idF=ui->lineEdit_97->text().toInt();
    if(idF==NULL)
    {
        ui->lineEdit_97->setText("saisir id fleuriste");
    }
    else verif++;

if(verif==4)
{
    fleuriste f(idF,nom,numero,prix);

bool test=f.ajouter();
if(test)
{
    ui->tableView_9->setModel(f.afficher());

    QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("ajout successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("ajout failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
}
///supprimer gateau
void MainWindow::on_pushButton_69_clicked()
{
    QString nom=ui->lineEdit_80->text();
    if(nom=="")
    {
       ui->lineEdit_80->setText("saisir le nom");
    }
    else
    {
    gateau g;
    int idg=-1,prix=-1;
    bool verif;
verif=g.recherche(idg,nom,prix);
if(verif)
{
    bool test=g.supprimer(nom);
    if(test)
    {
            ui->tableView_8->setModel(g.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}
}
////supprimer fleuriste
void MainWindow::on_pushButton_73_clicked()
{
QString nom=ui->lineEdit_90->text();
if(nom=="")
{
    ui->lineEdit_90->setText("saisir le nom");
}
else
{
fleuriste f;
int num=0;
int prix=0;
bool verif;
verif=f.recherche(nom,prix,num);
if(verif)
{
    bool test=f.supprimer(nom);

if(test)
{
    ui->tableView_9->setModel(f.afficher());
    QMessageBox::information(nullptr, QObject::tr("ok"),
                QObject::tr("suppression successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("not ok"),
                QObject::tr("suppression failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}
}
}
/// update gateau
void MainWindow::on_ajoutSalle_19_clicked()
{int verif=0;
    QString nom=ui->lineEdit_9->text();
    if(nom=="")
    {
        ui->lineEdit_9->setText("saisir le nom ");
    }
    else
        verif++;
    int prix=ui->lineEdit_79->text().toInt();
    if(prix==NULL)
    {
        ui->lineEdit_79->setText("saisir le prix");
    }
    else verif++;
    QString ingrediant=ui->lineEdit_78->text();
    if(ingrediant=="")
    {
    ui->lineEdit_78->setText("saisir les ingrediants");
    }
    else verif++;
    int idG=ui->lineEdit_97->text().toInt();
    if(idG==NULL)
    {
        ui->lineEdit_97->setText("saisir id du gateau");
    }
    else
        verif++;
    if(verif==4)
    {
    gateau g(idG,nom,prix,ingrediant);
    bool test=g.update();
    if(test)
    {
        ui->tableView_8->setModel(g.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("update successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("update failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
}

/// update fleuriste
void MainWindow::on_ajoutSalle_22_clicked()
{
int verif=0;
    QString nom=ui->lineEdit_94->text();
    if(nom=="")
    {
        ui->lineEdit_94->setText("saisir le nom");;
    }
    else
        verif++;
    int num=ui->lineEdit_89->text().toInt();
    if(num==NULL)
    {
        ui->lineEdit_89->setText("saisir le numero");
    }
    else
        verif++;
    int prix=ui->lineEdit_88->text().toInt();
    if(prix==NULL)
    {
        ui->lineEdit_88->setText("saisir le prix");
    }
    else
        verif++;
    int idf=ui->lineEdit_12->text().toInt();
    if(idf==NULL)
    {
        ui->lineEdit_12->setText("saisir identifiant fleuriste");
    }
    else
        verif++;
    if(verif==4)
    {
    fleuriste f(idf,nom,num,prix);
    bool test=f.update();
    if(test)
    {
        ui->tableView_9->setModel(f.afficher());
            ui->tableView->setModel(r.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("update successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("update failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
}

///bouton afficher gateau
void MainWindow::on_ajoutSalle_31_clicked()
{
    gateau g;
    ui->tableView_8->setModel(g.afficher());
}
///bouton afficher fleuriste

void MainWindow::on_ajoutSalle_32_clicked()
{
    fleuriste f;
    ui->tableView_9->setModel(f.afficher());
}

////////////////////////////recherche gateau

void MainWindow::on_pushButton_62_clicked()
{
    bool test;
    gateau g;
       int idg=1;
       int prix=0;
       QString nom=ui->lineEdit_77->text();
       if(nom=="")
       {
           ui->lineEdit_77->setText("saisir l input");
       }
       else
       {
       QString choix=ui->comboBox->currentText();
   if(choix=="nom")
   {
       test=g.recherche(idg,nom,prix);
       ui->lineEdit_9->setText(nom);
   }
   if(choix=="prix")
   {
      prix= nom.toInt();
      test=g.recherche(idg,nom,prix);
   }
   if(choix=="idg")
   {
       idg=nom.toInt();
      test= g.recherche(idg,nom,prix);
   }


if(test)
{
ui->stackedWidget_14->setCurrentIndex(1);
}
}
}



void MainWindow::on_pushButton_72_clicked()
{
    ui->stackedWidget_16->setCurrentIndex(0);
}
////verif existance avant editer
void MainWindow::on_pushButton_71_clicked()
{

    bool test;
    fleuriste f;
    int prix=0;
    int num=0;
    QString nom=ui->lineEdit_87->text();
    if(nom=="")
    {
        ui->lineEdit_87->setText("saisr l input");
    }
    else
    {
    QString choix=ui->comboBox_11->currentText();
  if(choix=="nom")
   {
       test=f.recherche(nom,prix,num);
       ui->lineEdit_94->setText(nom);
   }
   if(choix=="prix")
   {
      prix= nom.toInt();
      test=f.recherche(nom,prix,num);
   }
   if(choix=="numero")
   {
       num=nom.toInt();
       test= f.recherche(nom,prix,num);
   }
if(test)
{
ui->stackedWidget_16->setCurrentIndex(1);
}
}

}





void MainWindow::on_ajoutSalle_26_clicked()
{ salle s;
    ui->tableView_3->setModel(s.afficher());

}

void MainWindow::on_ajoutSalle_4_clicked()
{

    int verif=0;
        QString nom=ui->lineEdit_26->text();
        if(nom=="")
        {
            ui->lineEdit_9->setText("saisir le nom ");
        }
        else
            verif++;
        int prix=ui->lineEdit_25->text().toInt();
        if(prix==NULL)
        {
            ui->lineEdit_25->setText("saisir le prix");
        }
        else verif++;
      int capacite=ui->lineEdit_24->text().toInt();
        if(capacite==NULL)
        {
        ui->lineEdit_24->setText("saisir capacite");
        }
        else verif++;
                int idS=ui->lineEdit_27->text().toInt();
        if(idS==NULL)
        {
            ui->lineEdit_27->setText("saisir id de salle");
        }
        else
            verif++;
                    QString emplacement=ui->lineEdit_28->text();
        if(emplacement=="")
        {
        ui->lineEdit_28->setText("saisir emplacement");
        }
        else verif++;
        if(verif==5)
        {
            int dispo=-1;
        salle s(idS,emplacement,nom,dispo,prix,capacite);
        bool test=s.update();
        if(test)
        {
            ui->tableView_8->setModel(s.afficher());
            QMessageBox::information(nullptr, QObject::tr("ok"),
                        QObject::tr("update successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("not ok"),
                        QObject::tr("update failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }
    }



void MainWindow::on_pushButton_11_clicked()
{



    QString nom=ui->lineEdit_8->text();
    if(nom=="")
    {
       ui->lineEdit_8->setText("saisir le nom");
    }
    else
    {
    salle s;
    int idS=-1,prix=-1;
    bool verif;
verif=s.recherche(idS,nom,prix);
if(verif)
{
    bool test=s.supprimer(nom);
    if(test)
    {
            ui->tableView_3->setModel(s.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}

}

void MainWindow::on_ajoutSalle_9_clicked()
{
    QString nomdecorateur=ui->lineEdit_39->text();
    QString style=ui->lineEdit_32->text();
    int idD=ui->lineEdit_37->text().toInt();
    int prix=ui->lineEdit_40->text().toInt();
    int num=ui->lineEdit_41->text().toInt();
    decoration d(idD,nomdecorateur,style,num,prix);
     bool test=d.ajouter();
    if(test)
    {
        ui->tableView_6->setModel(d.afficher());

        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("ajout successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }






void MainWindow::on_ajoutSalle_29_clicked()
{ decoration d;
    ui->tableView_6->setModel(d.afficher());
}

void MainWindow::on_pushButton_55_clicked()
{



    QString nom=ui->lineEdit_45->text();
    if(nom=="")
    {
        ui->lineEdit_90->setText("saisir le nom");
    }
    else
    {
    decoration d;

    bool verif;
    verif=d.recherche(-1,nom,-1);
    if(verif)
    {
        bool test=d.supprimer(nom);

    if(test)
    {
        ui->tableView_9->setModel(d.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    }

}
