#include "monthlyviewwindow.h"
#include "ui_monthlyviewwindow.h"

#include <QCloseEvent>
#include <QDate>

#include <QDebug>

MonthlyViewWindow::MonthlyViewWindow(Scheduler* sche, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MonthlyViewWindow)
{
    sch = sche;
    ui->setupUi(this);
    myMain = qobject_cast<MainWindow*>(parentWidget());
    dayLayout();
}

//TODO: Conway's algorithm
int MonthlyViewWindow::conwayhelperyear(int y) {
    int ans = y/100;
    if (3 == (ans % 4)) {
        return 3;
    } else if (0 == (ans % 4)) {
        return 2;
    } else if (1 == (ans % 4)) {
        return 0;
    } else {
        return 5;
    }
}

int MonthlyViewWindow::conwayhelperyearend(int y) {
    QString ans = QString::number(y);
    ans = ans.mid(2, 2);
    return (ans.toInt()/12 + (ans.toInt() % 12) + (ans.toInt() % 12)/4);
}

int MonthlyViewWindow::conwaydoomsday(int m, int y) {
    if (m == 1 && ((y-1)%4) != 0) {
        return 2;
    } else if (m == 1 && ((y-1)%4) == 0) {
        return 3;
    } else if (m == 2 && (y%4) != 0) {
        return 27;
    }else if (m == 2 && (y%4) == 0) {
        return 28;
    } else if (m==3) {
        return 13;
    } else if (m==4) {
        return 3;
    } else if (m==5) {
        return 8;
    } else if (m==6) {
        return 5;
    } else if (m==7) {
        return 10;
    } else if (m==8) {
        return 7;
    } else if (m==9) {
        return 4;
    } else if (m==10) {
        return 9;
    } else if (m==11) {
        return 6;
    } else {
        return 11;
    }
}

int MonthlyViewWindow::conway(int m, int y) {
    int sum = (conwayhelperyear(y) + conwayhelperyearend(y) + conwaydoomsday(m, y))%7;
    return sum;
}

void MonthlyViewWindow::dayLayout() {
//    int startingIndex = conway(month,1,year);
    int count = 1;
    QFont font;
//    int index = conwayhelper(QDate::currentDate().month(),1,QDate::currentDate().year()); //requires me to know what month and year I am in
    for (int i = 0; i < ui->gridLayout->rowCount(); i++) {//TODO: FIND starting index through conway
        for (int j = 0; j < ui->gridLayout->columnCount(); j++) {
            if (i == 1 && j == conway(QDate::currentDate().month(),QDate::currentDate().year())) {
                QLayoutItem* item = ui->gridLayout->itemAtPosition(1,j);
                if (!item || !item->widget()) {
                    continue;
                }
                QPushButton* button = qobject_cast<QPushButton*>(item->widget());
                if (button) {
                    font = button->font();
                    font.setPointSize(20);
                    button->setFont(font);
                    button->setText(QString::number(count));
                    connect(button, SIGNAL(clicked()), this, SLOT(openModifyWindow(count)));
                    count++;
                }
            } else if (i < 1) {
                QLayoutItem* item = ui->gridLayout->itemAtPosition(i,j);
                if (!item || !item->widget()) {
                    continue;
                }
//                QPushButton* button = qobject_cast<QPushButton*>(item->widget());
//                if (button) {
//                    button->setText(QString::number(count));
//                    count++;
//                }
            } else if (i == 1 && j < conway(QDate::currentDate().month(),QDate::currentDate().year())) {
                QLayoutItem* item = ui->gridLayout->itemAtPosition(i,j);
                if (!item || !item->widget()) {
                    continue;
                }
                QPushButton* button = qobject_cast<QPushButton*>(item->widget());
                if (button) {
                    button->setEnabled(false);
                }
            } else {
                QLayoutItem* item = ui->gridLayout->itemAtPosition(i,j);
                if (!item || !item->widget()) {
                    continue;
                }
                QPushButton* button = qobject_cast<QPushButton*>(item->widget());
                if (count > QDate().currentDate().daysInMonth()) {
                    button->setEnabled(false);
                } else {
                    if (button) {
                        font = button->font();
                        font.setPointSize(20);
                        button->setFont(font);
                        button->setText(QString::number(count));
                        connect(button, SIGNAL(clicked()), this, SLOT(openModifyWindow(count)));
                        count++;
                    }
                }
            }
        }
    }
}

MonthlyViewWindow::~MonthlyViewWindow()
{
    delete ui;
}

void MonthlyViewWindow::closeEvent(QCloseEvent* event) {
    myMain->enableOpenCalendarButton();
    event->accept();
}

void MonthlyViewWindow::openModifyWindow(int month) {
    myModify = new ModifyWindow(sch, this);
    myModify->show();
}
