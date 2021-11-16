#include "listwindow.h"
#include "ui_listwindow.h"
#include "teamlist.h"

#include <QPushButton>

ListWindow::ListWindow(TeamList *teamList, TeamList *expansionList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));

    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);

    this->teamList = teamList;
    this->expansionList = expansionList;
    buttonState = false;

    displayTeamList();
}

ListWindow::~ListWindow()
{
    delete ui;
}

void ListWindow::on_pushButton_clicked()
{
    buttonState = !buttonState;

    if(buttonState)
    {
        displayExpansionList();
    }
    else
    {
        displayTeamList();
    }
}

void ListWindow::displayTeamList()
{
    this->setWindowTitle("Teams List");

    ui->pushButton->setText("Switch to Expansion Teams");

    ui->tableWidget->setSortingEnabled(false);
    ui->tableWidget->setRowCount(teamList->getTeamList().length());

    for(int i = 0; i < teamList->getTeamList().size(); i++)
    {
        for(int j = 0; j < 9; j++)
        {
            switch(j)
            {
            case 0:
                ui->tableWidget->setItem(i, 0, new QTableWidgetItem(teamList->getTeamList().at(i).getTeamName()));
                break;
            case 1:
                ui->tableWidget->setItem(i, 1, new QTableWidgetItem(teamList->getTeamList().at(i).getStadiumName()));
                break;
            case 2:
                ui->tableWidget->setItem(i, 2, new QTableWidgetItem(teamList->getTeamList().at(i).getSeatingCapacity()));
                break;
            case 3:
                ui->tableWidget->setItem(i, 3, new QTableWidgetItem(teamList->getTeamList().at(i).getLocation()));
                break;
            case 4:
                ui->tableWidget->setItem(i, 4, new QTableWidgetItem(teamList->getTeamList().at(i).getConference()));
                break;
            case 5:
                ui->tableWidget->setItem(i, 5, new QTableWidgetItem(teamList->getTeamList().at(i).getDivision()));
                break;
            case 6:
                ui->tableWidget->setItem(i, 6, new QTableWidgetItem(teamList->getTeamList().at(i).getSurfaceType()));
                break;
            case 7:
                ui->tableWidget->setItem(i, 7, new QTableWidgetItem(teamList->getTeamList().at(i).getStadiumRoofType()));
                break;
            case 8:
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setData(Qt::DisplayRole, teamList->getTeamList().at(i).getDateOpened());
                ui->tableWidget->setItem(i, 8, item);
                break;
            }
            }
        }
    }

    ui->tableWidget->setSortingEnabled(true);
}

void ListWindow::displayExpansionList()
{
    this->setWindowTitle("Expansion Teams List");

    ui->pushButton->setText("Switch to NFL Teams");

    ui->tableWidget->setSortingEnabled(false);
    ui->tableWidget->setRowCount(expansionList->getTeamList().length());

    for(int i = 0; i < expansionList->getTeamList().size(); i++)
    {
        for(int j = 0; j < 9; j++)
        {
            switch(j)
            {
            case 0:
                ui->tableWidget->setItem(i, 0, new QTableWidgetItem(expansionList->getTeamList().at(i).getTeamName()));
                break;
            case 1:
                ui->tableWidget->setItem(i, 1, new QTableWidgetItem(expansionList->getTeamList().at(i).getStadiumName()));
                break;
            case 2:
                ui->tableWidget->setItem(i, 2, new QTableWidgetItem(expansionList->getTeamList().at(i).getSeatingCapacity()));
                break;
            case 3:
                ui->tableWidget->setItem(i, 3, new QTableWidgetItem(expansionList->getTeamList().at(i).getLocation()));
                break;
            case 4:
                ui->tableWidget->setItem(i, 4, new QTableWidgetItem(expansionList->getTeamList().at(i).getConference()));
                break;
            case 5:
                ui->tableWidget->setItem(i, 5, new QTableWidgetItem(expansionList->getTeamList().at(i).getDivision()));
                break;
            case 6:
                ui->tableWidget->setItem(i, 6, new QTableWidgetItem(expansionList->getTeamList().at(i).getSurfaceType()));
                break;
            case 7:
                ui->tableWidget->setItem(i, 7, new QTableWidgetItem(expansionList->getTeamList().at(i).getStadiumRoofType()));
                break;
            case 8:
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setData(Qt::DisplayRole, expansionList->getTeamList().at(i).getDateOpened());
                ui->tableWidget->setItem(i, 8, item);
                break;
            }
            }
        }
    }

    ui->tableWidget->setSortingEnabled(true);
}
