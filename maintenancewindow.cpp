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
    this->setFixedSize(500,500);
    this->setWindowTitle("Maintenance");
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));
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
    nflList->update(QFileDialog::getOpenFileName(this, tr("Upload File"), "C://", "Text File (*.txt) CSV (*.csv)"));
}

void MaintenanceWindow::on_pushButton_uploadFile2_clicked()
{
    expansionList->update(QFileDialog::getOpenFileName(this, tr("Upload File"), "C://", "Text File (*.txt) CSV (*.csv)"));
}
