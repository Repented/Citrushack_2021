#ifndef MONTHLYVIEWWINDOW_H
#define MONTHLYVIEWWINDOW_H

#include "Scheduler.h"
#include "mainwindow.h"
#include "modifywindow.h"
#include <QMainWindow>
#include <QVector>
#include <QGridLayout>
#include <QString>
#include <QStringRef>

class MainWindow;

class ModifyWindow;

namespace Ui {
class MonthlyViewWindow;
}

class MonthlyViewWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MonthlyViewWindow(Scheduler* sch, int m, int d, int y, QWidget *parent = nullptr);
    ~MonthlyViewWindow();

private:
    Ui::MonthlyViewWindow *ui;
    Scheduler* sch;
    MainWindow* myMain;
    ModifyWindow* myModify;
    MonthlyViewWindow* reopen;
    void dayLayout();
    int conwayhelperyear(int);
    int conwayhelperyearend(int);
    int conwaydoomsday(int, int);
    int conway(int, int);
private slots:
    void closeEvent(QCloseEvent* event);
    void openModifyWindow(int month);
    void changeMonths();
};

#endif // MONTHLYVIEWWINDOW_H
