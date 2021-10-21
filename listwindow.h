#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QWidget>

namespace Ui {
class ListWindow;
}

class ListWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ListWindow(QWidget *parent = nullptr);
    ~ListWindow();

private:
    Ui::ListWindow *ui;
};

#endif // LISTWINDOW_H
