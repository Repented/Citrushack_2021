#ifndef MODIFYWINDOW_H
#define MODIFYWINDOW_H

#include "addeventwindow.h"
#include <QWidget>

namespace Ui {
class ModifyWindow;
}
class addeventwindow;

class ModifyWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyWindow(Scheduler* sch, QWidget *parent = nullptr);
    ~ModifyWindow();

private:
    Ui::ModifyWindow *ui;
    addeventwindow* myAddEventWindow;
    Scheduler* scheduler;

private slots:
    void addEvent();
    void EditEvent();
    void RemoveEvent();
};

#endif // MODIFYWINDOW_H
