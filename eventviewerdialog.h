#ifndef EVENTVIEWERDIALOG_H
#define EVENTVIEWERDIALOG_H

#include <QDialog>
#include "Scheduler.h"

namespace Ui {
class EventViewerDialog;
}

class EventViewerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EventViewerDialog(Scheduler* sch, int m, int d, int y, int ind, QWidget *parent = nullptr);
    ~EventViewerDialog();

private:
    Ui::EventViewerDialog *ui;
    Scheduler* sch;
    int month;
    int day;
    int year;
    int index;
};

#endif // EVENTVIEWERDIALOG_H
