#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Scheduler.h"

#include <QMainWindow>
#include "modifywindow.h"
#include "monthlyviewwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MonthlyViewWindow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Scheduler* sch, QWidget *parent = nullptr);
    ~MainWindow();
    void enableOpenCalendarButton();
public slots:
    void openCalendar();
    void updatePlans();
    void openModifyWindow();

private:
    Ui::MainWindow *ui;
    Scheduler* sch = new Scheduler();
    MonthlyViewWindow* myMVWindow;
    ModifyWindow* mowi;
};
#endif // MAINWINDOW_H
