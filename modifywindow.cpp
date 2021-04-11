#include "modifywindow.h"
#include "ui_modifywindow.h"

ModifyWindow::ModifyWindow(Scheduler* sche, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModifyWindow)
{
    sch = sche;
    ui->setupUi(this);
}

ModifyWindow::~ModifyWindow()
{
    delete ui;
}
