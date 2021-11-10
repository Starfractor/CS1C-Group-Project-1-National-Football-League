#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QWidget>
#include <QIcon>


namespace Ui {
class HelpWindow;
}

class HelpWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HelpWindow(QWidget *parent = nullptr);
    ~HelpWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HelpWindow *ui;
};

#endif // HELPWINDOW_H
