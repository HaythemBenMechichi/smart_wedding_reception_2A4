#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    QString id;
    QString mdp;
    int type;
    explicit login(QWidget *parent = nullptr);
    ~login();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
