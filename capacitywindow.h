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
    explicit CapacityWindow(TeamList *teamList, TeamList *expansionList, QWidget *parent = nullptr);
    ~CapacityWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CapacityWindow *ui;
    bool buttonState;
    QString teamString;
    QString expansionString;

    void displayTeamCapacity();
    void displayExpansionCapacity();
};

#endif // CAPACITYWINDOW_H
