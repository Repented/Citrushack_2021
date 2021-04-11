#include "editeventwindow.h"
#include "ui_editeventwindow.h"
#include <QButtonGroup>

EditEventWindow::EditEventWindow(Scheduler* sche, Plan tmp, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditEventWindow),
    sch(sche),
    tmp(tmp)
{
    ui->setupUi(this);
    this->setWindowTitle("Edit An Event");
    QButtonGroup buttongroup;
    buttongroup.addButton(ui->reminderRadio);
    buttongroup.addButton(ui->eventRadio);
    buttongroup.setExclusive(true);
    setup();
    connect(ui->editButton, SIGNAL(released()), this, SLOT(editPlan()));
    connect(ui->cancelButton, SIGNAL(released()), this, SLOT(exitEdit()));

    myMod = qobject_cast<ModifyWindow*>(parentWidget());
}

EditEventWindow::~EditEventWindow()
{
    delete ui;
}

void EditEventWindow::editPlan()
{
    Plan temp;
    if (ui->titleLineEdit->text().isEmpty()) {
        ui->errorLabel->setText("Invalid: did you forget a title?");
        return;
    } else if (ui->dateEdit->date().year() < 2000) {
        ui->errorLabel->setText("Invalid: Dates before the year 2000 are invalid");
        return;
    } else if (ui->reminderRadio->isChecked()){
        temp = Plan(Reminder,
                    ui->dateEdit->date().month(),
                    ui->dateEdit->date().day(),
                    ui->dateEdit->date().year(),
                    ui->prioritySpinBox->value(),
                    ui->titleLineEdit->text().toStdString(),
                    ui->noteTextEdit->toPlainText().toStdString()
                );
        if (sch->findIfExists(temp)) {
            ui->errorLabel->setText("Invalid: This reminder already exists!");
            return;
        }
        sch->editScheduler(tmp,temp);
    } else {
        temp = Plan(Event,
                    ui->dateEdit->date().month(),
                    ui->dateEdit->date().day(),
                    ui->dateEdit->date().year(),
                    ui->prioritySpinBox->value(),
                    ui->titleLineEdit->text().toStdString(),
                    ui->noteTextEdit->toPlainText().toStdString()
                );
        if (sch->findIfExists(temp)) {
            ui->errorLabel->setText("Invalid: This event already exists!");
            return;
        }
        sch->editScheduler(tmp,temp);
    }
    myMod->clearText();
    myMod->test();
    this->close();
}

void EditEventWindow::exitEdit()
{
    myMod->toggleEditAndAdd();
    this->close();
}

void EditEventWindow::setup() {
    ui->dateEdit->setDate(QDate(tmp.getYear(),tmp.getMonth(),tmp.getDay()));
    ui->titleLineEdit->setText(QString::fromStdString(tmp.getTitle()));
    ui->prioritySpinBox->setValue(tmp.getPriority());
    if (tmp.getType() == Reminder && !ui->reminderRadio->isChecked()) {
        ui->reminderRadio->setChecked(true);
//        ui->eventRadio->setChecked(false);
    } else if (tmp.getType() == Event && !ui->eventRadio->isChecked()) {
        ui->eventRadio->setChecked(true);
//        ui->reminderRadio->setChecked(false);
    }
}

void EditEventWindow::closeEvent(QCloseEvent* event) {
    myMod->toggleEditAndAdd();
    event->accept();
}
