#include "capacitywindow.h"
#include "ui_capacitywindow.h"
#include <QTableWidget>

CapacityWindow::CapacityWindow(TeamList *teamList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapacityWindow)
{
    ui->setupUi(this);
    this->setFixedSize(200,100);
    this->setWindowTitle("Stadium Capacity");

    int capacity = 0;

    for(int i = 0; i < teamList->getTeamList().length(); i++)
    {
        int temp = teamList->getTeamList()[i].getSeatingCapacity().remove(',').toInt();
        capacity += temp;
    }

    QString capacityString = QString::number(capacity);

    int n = capacityString.length() - 3;
    while (n > 0) {
       capacityString.insert(n, ",");
       n -= 3;
    }

    capacityString.append(" total seats");

    ui->label->setText(capacityString);
}

CapacityWindow::~CapacityWindow()
{
    delete ui;
}
