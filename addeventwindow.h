#ifndef ADDEVENTWINDOW_H
#define ADDEVENTWINDOW_H

#include <QMainWindow>
#include "Scheduler.h"
#include "modifywindow.h"
#include <QCloseEvent>

namespace Ui {
class AddEventWindow;
}

class ModifyWindow;

class AddEventWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddEventWindow(Scheduler*sch, QWidget *parent = nullptr);
    ~AddEventWindow();

private:
    Ui::AddEventWindow *ui;
    Scheduler* sch;

    ModifyWindow* myMod;

private slots:
    void addToSchedule();
    void exitAdd();
    void closeEvent(QCloseEvent* event);
};

#endif // ADDEVENTWINDOW_H
