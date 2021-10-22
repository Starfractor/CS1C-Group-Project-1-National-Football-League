#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); 
    helpWindow = new HelpWindow();
    contactUsWindow = new ContactUsWindow();
    capacityWindow = new CapacityWindow();
    loginWindow = new LoginWindow();
    listWindow = new ListWindow();
    this->setFixedSize(500,500);
    this->setWindowTitle("National Football League");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete helpWindow;
    delete contactUsWindow;
    delete capacityWindow;
    delete loginWindow;
    delete listWindow;

}

//Show help window
void MainWindow::on_pushButton_clicked()
{
    helpWindow->show();
}

//Show contact us window
void MainWindow::on_pushButton_2_clicked()
{
    contactUsWindow->show();
}

//Show capacity window
void MainWindow::on_pushButton_4_clicked()
{
    capacityWindow->show();
}

//Show login window
void MainWindow::on_pushButton_5_clicked()
{
    loginWindow->show();
}

//Show list window
void MainWindow::on_pushButton_3_clicked()
{
    listWindow->show();
}

