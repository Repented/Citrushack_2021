#ifndef EDITEVENTWINDOW_H
#define EDITEVENTWINDOW_H

#include <QMainWindow>
#include "Scheduler.h"
#include "modifywindow.h"
#include <QCloseEvent>

namespace Ui {
class EditEventWindow;
}

class ModifyWindow;

class EditEventWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditEventWindow(Scheduler* sch, Plan tmp, QWidget *parent = nullptr);
    ~EditEventWindow();

private:
    Ui::EditEventWindow *ui;
    Scheduler* sch;
    Plan tmp;

    ModifyWindow* myMod;

    void setup();
private slots:
    void editPlan();
    void exitEdit();
    void closeEvent(QCloseEvent* event);
};

#endif // EDITEVENTWINDOW_H
