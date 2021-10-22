#include "helpwindow.h"
#include "ui_helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowTitle("Help");
}

HelpWindow::~HelpWindow()
{
    delete ui;
}
