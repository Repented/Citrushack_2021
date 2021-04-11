#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>
#include <QCloseEvent>

MainWindow::MainWindow(Scheduler* sche, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    sch = sche;
    sch->readFile();
    ui->setupUi(this);
    this->setWindowTitle("Zen Calendar");
    connect(ui->openCalendarButton, SIGNAL(clicked()), this, SLOT(openCalendar()));
    connect(ui->updateReminderButton, SIGNAL(clicked()), this, SLOT(updatePlans()));
    connect(ui->saveQuitButton, SIGNAL(clicked()), this, SLOT(saveQuit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enableOpenCalendarButton() {
    ui->openCalendarButton->setEnabled(true);
}

void MainWindow::openCalendar() {
    //TODO: add a window that shows a month and allows you to click on each to find the day
    myMVWindow = new MonthlyViewWindow(sch, QDate::currentDate().month(), QDate::currentDate().day(), QDate::currentDate().year(),this);
    ui->openCalendarButton->setEnabled(false);
    myMVWindow->show();
}

void MainWindow::updatePlans() {
    //TODO: make it work ig
    //sch->findAllPlans(1,2,3);
    ui->eventList->clear();
    ui->reminderList->clear();
    vector<Plan> temp = sch->findAllPlans(ui->reminderDateEdit->date().month(),ui->reminderDateEdit->date().day(), ui->reminderDateEdit->date().year());
    QString tempString;
    for (unsigned i = 0; i < temp.size(); i++) {
        tempString.append(temp.at(i).printPlan());
        if (temp.at(i).getType() == Reminder) {
            ui->reminderList->addItem(tempString);
        } else {
            ui->eventList->addItem(tempString);
        }
        tempString = "";
    }
}

void MainWindow::saveQuit() {
    sch->writeFile();
    this->close();
}

void MainWindow::closeEvent(QCloseEvent *event) {
    sch->writeFile();
    event->accept();
}
