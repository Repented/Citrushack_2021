#include "addeventwindow.h"
#include "ui_addeventwindow.h"
#include "QButtonGroup"

addeventwindow::addeventwindow(Scheduler* sch, QWidget *parent) :
    QWidget(parent),
    scheduler(sch),
    ui(new Ui::addeventwindow)
{
    ui->setupUi(this);
    connect(ui->addeventbutton, SIGNAL(clicked()), this, SLOT(addEvent()));
    //if(ui->lineEdit->text().isEmpty()){}
    QButtonGroup group;
    group.addButton(ui->radioButton);
    group.addButton(ui->radioButton_2);
    group.setExclusive(true);
}

addeventwindow::~addeventwindow()
{
    delete ui;
}

//Check validity of the date
//Check if there is text in title and note
//Check priority 1-5 bound
//Change spinbox min and max
//Check if it is a reminder or an event
//Look at the documentation for QButtonGroup
//Save Event to scheduler
void addeventwindow::addEvent(){
    int month, day, year;
    month = ui->dateEdit->date().month();
    day = ui->dateEdit->date().day();
    year = ui->dateEdit->date().year();
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if(day > 31 || day < 1){
            return;
        }
    } else if(month == 4 || month == 6 || month == 9 || month == 11){
        if(day > 30 || day < 1){
            return;
        }
    } else if(month == 2){
        if((day > 29 && (year%4 == 0)) || day < 1){
            return;
        }
    } else if(month == 2){
        if((day > 28 && (year%4 != 0)) || day < 1){
             return;
        }
    } else {
        return;
    }
    string title, note;
    if(ui->lineEdit->text().isEmpty()){
        return;
    } else {
        title = ui->lineEdit->text().toStdString();
    }
    note = ui->textEdit->toPlainText().toStdString();
    int priority = ui->spinBox->value();
    if(priority < 1 || priority > 5){
        return;
    }
    //Check for event or reminder
    //change the documentation for QButtonGroup
    //int month, int day, int year, int priority, string ti, string description

    if(ui->radioButton->isChecked()){
        scheduler->createPlan(Event, month, day, year, priority, title, note);
    }
    if(ui->radioButton_2->isChecked()){
        scheduler->createPlan(Reminder, month, day, year, priority, title, note);
    }
    this->close();
}
