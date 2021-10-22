#include "capacitywindow.h"
#include "ui_capacitywindow.h"

CapacityWindow::CapacityWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapacityWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowTitle("Stadium Capacity");
}

CapacityWindow::~CapacityWindow()
{
    delete ui;
}
