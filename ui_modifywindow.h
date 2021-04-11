/********************************************************************************
** Form generated from reading UI file 'modifywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWINDOW_H
#define UI_MODIFYWINDOW_H

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

class Ui_ModifyWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *listViewTitle;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *dateEdit;
    QPushButton *refreshButton;
    QListWidget *listView;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *viewButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *addEventButton;
    QSpacerItem *verticalSpacer;
    QPushButton *removeEventButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *editEventButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ModifyWindow)
    {
        if (ModifyWindow->objectName().isEmpty())
            ModifyWindow->setObjectName(QString::fromUtf8("ModifyWindow"));
        ModifyWindow->resize(800, 600);
        centralwidget = new QWidget(ModifyWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        listViewTitle = new QLabel(centralwidget);
        listViewTitle->setObjectName(QString::fromUtf8("listViewTitle"));
        QFont font;
        font.setPointSize(20);
        listViewTitle->setFont(font);

        verticalLayout->addWidget(listViewTitle);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);

        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(refreshButton);


        verticalLayout->addLayout(horizontalLayout_3);

        listView = new QListWidget(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        viewButton = new QPushButton(centralwidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));

        verticalLayout_2->addWidget(viewButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        addEventButton = new QPushButton(centralwidget);
        addEventButton->setObjectName(QString::fromUtf8("addEventButton"));

        verticalLayout_2->addWidget(addEventButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        removeEventButton = new QPushButton(centralwidget);
        removeEventButton->setObjectName(QString::fromUtf8("removeEventButton"));

        verticalLayout_2->addWidget(removeEventButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        editEventButton = new QPushButton(centralwidget);
        editEventButton->setObjectName(QString::fromUtf8("editEventButton"));

        verticalLayout_2->addWidget(editEventButton);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        ModifyWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModifyWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ModifyWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ModifyWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ModifyWindow->setStatusBar(statusbar);

        retranslateUi(ModifyWindow);

        QMetaObject::connectSlotsByName(ModifyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ModifyWindow)
    {
        ModifyWindow->setWindowTitle(QCoreApplication::translate("ModifyWindow", "MainWindow", nullptr));
        listViewTitle->setText(QCoreApplication::translate("ModifyWindow", "Reminders/Events", nullptr));
        refreshButton->setText(QCoreApplication::translate("ModifyWindow", "Refresh", nullptr));
        viewButton->setText(QCoreApplication::translate("ModifyWindow", "View", nullptr));
        addEventButton->setText(QCoreApplication::translate("ModifyWindow", "Add", nullptr));
        removeEventButton->setText(QCoreApplication::translate("ModifyWindow", "Remove", nullptr));
        editEventButton->setText(QCoreApplication::translate("ModifyWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWindow: public Ui_ModifyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWINDOW_H
