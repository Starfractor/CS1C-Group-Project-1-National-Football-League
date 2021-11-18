#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QKeyEvent>

LoginWindow::LoginWindow(TeamList* nflList, TeamList* expansionList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowTitle("Login Required");
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));
    this->nflList = nflList;
    this->expansionList = expansionList;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_pressed()
{

}

//Checks if passowrd is valid when login button is pressed
void LoginWindow::on_pushButton_login_clicked()
{
    QString password = ui->lineEdit_password->text();

    if(password == "password")
    {
        QMessageBox::information(this, "Success", "Login Successful");
        hide();
        maintenanceWindow = new MaintenanceWindow(nflList, expansionList);
        maintenanceWindow->show();
    }
    else
    {
        QMessageBox::warning(this, "Error", "The password is incorrect");
        ui->lineEdit_password->clear();
    }
}

