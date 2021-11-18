#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QSortFilterProxyModel>
#include "teamlist.h"
#include "teamlistmodel.h"
#include "headersortingadapter.h"
#include "sortfilterproxymodel.h"
#include "multisorttableview.h"

namespace Ui {
class ListWindow;
}

class ListWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ListWindow(TeamList *nflList, TeamList *expansionList, QWidget *parent = nullptr);
    ~ListWindow();
private slots:
    void switchListClicked();
private:
    Ui::ListWindow *ui;
    TeamListModel *nflModel;
    TeamListModel *expansionModel;
    SortFilterProxyModel *proxyNFLModel;
    SortFilterProxyModel *proxyExpansionModel;
    HeaderSortingAdapter *adapter;
    MultisortTableView *tableView;
    QPushButton *switchList;

    bool buttonState;

    void displayNFLList();
    void displayExpansionList();
};

#endif // LISTWINDOW_H
