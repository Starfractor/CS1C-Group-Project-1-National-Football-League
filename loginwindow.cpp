#include "loginwindow.h"
#include "ui_loginwindow.h"

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
