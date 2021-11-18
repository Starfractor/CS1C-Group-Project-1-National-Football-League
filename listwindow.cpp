#include "listwindow.h"
#include "ui_listwindow.h"
#include "teamlist.h"
#include "sortfilterproxymodel.h"
#include "qheaderview.h"

#include <QPushButton>
#include <QSortFilterProxyModel>

ListWindow::ListWindow(TeamList *nflList, TeamList *expansionList, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/pictures/Images/Icon Image.jpg"));

    tableView = new MultisortTableView();
    ui->verticalLayout->addWidget(tableView);
    tableView->setSortingEnabled(true);
    tableView->setSelectionMode(QAbstractItemView::NoSelection);
    tableView->setModifier(Qt::ShiftModifier);

    QHeaderView* header = tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::ResizeToContents);

    nflModel = new TeamListModel(nflList);
    expansionModel = new TeamListModel(expansionList);
    buttonState = false;

    proxyNFLModel = new SortFilterProxyModel();
    proxyExpansionModel = new SortFilterProxyModel();

    proxyNFLModel->setSourceModel(nflModel);
    proxyExpansionModel->setSourceModel(expansionModel);

    adapter = new HeaderSortingAdapter(tableView);

    switchList = new QPushButton;
    connect(switchList, &QPushButton::clicked, this, &ListWindow::switchListClicked);
    ui->verticalLayout->addWidget(switchList);

    displayNFLList();
}

ListWindow::~ListWindow()
{
    delete ui;
}

void ListWindow::switchListClicked()
{
    buttonState = !buttonState;

    if(buttonState)
    {
        displayExpansionList();
    }
    else
    {
        displayNFLList();
    }
}

void ListWindow::displayNFLList()
{
    this->setWindowTitle("NFL Teams List");
    switchList->setText("Switch to Expansion Teams");
    tableView->setModel(proxyNFLModel);
}

void ListWindow::displayExpansionList()
{
    this->setWindowTitle("Expansion Teams List");
    switchList->setText("Switch to NFL Teams");
    tableView->setModel(proxyExpansionModel);
}
