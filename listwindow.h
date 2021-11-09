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
    explicit ListWindow(TeamList *teamList, QWidget *parent = nullptr);
    ~ListWindow();
private:
    Ui::ListWindow *ui;
};

#endif // LISTWINDOW_H
