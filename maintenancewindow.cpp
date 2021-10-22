#include "maintenancewindow.h"
#include "ui_maintenancewindow.h"

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
