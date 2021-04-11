/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *UpperHorizLayout;
    QVBoxLayout *UpperVertLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QDateEdit *reminderDateEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *eventList;
    QListWidget *reminderList;
    QVBoxLayout *LowerVertLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *updateReminderButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *LowerHorizLayout;
    QPushButton *openCalendarButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *saveQuitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        UpperHorizLayout = new QHBoxLayout();
        UpperHorizLayout->setObjectName(QString::fromUtf8("UpperHorizLayout"));
        UpperVertLayout = new QVBoxLayout();
        UpperVertLayout->setObjectName(QString::fromUtf8("UpperVertLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        reminderDateEdit = new QDateEdit(centralwidget);
        reminderDateEdit->setObjectName(QString::fromUtf8("reminderDateEdit"));

        horizontalLayout->addWidget(reminderDateEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        UpperVertLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(360, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        UpperVertLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        eventList = new QListWidget(centralwidget);
        eventList->setObjectName(QString::fromUtf8("eventList"));

        horizontalLayout_3->addWidget(eventList);

        reminderList = new QListWidget(centralwidget);
        reminderList->setObjectName(QString::fromUtf8("reminderList"));

        horizontalLayout_3->addWidget(reminderList);


        UpperVertLayout->addLayout(horizontalLayout_3);


        UpperHorizLayout->addLayout(UpperVertLayout);


        verticalLayout_3->addLayout(UpperHorizLayout);

        LowerVertLayout = new QVBoxLayout();
        LowerVertLayout->setObjectName(QString::fromUtf8("LowerVertLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        updateReminderButton = new QPushButton(centralwidget);
        updateReminderButton->setObjectName(QString::fromUtf8("updateReminderButton"));

        horizontalLayout_2->addWidget(updateReminderButton);


        LowerVertLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LowerVertLayout->addItem(verticalSpacer);

        LowerHorizLayout = new QHBoxLayout();
        LowerHorizLayout->setObjectName(QString::fromUtf8("LowerHorizLayout"));
        openCalendarButton = new QPushButton(centralwidget);
        openCalendarButton->setObjectName(QString::fromUtf8("openCalendarButton"));

        LowerHorizLayout->addWidget(openCalendarButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LowerHorizLayout->addItem(horizontalSpacer_2);

        saveQuitButton = new QPushButton(centralwidget);
        saveQuitButton->setObjectName(QString::fromUtf8("saveQuitButton"));

        LowerHorizLayout->addWidget(saveQuitButton);


        LowerVertLayout->addLayout(LowerHorizLayout);


        verticalLayout_3->addLayout(LowerVertLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Events", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Reminders", nullptr));
        updateReminderButton->setText(QCoreApplication::translate("MainWindow", "Update Reminders", nullptr));
        openCalendarButton->setText(QCoreApplication::translate("MainWindow", "Open Calendar", nullptr));
        saveQuitButton->setText(QCoreApplication::translate("MainWindow", "Save and Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
