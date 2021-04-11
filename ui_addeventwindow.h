/********************************************************************************
** Form generated from reading UI file 'addeventwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENTWINDOW_H
#define UI_ADDEVENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEventWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *AddEventLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *noteLabel;
    QTextEdit *noteTextEdit;
    QVBoxLayout *verticalLayout;
    QRadioButton *reminderRadio;
    QRadioButton *eventRadio;
    QHBoxLayout *horizontalLayout_2;
    QLabel *priorityLabel;
    QSpinBox *prioritySpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *errorLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddEventWindow)
    {
        if (AddEventWindow->objectName().isEmpty())
            AddEventWindow->setObjectName(QString::fromUtf8("AddEventWindow"));
        AddEventWindow->resize(537, 437);
        centralwidget = new QWidget(AddEventWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        AddEventLabel = new QLabel(centralwidget);
        AddEventLabel->setObjectName(QString::fromUtf8("AddEventLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Papyrus"));
        font.setPointSize(20);
        AddEventLabel->setFont(font);
        AddEventLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(AddEventLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        horizontalLayout->addWidget(titleLabel);

        titleLineEdit = new QLineEdit(centralwidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));

        horizontalLayout->addWidget(titleLineEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        noteLabel = new QLabel(centralwidget);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));

        verticalLayout_2->addWidget(noteLabel);

        noteTextEdit = new QTextEdit(centralwidget);
        noteTextEdit->setObjectName(QString::fromUtf8("noteTextEdit"));

        verticalLayout_2->addWidget(noteTextEdit);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        reminderRadio = new QRadioButton(centralwidget);
        reminderRadio->setObjectName(QString::fromUtf8("reminderRadio"));
        reminderRadio->setChecked(true);

        verticalLayout->addWidget(reminderRadio);

        eventRadio = new QRadioButton(centralwidget);
        eventRadio->setObjectName(QString::fromUtf8("eventRadio"));

        verticalLayout->addWidget(eventRadio);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        priorityLabel = new QLabel(centralwidget);
        priorityLabel->setObjectName(QString::fromUtf8("priorityLabel"));

        horizontalLayout_2->addWidget(priorityLabel);

        prioritySpinBox = new QSpinBox(centralwidget);
        prioritySpinBox->setObjectName(QString::fromUtf8("prioritySpinBox"));
        prioritySpinBox->setMinimum(1);
        prioritySpinBox->setMaximum(5);

        horizontalLayout_2->addWidget(prioritySpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dateLabel = new QLabel(centralwidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        horizontalLayout_3->addWidget(dateLabel);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_4->addWidget(addButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_4->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        errorLabel = new QLabel(centralwidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        QFont font1;
        font1.setPointSize(10);
        errorLabel->setFont(font1);

        verticalLayout_3->addWidget(errorLabel);

        AddEventWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddEventWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 21));
        AddEventWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddEventWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AddEventWindow->setStatusBar(statusbar);

        retranslateUi(AddEventWindow);

        QMetaObject::connectSlotsByName(AddEventWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddEventWindow)
    {
        AddEventWindow->setWindowTitle(QCoreApplication::translate("AddEventWindow", "MainWindow", nullptr));
        AddEventLabel->setText(QCoreApplication::translate("AddEventWindow", "Add Event", nullptr));
        titleLabel->setText(QCoreApplication::translate("AddEventWindow", "Title: ", nullptr));
        noteLabel->setText(QCoreApplication::translate("AddEventWindow", "Note: ", nullptr));
        reminderRadio->setText(QCoreApplication::translate("AddEventWindow", "Reminder", nullptr));
        eventRadio->setText(QCoreApplication::translate("AddEventWindow", "Event", nullptr));
        priorityLabel->setText(QCoreApplication::translate("AddEventWindow", "Priority: ", nullptr));
        dateLabel->setText(QCoreApplication::translate("AddEventWindow", "Date: ", nullptr));
        addButton->setText(QCoreApplication::translate("AddEventWindow", "Add", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddEventWindow", "Cancel", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddEventWindow: public Ui_AddEventWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTWINDOW_H
