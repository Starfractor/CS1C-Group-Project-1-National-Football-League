#include "helpwindow.h"
#include "ui_helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpWindow)
{
    ui->setupUi(this);
    this->setFixedSize(600,400);
    this->setWindowTitle("Help");
    this->setWindowIcon(QIcon(":/images/Images/Icon Image.jpg"));
}

HelpWindow::~HelpWindow()
{
    delete ui;
}
