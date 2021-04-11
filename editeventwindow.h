#ifndef EDITEVENTWINDOW_H
#define EDITEVENTWINDOW_H

#include "Scheduler.h"
#include <QWidget>

namespace Ui {
class editeventwindow;
}

class editeventwindow : public QWidget
{
    Q_OBJECT

public:
    explicit editeventwindow(Scheduler* sch, QWidget *parent = nullptr);
    ~editeventwindow();

private:
    Ui::editeventwindow *ui;
    Scheduler* scheduler;
};

#endif // EDITEVENTWINDOW_H
