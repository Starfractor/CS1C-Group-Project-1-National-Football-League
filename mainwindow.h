#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "helpwindow.h"
#include "contactuswindow.h"
#include "capacitywindow.h"
#include "loginwindow.h"
#include "listwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    HelpWindow* helpWindow;
    ContactUsWindow* contactUsWindow;
    CapacityWindow* capacityWindow;
    LoginWindow* loginWindow;
    ListWindow* listWindow;
    TeamList *teamList;
    TeamList *expansionList;
};

#endif // MAINWINDOW_H
