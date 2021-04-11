#include "eventviewerdialog.h"
#include "ui_eventviewerdialog.h"

EventViewerDialog::EventViewerDialog(Scheduler* sch, int m, int d, int y, int ind, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventViewerDialog),
    sch(sch), month(m),
    day(d), year(y),
    index(ind)
{
    ui->setupUi(this);
    this->setWindowTitle("Viewing Event");
    ui->plainTextEdit->setPlainText(sch->findPlan(m,d,y,ind).printPlan());
}

EventViewerDialog::~EventViewerDialog()
{
    delete ui;
}
