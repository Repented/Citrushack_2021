#include "modifywindow.h"
#include "ui_modifywindow.h"
#include <QAbstractListModel>

ModifyWindow::ModifyWindow(Scheduler* sche, int year, int month, int day, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModifyWindow)
{
    sch = sche;
    lookup = day;
    ui->setupUi(this);
    this->setWindowTitle("Events and Reminders");
    connect(ui->viewButton, SIGNAL(released()), this, SLOT(openEvent()));
    connect(ui->addEventButton,SIGNAL(released()), this, SLOT(openAddEvent()));
    connect(ui->editEventButton,SIGNAL(released()), this, SLOT(openEditEvent()));
    connect(ui->refreshButton, SIGNAL(released()), this, SLOT(refreshEvents()));
    connect(ui->removeEventButton, SIGNAL(released()), this, SLOT(removeEvent()));
//    connect(ui->dateEdit, SIGNAL(QDateEdit::valueChanged, this, SLOT(toggleRemoveButton()));
    ui->dateEdit->setDate(QDate(year,month,lookup));
    test();
}

ModifyWindow::~ModifyWindow()
{
    delete ui;
}

void ModifyWindow::test() {
//    ui->addButton
    m = ui->dateEdit->date().month();
    y = ui->dateEdit->date().year();
    d = ui->dateEdit->date().day();
    plansThisDay = sch->findAllPlans(m,d,y);
    QString tempString;
//    QStringList tempStringList;
    for (unsigned i = 0; i < plansThisDay.size(); i++) {
        if (plansThisDay.at(i).getType() == Reminder) {
            tempString.append("Reminder titled: ");
            tempString.append("\"");
            tempString.append(QString::fromStdString(plansThisDay.at(i).getTitle()));
            tempString.append("\"");
        } else {
            tempString.append("Event titled: ");
            tempString.append("\"");
            tempString.append(QString::fromStdString(plansThisDay.at(i).getTitle()));
            tempString.append("\"");
        }
//        tempStringList.append(tempString);
//        model->appendRow(new QStandardItem(tempString));
        ui->listView->addItem(tempString);
        tempString = "";
    }
}

void ModifyWindow::toggleEditAndAdd() {
    if (ui->addEventButton->isEnabled() && ui->editEventButton->isEnabled()) {
        ui->editEventButton->setEnabled(false);
        ui->addEventButton->setEnabled(false);
    } else {
        ui->editEventButton->setEnabled(true);
        ui->addEventButton->setEnabled(true);
    }
}

void ModifyWindow::clearText()
{
    ui->listView->clear();
}

void ModifyWindow::removeEvent()
{
    if (ui->listView->currentItem()) {
        Plan temp = sch->findPlan(m,d,y,ui->listView->currentRow());
        sch->getScheduler().at(m-1)->removePlan(temp);
        qDebug() << ui->listView->currentRow();
//        sch->getScheduler().at(m)->getPlanList().at(d).erase(sch->getScheduler().at(m)->getPlanList().at(d).begin() + ui->listView->currentRow());
//        sch->removePlanSched(temp.getMonth(),temp.getDay(),temp.getYear(),temp.getTitle(),temp.getNote(),temp.getType());
//        temp = sch->findPlan(m,d,y,ui->listView->currentRow());
//        qDebug() << temp.printPlan();
//        sch->getScheduler().clear();
        sch->printAllPlans();
        clearText();
        test();
    }
}

void ModifyWindow::refreshEvents() {
    clearText();
    test();
}

void ModifyWindow::openAddEvent()
{
    myAddWindow = new AddEventWindow(sch, this);
    toggleEditAndAdd();
    myAddWindow->show();
}

void ModifyWindow::openEditEvent() {
    if (ui->listView->currentItem()) {
        return;
    }
    myEdit = new EditEventWindow(sch, sch->findPlan(m,d,y,ui->listView->currentRow()), this);
    toggleEditAndAdd();
    myEdit->show();
}

void ModifyWindow::openEvent()
{
    if (ui->listView->currentItem()) {
        myEvent = new EventViewerDialog(sch, QDate::currentDate().month(),lookup,QDate::currentDate().year(), ui->listView->currentRow(),this);
        myEvent->show();
    }
}
