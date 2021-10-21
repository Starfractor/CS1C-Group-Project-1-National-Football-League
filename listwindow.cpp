#include "listwindow.h"
#include "ui_listwindow.h"

ListWindow::ListWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);
}

ListWindow::~ListWindow()
{
    delete ui;
}
