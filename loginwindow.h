#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "maintenancewindow.h"
#include "teamlist.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(TeamList* teamList, TeamList* expansionList, QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_login_pressed();

private:
    Ui::LoginWindow *ui;
    MaintenanceWindow* maintenanceWindow;
    TeamList* teamList;
    TeamList* expansionList;
};

#endif // LOGINWINDOW_H
