#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QWidget>
#include <QPushButton>
#include "teamlist.h"

namespace Ui {
class ListWindow;
}

class ListWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ListWindow(TeamList *teamList, TeamList *expansionList, QWidget *parent = nullptr);
    ~ListWindow();
private slots:
    void on_pushButton_clicked();
private:
    Ui::ListWindow *ui;
    TeamList *teamList;
    TeamList *expansionList;
    bool buttonState;

    void displayTeamList();
    void displayExpansionList();
};

#endif // LISTWINDOW_H
