#ifndef ADDEVENTWINDOW_H
#define ADDEVENTWINDOW_H

#include "Scheduler.h"
#include <QWidget>

namespace Ui {
class addeventwindow;
}

class addeventwindow : public QWidget
{
    Q_OBJECT

public:
    explicit addeventwindow(Scheduler* sche, QWidget *parent = nullptr);
    ~addeventwindow();

private:
    Ui::addeventwindow *ui;
    Scheduler* scheduler;

private slots:
    void addEvent();
};

#endif // ADDEVENTWINDOW_H
