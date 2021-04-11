#ifndef MODIFYWINDOW_H
#define MODIFYWINDOW_H

#include <QMainWindow>
#include "monthlyviewwindow.h"

namespace Ui {
class ModifyWindow;
}

class ModifyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModifyWindow(Scheduler* sch, QWidget *parent = nullptr);
    ~ModifyWindow();

private:
    Ui::ModifyWindow *ui;
    Scheduler* sch;
};

#endif // MODIFYWINDOW_H
