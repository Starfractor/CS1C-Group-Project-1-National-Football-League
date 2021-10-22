#include "contactuswindow.h"
#include "ui_contactuswindow.h"

ContactUsWindow::ContactUsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactUsWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowTitle("Contact Us");
}

ContactUsWindow::~ContactUsWindow()
{
    delete ui;
}
