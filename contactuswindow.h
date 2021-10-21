#ifndef CONTACTUSWINDOW_H
#define CONTACTUSWINDOW_H

#include <QWidget>

namespace Ui {
class ContactUsWindow;
}

class ContactUsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ContactUsWindow(QWidget *parent = nullptr);
    ~ContactUsWindow();

private:
    Ui::ContactUsWindow *ui;
};

#endif // CONTACTUSWINDOW_H
