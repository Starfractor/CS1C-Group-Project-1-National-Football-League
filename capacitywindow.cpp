#include "capacitywindow.h"
#include "ui_capacitywindow.h"
#include <QTableWidget>

CapacityWindow::CapacityWindow(TeamList *teamList, TeamList *expansionList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapacityWindow)
{
    ui->setupUi(this);
    this->setFixedSize(300,100);
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));

    buttonState = false;
    int teamCapacity = 0;
    int expansionCapacity = 0;

    for(int i = 0; i < teamList->getTeamList().length(); i++)
    {
        int temp = teamList->getTeamList().at(i).getSeatingCapacity().remove(',').toInt();
        teamCapacity += temp;
    }
    for(int i = 0; i < expansionList->getTeamList().length(); i++)
    {
        int temp = expansionList->getTeamList().at(i).getSeatingCapacity().remove(',').toInt();
        expansionCapacity += temp;
    }

    teamString = QString::number(teamCapacity);
    expansionString = QString::number(expansionCapacity);

    int n = teamString.length() - 3;
    while (n > 0) {
       teamString.insert(n, ",");
       n -= 3;
    }
    n = expansionString.length() - 3;
    while (n > 0) {
       expansionString.insert(n, ",");
       n -= 3;
    }

    teamString.append(" total seats");
    expansionString.append(" total seats");

    displayTeamCapacity();
}

CapacityWindow::~CapacityWindow()
{
    delete ui;
}

void CapacityWindow::displayTeamCapacity()
{
    this->setWindowTitle("NFL Capacity");
    ui->pushButton->setText("Switch to Expansion Capacity");
    ui->label->setText(teamString);
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
        displayTeamCapacity();
    }
}

