#include "maintenancewindow.h"
#include "ui_maintenancewindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

MaintenanceWindow::MaintenanceWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MaintenanceWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500,500);
    this->setWindowTitle("Maintenance");
}

MaintenanceWindow::~MaintenanceWindow()
{
    delete ui;
}

//Opens upload file window and allows admin to update file
void MaintenanceWindow::on_pushButton_uploadFile_clicked()
{
    QFile uploadFile = QFileDialog::getOpenFileName(this, tr("Upload File"), "C://", "Text File (*.txt)");

    if(!uploadFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this, "Error", uploadFile.errorString());
    }

    QTextStream in(&uploadFile);

    ui->textBrowser->setText((in.readAll()));

}

