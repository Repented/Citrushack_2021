#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>

MainWindow::MainWindow(Scheduler* sche, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    sch = sche;
    ui->setupUi(this);
    connect(ui->openCalendarButton, SIGNAL(clicked()), this, SLOT(openCalendar()));
    connect(ui->updateReminderButton, SIGNAL(clicked()), this, SLOT(updatePlans()));
    connect(ui->modify, SIGNAL(clicked()), this, SLOT(openModifyWindow()));
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
    myMVWindow = new MonthlyViewWindow(sch, this);
    ui->openCalendarButton->setEnabled(false);
    myMVWindow->show();
}

void MainWindow::updatePlans() {
    //TODO: make it work ig
    //sch->findAllPlans(1,2,3);
}

void MainWindow::openModifyWindow(){
    mowi = new ModifyWindow(sch, this);
    mowi->show();
}
