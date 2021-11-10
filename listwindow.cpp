#include "listwindow.h"
#include "ui_listwindow.h"
#include "teamlist.h"

#include <QPushButton>

ListWindow::ListWindow(TeamList *list, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Teams List");
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));

    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidget->setRowCount(list->getTeamList().length());

    for(int i = 0; i < list->getTeamList().size(); i++)
    {
        for(int j = 0; j < 9; j++)
        {
            switch(j)
            {
            case 0:
                ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list->getTeamList()[i].getTeamName()));
                break;
            case 1:
                ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list->getTeamList()[i].getStadiumName()));
                break;
            case 2:
                ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list->getTeamList()[i].getSeatingCapacity()));
                break;
            case 3:
                ui->tableWidget->setItem(i, 3, new QTableWidgetItem(list->getTeamList()[i].getLocation()));
                break;
            case 4:
                ui->tableWidget->setItem(i, 4, new QTableWidgetItem(list->getTeamList()[i].getConference()));
                break;
            case 5:
                ui->tableWidget->setItem(i, 5, new QTableWidgetItem(list->getTeamList()[i].getDivision()));
                break;
            case 6:
                ui->tableWidget->setItem(i, 6, new QTableWidgetItem(list->getTeamList()[i].getSurfaceType()));
                break;
            case 7:
                ui->tableWidget->setItem(i, 7, new QTableWidgetItem(list->getTeamList()[i].getStadiumRoofType()));
                break;
            case 8:
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setData(Qt::DisplayRole, list->getTeamList()[i].getDateOpened());
                ui->tableWidget->setItem(i, 8, item);
                break;
            }
            }
        }
    }

}

ListWindow::~ListWindow()
{
    delete ui;
}
