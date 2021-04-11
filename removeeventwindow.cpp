#include "removeeventwindow.h"
#include "ui_removeeventwindow.h"

removeeventwindow::removeeventwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::removeeventwindow)
{
    ui->setupUi(this);
}

removeeventwindow::~removeeventwindow()
{
    delete ui;
}
