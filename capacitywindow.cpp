#include "capacitywindow.h"
#include "ui_capacitywindow.h"

CapacityWindow::CapacityWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapacityWindow)
{
    ui->setupUi(this);
}

CapacityWindow::~CapacityWindow()
{
    delete ui;
}
