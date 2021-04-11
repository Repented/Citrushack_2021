#include "modifywindow.h"
#include "ui_modifywindow.h"

ModifyWindow::ModifyWindow(Scheduler* sch ,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyWindow),
    scheduler(sch)
{
    ui->setupUi(this);
    connect((ui->addEventButton),SIGNAL(clicked()), this, SLOT(addEvent()));
    connect((ui->EditEventButton),SIGNAL(clicked()), this, SLOT(EditEvent()));
    connect((ui->RemoveEventButton),SIGNAL(clicked()), this, SLOT(RemoveEvent()));
}

ModifyWindow::~ModifyWindow()
{
    delete ui;
}

//Dont want people to add more events of the same time
//Can only add from the year 2000 and on
void ModifyWindow::addEvent(){
    myAddEventWindow = new addeventwindow(scheduler, this);
    myAddEventWindow->show();
}

//Check if someone edits event check to make sure an event is not the same as another event
//Need code for Find Plan for scheduler
//cannot go below year 2000
void ModifyWindow::EditEvent(){}

//If removed called and event dont exist do nothing and return
void ModifyWindow::RemoveEvent(){}

