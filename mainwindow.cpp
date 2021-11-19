#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); 

    this->setFixedSize(600,600);
    this->setWindowTitle("National Football League");
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));

    nflList = new TeamList(QFile(":/data/Football Teams/Original Teams.csv"));
    expansionList = new TeamList(QFile(":/data/Football Teams/Original Expansion Teams.csv"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Show help window
void MainWindow::on_pushButton_clicked()
{
    helpWindow = new HelpWindow();
    helpWindow->show();
}

//Show contact us window
void MainWindow::on_pushButton_2_clicked()
{
    contactUsWindow = new ContactUsWindow();
    contactUsWindow->show();
}

//Show list window
void MainWindow::on_pushButton_3_clicked()
{
    listWindow = new ListWindow(nflList, expansionList);
    listWindow->showMaximized();
}

//Show capacity window
void MainWindow::on_pushButton_4_clicked()
{
    capacityWindow = new CapacityWindow(nflList, expansionList);
    capacityWindow->show();
}

//Show login window
void MainWindow::on_pushButton_5_clicked()
{
    loginWindow = new LoginWindow(nflList, expansionList);
    loginWindow->show();
}
