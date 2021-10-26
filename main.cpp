#include <QApplication>
#include "mainwindow.h"
#include "teamlist.h"

int main(int argc, char *argv[])
{
    //Show main window
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
