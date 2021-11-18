#ifndef CAPACITYWINDOW_H
#define CAPACITYWINDOW_H

#include <QWidget>
#include <teamlist.h>

namespace Ui {
class CapacityWindow;
}

class CapacityWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CapacityWindow(TeamList *nflList, TeamList *expansionList, QWidget *parent = nullptr);
    ~CapacityWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CapacityWindow *ui;
    bool buttonState;
    QString nflString;
    QString expansionString;

    void displayNFLCapacity();
    void displayExpansionCapacity();
    QString listToCapacity(TeamList *);
};

#endif // CAPACITYWINDOW_H
