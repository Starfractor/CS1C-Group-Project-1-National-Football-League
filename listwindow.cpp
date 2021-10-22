#include "listwindow.h"
#include "ui_listwindow.h"

ListWindow::ListWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    this->setWindowTitle("Teams List");
}

ListWindow::~ListWindow()
{
    delete ui;
}
