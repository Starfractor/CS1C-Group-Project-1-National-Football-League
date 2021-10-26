#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "maintenancewindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_login_pressed();

private:
    Ui::LoginWindow *ui;
    MaintenanceWindow* maintenanceWindow;
};

#endif // LOGINWINDOW_H
