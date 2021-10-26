#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QKeyEvent>

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowTitle("Login Required");
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

//Checks if passowrd is valid when login button is pressed
void LoginWindow::on_pushButton_login_clicked()
{
    QString password = ui->lineEdit_password->text();

    if(password == "password")
    {
        QMessageBox::information(this, "Success", "Login Successful");
        hide();
        maintenanceWindow = new MaintenanceWindow();
        maintenanceWindow->show();
    }
    else
    {
        QMessageBox::warning(this, "Error", "The password is incorrect");
        ui->lineEdit_password->clear();
    }
}

