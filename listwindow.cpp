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

    nflModel = new TeamListModel(nflList);
    expansionModel = new TeamListModel(expansionList);
    buttonState = false;

    proxyNFLModel = new SortFilterProxyModel();
    proxyExpansionModel = new SortFilterProxyModel();

    proxyNFLModel->setSourceModel(nflModel);
    proxyExpansionModel->setSourceModel(expansionModel);

    tableView = new MultisortTableView();
    ui->verticalLayout->addWidget(tableView);
    tableView->setSortingEnabled(true);
    tableView->setSelectionMode(QAbstractItemView::NoSelection);
    tableView->setModifier(Qt::ShiftModifier);
    tableView->setModel(proxyNFLModel);

    adapter = new HeaderSortingAdapter(tableView);

    tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    tableView->horizontalHeader()->setSectionResizeMode(3, QHeaderView::ResizeToContents);
    tableView->horizontalHeader()->setSectionResizeMode(4, QHeaderView::ResizeToContents);
    tableView->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);
    tableView->horizontalHeader()->setSectionResizeMode(6, QHeaderView::ResizeToContents);
    tableView->horizontalHeader()->setSectionResizeMode(7, QHeaderView::Stretch);
    tableView->horizontalHeader()->setSectionResizeMode(8, QHeaderView::Stretch);

    switchListButton = new QPushButton;
    connect(switchListButton, &QPushButton::clicked, this, &ListWindow::switchListButtonClicked);
    ui->verticalLayout->addWidget(switchListButton);

    displayNFLList();
}

ListWindow::~ListWindow()
{
    delete ui;
}

void ListWindow::switchListButtonClicked()
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
    switchListButton->setText("Switch to Expansion Teams");
    tableView->setModel(proxyNFLModel);
}

void ListWindow::displayExpansionList()
{
    this->setWindowTitle("Expansion Teams List");
    switchListButton->setText("Switch to NFL Teams");
    tableView->setModel(proxyExpansionModel);
}
