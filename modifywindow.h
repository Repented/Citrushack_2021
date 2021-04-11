#ifndef MODIFYWINDOW_H
#define MODIFYWINDOW_H

#include <QMainWindow>
//#include <QStringListModel>
//#include "monthlyviewwindow.h"
#include "addeventwindow.h"
#include "Scheduler.h"
#include "eventviewerdialog.h"
#include "editeventwindow.h"

namespace Ui {
class ModifyWindow;
}

class AddEventWindow;

class EventViewerDialog;

class EditEventWindow;

class ModifyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModifyWindow(Scheduler* sch, int year, int month, int day, QWidget *parent = nullptr);
    ~ModifyWindow();
    void test();
    void clearText();
    void toggleEditAndAdd();

private:
    Ui::ModifyWindow *ui;
    Scheduler* sch;
    int lookup;
    vector<Plan> plansThisDay;

    AddEventWindow* myAddWindow;
    EventViewerDialog* myEvent;
    EditEventWindow* myEdit;

    int m,y,d;

private slots:
    void openAddEvent();
    void openEditEvent();
    void openEvent();

    void removeEvent(); //remove and then refind all plans
    void refreshEvents();
};

#endif // MODIFYWINDOW_H
