#ifndef MAINTENANCEWINDOW_H
#define MAINTENANCEWINDOW_H

#include <QWidget>

namespace Ui {
class MaintenanceWindow;
}

class MaintenanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MaintenanceWindow(QWidget *parent = nullptr);
    ~MaintenanceWindow();

private:
    Ui::MaintenanceWindow *ui;
};

#endif // MAINTENANCEWINDOW_H
