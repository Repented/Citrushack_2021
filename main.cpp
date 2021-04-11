#include "mainwindow.h"

#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scheduler* sche;
    sche = new Scheduler();
//    sche.getScheduler().at(2);
//        sche->getScheduler().at(0) = (new PlanContainer(31));
//        sche->addScheduler(4,4,2021,4,"Hello","World");
//        sche->printYearPlans();
//        sche->readFile();
//        sche->writeFile();
//    sche.addScheduler(3,4,3000,4,"Hello", "Hello World");
//    sche.printYearPlans();
//    sche.writeFile();
//        sche->getScheduler().at(0)->removePlan(Plan(Reminder, 4,4,2021,4,"Hello","World"));
//                removePlan(Plan(Reminder, 1,4,3000,4,"Hello","World"));
//        sche.readFile();
//        sche->printYearPlans();
        MainWindow w(sche);
        w.show();
    return a.exec();
}
