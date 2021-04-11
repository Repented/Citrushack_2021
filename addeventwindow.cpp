#include "addeventwindow.h"
#include "ui_addeventwindow.h"
#include <QButtonGroup>

AddEventWindow::AddEventWindow(Scheduler* sch, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddEventWindow),
    sch(sch)
{
    ui->setupUi(this);
    this->setWindowTitle("Add An Event");
    QButtonGroup buttongroup;
    buttongroup.addButton(ui->reminderRadio);
    buttongroup.addButton(ui->eventRadio);
    buttongroup.setExclusive(true);
    connect(ui->addButton, SIGNAL(released()), this, SLOT(addToSchedule()));
    connect(ui->cancelButton, SIGNAL(released()), this, SLOT(exitAdd()));

    myMod = qobject_cast<ModifyWindow*>(parentWidget());
}

AddEventWindow::~AddEventWindow()
{
    delete ui;
}

void AddEventWindow::addToSchedule()
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
        sch->addScheduler(Reminder,
            ui->dateEdit->date().month(),
            ui->dateEdit->date().day(),
            ui->dateEdit->date().year(),
            ui->prioritySpinBox->value(),
            ui->titleLineEdit->text().toStdString(),
            ui->noteTextEdit->toPlainText().toStdString()
        );
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
        sch->addScheduler(Event,
            ui->dateEdit->date().month(),
            ui->dateEdit->date().day(),
            ui->dateEdit->date().year(),
            ui->prioritySpinBox->value(),
            ui->titleLineEdit->text().toStdString(),
            ui->noteTextEdit->toPlainText().toStdString()
        );
    }
    ModifyWindow* modWindow = qobject_cast<ModifyWindow*>(parent());
    modWindow->clearText();
    modWindow->test();
    this->close();
}

void AddEventWindow::exitAdd()
{
    myMod->toggleEditAndAdd();
    this->close();
}

void AddEventWindow::closeEvent(QCloseEvent* event) {
    myMod->toggleEditAndAdd();
    event->accept();
}
