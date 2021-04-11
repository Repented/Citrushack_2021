#include "editeventwindow.h"
#include "ui_editeventwindow.h"

editeventwindow::editeventwindow(Scheduler* sch, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editeventwindow),
    scheduler(sch)
{
    ui->setupUi(this);
    connect(ui->addeventbutton, SIGNAL(clicked()), this, SLOT(addEvent()));
    //if(ui->lineEdit->text().isEmpty()){}
    QButtonGroup group;
    group.addButton(ui->radioButton);
    group.addButton(ui->radioButton_2);
    group.setExclusive(true);
}

editeventwindow::~editeventwindow()
{
    delete ui;
}
