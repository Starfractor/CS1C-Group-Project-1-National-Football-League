#include "capacitywindow.h"
#include "ui_capacitywindow.h"
#include <QTableWidget>

CapacityWindow::CapacityWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapacityWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1000,700);
    this->setWindowTitle("Stadium Capacity");

    QTableWidgetItem *newItem = new QTableWidgetItem("Test");
    ui->tableWidget->setItem(0, 0, newItem);
}

CapacityWindow::~CapacityWindow()
{
    delete ui;
}
