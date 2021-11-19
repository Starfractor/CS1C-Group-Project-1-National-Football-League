#include "capacitywindow.h"
#include "ui_capacitywindow.h"
#include <QTableWidget>

CapacityWindow::CapacityWindow(TeamList *nflList, TeamList *expansionList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapacityWindow)
{
    ui->setupUi(this);
    this->setFixedSize(300,100);
    this->setWindowIcon(QIcon(":/images/Images/Icon Image.jpg"));

    buttonState = false;

    nflString = listToCapacity(nflList);
    expansionString = listToCapacity(expansionList);

    displayNFLCapacity();
}

CapacityWindow::~CapacityWindow()
{
    delete ui;
}

void CapacityWindow::displayNFLCapacity()
{
    this->setWindowTitle("NFL Capacity");
    ui->pushButton->setText("Switch to Expansion Capacity");
    ui->label->setText(nflString);
}

void CapacityWindow::displayExpansionCapacity()
{
    this->setWindowTitle("Expansion Capacity");
    ui->pushButton->setText("Switch to NFL Capacity");
    ui->label->setText(expansionString);
}

void CapacityWindow::on_pushButton_clicked()
{
    buttonState = !buttonState;

    if(buttonState)
    {
        displayExpansionCapacity();
    }
    else
    {
        displayNFLCapacity();
    }
}

QString CapacityWindow::listToCapacity(TeamList *list)
{
    int total = 0;
    QString output;

    for(int i = 0; i < list->getTeamList().length(); i++)
    {
        int temp = list->getTeamList().at(i).getSeatingCapacity().remove(',').toInt();
        total += temp;
    }

    output = QString::number(total);

    int n = output.length() - 3;
    while (n > 0) {
       output.insert(n, ",");
       n -= 3;
    }

    output.append(" total seats");

    return output;
}
