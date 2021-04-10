#ifndef MONTHLYVIEWWINDOW_H
#define MONTHLYVIEWWINDOW_H

#include "Scheduler.h"
#include "mainwindow.h"
#include <QMainWindow>
#include <QVector>
#include <QGridLayout>
#include <QString>
#include <QStringRef>

class MainWindow;

namespace Ui {
class MonthlyViewWindow;
}

class MonthlyViewWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MonthlyViewWindow(Scheduler* sch, QWidget *parent = nullptr);
    ~MonthlyViewWindow();

private:
    Ui::MonthlyViewWindow *ui;
    Scheduler* sch;
    MainWindow* myMain;
    void dayLayout();
    int conwayhelperyear(int);
    int conwayhelperyearend(int);
    int conwaydoomsday(int, int);
    int conway(int, int);
private slots:
    void closeEvent(QCloseEvent* event);
};

#endif // MONTHLYVIEWWINDOW_H