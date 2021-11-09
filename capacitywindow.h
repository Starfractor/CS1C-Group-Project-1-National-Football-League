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
    explicit CapacityWindow(TeamList *teamList, QWidget *parent = nullptr);
    ~CapacityWindow();

private:
    Ui::CapacityWindow *ui;
};

#endif // CAPACITYWINDOW_H
