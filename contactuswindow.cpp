#include "contactuswindow.h"
#include "ui_contactuswindow.h"

ContactUsWindow::ContactUsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactUsWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,200);
    this->setWindowTitle("Contact Us");
    this->setWindowIcon(QIcon(":/images/Images/Icon Image.jpg"));
}

ContactUsWindow::~ContactUsWindow()
{
    delete ui;
}
