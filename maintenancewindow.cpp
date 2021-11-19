#include "maintenancewindow.h"
#include "ui_maintenancewindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

MaintenanceWindow::MaintenanceWindow(TeamList* nflList, TeamList* expansionList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MaintenanceWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500,100);
    this->setWindowTitle("Maintenance");
    this->setWindowIcon(QIcon(":/images/Images/Icon Image.jpg"));
    this->nflList = nflList;
    this->expansionList = expansionList;
}

MaintenanceWindow::~MaintenanceWindow()
{
    delete ui;
}

//Opens upload file window and allows admin to update file
void MaintenanceWindow::on_pushButton_uploadFile_clicked()
{
    if(nflList->update(QFileDialog::getOpenFileName(this, tr("Upload File"), "C://", "Text File (*.txt) CSV (*.csv)")))
    {
        QMessageBox::information(this, "Success", "Update Successful");
    }
    else
    {
        QMessageBox::information(this, "Failure", "Update Failed");
    }
}

void MaintenanceWindow::on_pushButton_uploadFile2_clicked()
{
    if(expansionList->update(QFileDialog::getOpenFileName(this, tr("Upload File"), "C://", "Text File (*.txt) CSV (*.csv)")))
    {
        QMessageBox::information(this, "Success", "Update Successful");
    }
    else
    {
        QMessageBox::information(this, "Failure", "Update Failed");
    }
}
