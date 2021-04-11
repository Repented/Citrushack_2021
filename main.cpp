#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w(new Scheduler());
    w.show();
    Scheduler sche;
    //sche.addScheduler(3,4,3000,4,"Bob", "The Builder");
    //sche.writeFile();
    return a.exec();
}
