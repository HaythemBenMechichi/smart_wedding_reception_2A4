/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QGroupBox *groupBox_4;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *idd_5;
    QLineEdit *champass_5;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QWidget *page;
    QGroupBox *groupBox;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(800, 578);
        stackedWidget = new QStackedWidget(login);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 801, 601));
        stackedWidget->setStyleSheet(QLatin1String("background-image: url(:/meryem (2).png);\n"
""));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_4 = new QGroupBox(page_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(-11, -20, 801, 601));
        groupBox_4->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(190, 100, 451, 201));
        label_17->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 26pt \"Allura\";\n"
"color: rgb(0, 0, 0);"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(370, 270, 231, 51));
        label_18->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 24pt \"Allura\";\n"
"color: rgb(0, 0, 0);"));
        idd_5 = new QLineEdit(groupBox_4);
        idd_5->setObjectName(QStringLiteral("idd_5"));
        idd_5->setGeometry(QRect(370, 370, 113, 22));
        idd_5->setStyleSheet(QLatin1String("border: 0px solid rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: px;\n"
"background: transparent;\n"
"color: rgb(255, 255, 255);"));
        idd_5->setReadOnly(true);
        champass_5 = new QLineEdit(groupBox_4);
        champass_5->setObjectName(QStringLiteral("champass_5"));
        champass_5->setGeometry(QRect(370, 410, 113, 22));
        champass_5->setStyleSheet(QLatin1String("border: 0px solid rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: px;\n"
"background: transparent;\n"
"color: rgb(255, 255, 255);"));
        champass_5->setReadOnly(true);
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(280, 370, 61, 20));
        label_19->setStyleSheet(QLatin1String("background: transparent;\n"
"color: rgb(0, 0, 0);"));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(274, 410, 61, 20));
        label_20->setStyleSheet(QLatin1String("background: transparent;\n"
"color: rgb(0, 0, 0);"));
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 480, 93, 28));
        pushButton_5->setStyleSheet(QLatin1String("\n"
"QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 121, 25));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 60, 641, 461));
        groupBox->setStyleSheet(QStringLiteral("background : transparent;"));
        stackedWidget->addWidget(page);

        retranslateUi(login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("login", "GroupBox", Q_NULLPTR));
        label_17->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Smart Wedding </span></p><p align=\"center\"><span style=\" font-size:36pt;\">Planner</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_18->setToolTip(QApplication::translate("login", "<html><head/><body><p align=\"center\">Royale</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_18->setText(QApplication::translate("login", "Royale", Q_NULLPTR));
        label_19->setText(QApplication::translate("login", "identifiant", Q_NULLPTR));
        label_20->setText(QApplication::translate("login", "password", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("login", "valider", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "ajout d'un compte", Q_NULLPTR));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
