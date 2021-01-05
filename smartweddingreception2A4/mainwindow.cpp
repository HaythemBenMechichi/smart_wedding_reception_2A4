#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "gateau.h"
#include "salle.h"
#include <QMediaPlayer>
#include "fleuriste.h"
#include <qdebug.h>
#include "reclamation.h"
#include <iostream>
#include <QMessageBox>
#include "arduino.h"
#include  <QDebug>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include<QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QSqlQuery>
#include<QDesktopServices>
#include <QMessageBox>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
#include <QPrintDialog>
#include<QtSql/QSqlQuery>
#include <QPropertyAnimation>
#include<QVariant>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMediaPlayer * player = new QMediaPlayer();
        player->setMedia(QUrl("qrc:/2018-07-02_-_Tears_of_Joy_-_David_Fesliyan.mp3"));
        player->setVolume(50);
        player->play();
        animation = new QPropertyAnimation(ui->heart, "geometry");
                animation->setDuration(9000);
                animation->setStartValue(ui->heart->geometry());
                animation->setEndValue(QRect(200,450,100,50));
                animation->start();


                ///arduino
                /*arduino ar;
                int ret=ar.connect_arduino();
                switch (ret) {
                case(0): qDebug() <<"arduino is avaible and connected to:";
                    break;
                case(1): qDebug() <<"arduino is avaible but not connected to:";
                    break;
                case(-1): qDebug() <<"arduino is not avaible";
                    break;

                }*/
               /* QByteArray data="0";

                 int verif;
                data=ar.read_from_arduino();
                int distance;
                distance=data.toInt();
                if(distance<30)
                {
                    verif=ar.write_to_arduino("1");
                }*/
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
void MainWindow::on_ajoutSalle_36_clicked()//pdf gateau
{

    QString strStream;
                   QTextStream out(&strStream);

                   const int rowCount = ui->tableView_8->model()->rowCount();
                   const int columnCount = ui->tableView_8->model()->columnCount();

                   out <<  "<html>\n"
                       "<head>\n"
                       "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("strTitle")
                       <<  "</head>\n"
                       "<body bgcolor=#ffffff link=#5000A0>\n"

                      //     "<align='right'> " << datefich << "</align>"
                       "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                   // headers
                   out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                   for (int column = 0; column < columnCount; column++)
                       if (!ui->tableView_8->isColumnHidden(column))
                           out << QString("<th>%1</th>").arg(ui->tableView_8->model()->headerData(column, Qt::Horizontal).toString());
                   out << "</tr></thead>\n";

                   // data table
                   for (int row = 0; row < rowCount; row++) {
                       out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                       for (int column = 0; column < columnCount; column++) {
                           if (!ui->tableView_8->isColumnHidden(column)) {
                               QString data = ui->tableView_8->model()->data(ui->tableView_8->model()->index(row, column)).toString().simplified();
                               out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                           }
                       }
                       out << "</tr>\n";
                   }
                   out <<  "</table> </center>\n"
                       "</body>\n"
                       "</html>\n";

             QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
               if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

              QPrinter printer (QPrinter::PrinterResolution);
               printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setPaperSize(QPrinter::A4);
             printer.setOutputFileName(fileName);

              QTextDocument doc;
               doc.setHtml(strStream);
               doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
               doc.print(&printer);
}

void MainWindow::on_ajoutSalle_39_clicked()//imprimer gateau
{
    //imprimer

      QPrinter printer;

      printer.setPrinterName("desiered printer name");

    QPrintDialog dialog(&printer,this);

      if(dialog.exec()== QDialog::Rejected)

          return;
}

void MainWindow::on_pdf_fleu_clicked()
{
    QString strStream;
                   QTextStream out(&strStream);

                   const int rowCount = ui->tableView_9->model()->rowCount();
                   const int columnCount = ui->tableView_9->model()->columnCount();

                   out <<  "<html>\n"
                       "<head>\n"
                       "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("strTitle")
                       <<  "</head>\n"
                       "<body bgcolor=#ffffff link=#5000A0>\n"

                      //     "<align='right'> " << datefich << "</align>"
                       "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                   // headers
                   out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                   for (int column = 0; column < columnCount; column++)
                       if (!ui->tableView_9->isColumnHidden(column))
                           out << QString("<th>%1</th>").arg(ui->tableView_9->model()->headerData(column, Qt::Horizontal).toString());
                   out << "</tr></thead>\n";

                   // data table
                   for (int row = 0; row < rowCount; row++) {
                       out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                       for (int column = 0; column < columnCount; column++) {
                           if (!ui->tableView_9->isColumnHidden(column)) {
                               QString data = ui->tableView_9->model()->data(ui->tableView_9->model()->index(row, column)).toString().simplified();
                               out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                           }
                       }
                       out << "</tr>\n";
                   }
                   out <<  "</table> </center>\n"
                       "</body>\n"
                       "</html>\n";

             QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
               if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

              QPrinter printer (QPrinter::PrinterResolution);
               printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setPaperSize(QPrinter::A4);
             printer.setOutputFileName(fileName);

              QTextDocument doc;
               doc.setHtml(strStream);
               doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
               doc.print(&printer);
}

void MainWindow::on_imp_fleuriste_clicked()
{
    //imprimer

      QPrinter printer;

      printer.setPrinterName("desiered printer name");

    QPrintDialog dialog(&printer,this);

      if(dialog.exec()== QDialog::Rejected)

          return;
}

void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp("haythem.benmechichi@esprit.tn", "191JMT1327", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    smtp->sendMail("haythem.benmechichi@esprit.tn", ui->adresse->text(),ui->objet->text(),ui->contenue->text());
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

void MainWindow::on_ajoutSalle_38_clicked()
{
    sendMail();
}
void MainWindow::on_ajoutSalle_40_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_pushButton_48_clicked()
{
    ui->pages->setCurrentIndex(14);
}
