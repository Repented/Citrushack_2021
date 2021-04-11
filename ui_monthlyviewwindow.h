/********************************************************************************
** Form generated from reading UI file 'monthlyviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLYVIEWWINDOW_H
#define UI_MONTHLYVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonthlyViewWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *setDateButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *panel_5;
    QPushButton *panel_1;
    QPushButton *pushButton_7;
    QLabel *WednesdayLabel;
    QLabel *SundayLabel;
    QPushButton *panel_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *SaturdayLabel;
    QPushButton *pushButton_24;
    QLabel *ThursdayLabel;
    QPushButton *panel_8;
    QLabel *FridayLabel;
    QPushButton *pushButton_2;
    QPushButton *panel_10;
    QPushButton *pushButton_35;
    QPushButton *panel_4;
    QPushButton *pushButton_20;
    QPushButton *pushButton_33;
    QPushButton *pushButton_8;
    QPushButton *pushButton_30;
    QPushButton *pushButton_22;
    QLabel *MondayLabel;
    QPushButton *pushButton_31;
    QPushButton *pushButton_29;
    QPushButton *panel_3;
    QPushButton *panel_7;
    QPushButton *pushButton_21;
    QPushButton *pushButton_27;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *panel_9;
    QPushButton *pushButton_28;
    QPushButton *pushButton_23;
    QPushButton *pushButton_6;
    QPushButton *panel_2;
    QPushButton *pushButton_25;
    QPushButton *pushButton_32;
    QPushButton *pushButton_26;
    QLabel *TuesdayLabel;
    QPushButton *pushButton_34;
    QPushButton *panel_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MonthlyViewWindow)
    {
        if (MonthlyViewWindow->objectName().isEmpty())
            MonthlyViewWindow->setObjectName(QString::fromUtf8("MonthlyViewWindow"));
        MonthlyViewWindow->resize(800, 600);
        centralwidget = new QWidget(MonthlyViewWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

        setDateButton = new QPushButton(centralwidget);
        setDateButton->setObjectName(QString::fromUtf8("setDateButton"));

        horizontalLayout->addWidget(setDateButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        panel_5 = new QPushButton(centralwidget);
        panel_5->setObjectName(QString::fromUtf8("panel_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(panel_5->sizePolicy().hasHeightForWidth());
        panel_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_5, 1, 4, 1, 1);

        panel_1 = new QPushButton(centralwidget);
        panel_1->setObjectName(QString::fromUtf8("panel_1"));
        sizePolicy.setHeightForWidth(panel_1->sizePolicy().hasHeightForWidth());
        panel_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_1, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 5, 0, 1, 1);

        WednesdayLabel = new QLabel(centralwidget);
        WednesdayLabel->setObjectName(QString::fromUtf8("WednesdayLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(WednesdayLabel->sizePolicy().hasHeightForWidth());
        WednesdayLabel->setSizePolicy(sizePolicy1);
        WednesdayLabel->setMaximumSize(QSize(16777215, 16777215));
        WednesdayLabel->setSizeIncrement(QSize(0, 0));
        WednesdayLabel->setBaseSize(QSize(0, 0));
        WednesdayLabel->setFont(font);
        WednesdayLabel->setFrameShape(QFrame::Box);
        WednesdayLabel->setFrameShadow(QFrame::Raised);
        WednesdayLabel->setLineWidth(2);
        WednesdayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(WednesdayLabel, 0, 3, 1, 1);

        SundayLabel = new QLabel(centralwidget);
        SundayLabel->setObjectName(QString::fromUtf8("SundayLabel"));
        sizePolicy1.setHeightForWidth(SundayLabel->sizePolicy().hasHeightForWidth());
        SundayLabel->setSizePolicy(sizePolicy1);
        SundayLabel->setMinimumSize(QSize(0, 40));
        SundayLabel->setMaximumSize(QSize(16777215, 16777215));
        SundayLabel->setSizeIncrement(QSize(0, 0));
        SundayLabel->setBaseSize(QSize(0, 0));
        SundayLabel->setFont(font);
        SundayLabel->setFrameShape(QFrame::Box);
        SundayLabel->setFrameShadow(QFrame::Raised);
        SundayLabel->setLineWidth(2);
        SundayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(SundayLabel, 0, 0, 1, 1);

        panel_6 = new QPushButton(centralwidget);
        panel_6->setObjectName(QString::fromUtf8("panel_6"));
        sizePolicy.setHeightForWidth(panel_6->sizePolicy().hasHeightForWidth());
        panel_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_6, 1, 5, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 4, 5, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        SaturdayLabel = new QLabel(centralwidget);
        SaturdayLabel->setObjectName(QString::fromUtf8("SaturdayLabel"));
        sizePolicy1.setHeightForWidth(SaturdayLabel->sizePolicy().hasHeightForWidth());
        SaturdayLabel->setSizePolicy(sizePolicy1);
        SaturdayLabel->setMaximumSize(QSize(16777215, 16777215));
        SaturdayLabel->setSizeIncrement(QSize(0, 0));
        SaturdayLabel->setBaseSize(QSize(0, 0));
        SaturdayLabel->setFont(font);
        SaturdayLabel->setFrameShape(QFrame::Box);
        SaturdayLabel->setFrameShadow(QFrame::Raised);
        SaturdayLabel->setLineWidth(2);
        SaturdayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(SaturdayLabel, 0, 6, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_24, 5, 3, 1, 1);

        ThursdayLabel = new QLabel(centralwidget);
        ThursdayLabel->setObjectName(QString::fromUtf8("ThursdayLabel"));
        sizePolicy1.setHeightForWidth(ThursdayLabel->sizePolicy().hasHeightForWidth());
        ThursdayLabel->setSizePolicy(sizePolicy1);
        ThursdayLabel->setMaximumSize(QSize(16777215, 16777215));
        ThursdayLabel->setSizeIncrement(QSize(0, 0));
        ThursdayLabel->setBaseSize(QSize(0, 0));
        ThursdayLabel->setFont(font);
        ThursdayLabel->setFrameShape(QFrame::Box);
        ThursdayLabel->setFrameShadow(QFrame::Raised);
        ThursdayLabel->setLineWidth(2);
        ThursdayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ThursdayLabel, 0, 4, 1, 1);

        panel_8 = new QPushButton(centralwidget);
        panel_8->setObjectName(QString::fromUtf8("panel_8"));
        sizePolicy.setHeightForWidth(panel_8->sizePolicy().hasHeightForWidth());
        panel_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_8, 2, 0, 1, 1);

        FridayLabel = new QLabel(centralwidget);
        FridayLabel->setObjectName(QString::fromUtf8("FridayLabel"));
        sizePolicy1.setHeightForWidth(FridayLabel->sizePolicy().hasHeightForWidth());
        FridayLabel->setSizePolicy(sizePolicy1);
        FridayLabel->setMaximumSize(QSize(16777215, 16777215));
        FridayLabel->setSizeIncrement(QSize(0, 0));
        FridayLabel->setBaseSize(QSize(0, 0));
        FridayLabel->setFont(font);
        FridayLabel->setFrameShape(QFrame::Box);
        FridayLabel->setFrameShadow(QFrame::Raised);
        FridayLabel->setLineWidth(2);
        FridayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(FridayLabel, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 4, 2, 1, 1);

        panel_10 = new QPushButton(centralwidget);
        panel_10->setObjectName(QString::fromUtf8("panel_10"));
        sizePolicy.setHeightForWidth(panel_10->sizePolicy().hasHeightForWidth());
        panel_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_10, 2, 2, 1, 1);

        pushButton_35 = new QPushButton(centralwidget);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        sizePolicy.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_35, 2, 5, 1, 1);

        panel_4 = new QPushButton(centralwidget);
        panel_4->setObjectName(QString::fromUtf8("panel_4"));
        sizePolicy.setHeightForWidth(panel_4->sizePolicy().hasHeightForWidth());
        panel_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_4, 1, 3, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_20, 3, 4, 1, 1);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_33, 5, 5, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_30, 3, 6, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_22, 4, 4, 1, 1);

        MondayLabel = new QLabel(centralwidget);
        MondayLabel->setObjectName(QString::fromUtf8("MondayLabel"));
        sizePolicy1.setHeightForWidth(MondayLabel->sizePolicy().hasHeightForWidth());
        MondayLabel->setSizePolicy(sizePolicy1);
        MondayLabel->setMaximumSize(QSize(16777215, 16777215));
        MondayLabel->setSizeIncrement(QSize(0, 0));
        MondayLabel->setBaseSize(QSize(0, 0));
        MondayLabel->setFont(font);
        MondayLabel->setFrameShape(QFrame::Box);
        MondayLabel->setFrameShadow(QFrame::Raised);
        MondayLabel->setLineWidth(2);
        MondayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MondayLabel, 0, 1, 1, 1);

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_31, 3, 5, 1, 1);

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        sizePolicy.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_29, 5, 1, 1, 1);

        panel_3 = new QPushButton(centralwidget);
        panel_3->setObjectName(QString::fromUtf8("panel_3"));
        sizePolicy.setHeightForWidth(panel_3->sizePolicy().hasHeightForWidth());
        panel_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_3, 1, 2, 1, 1);

        panel_7 = new QPushButton(centralwidget);
        panel_7->setObjectName(QString::fromUtf8("panel_7"));
        sizePolicy.setHeightForWidth(panel_7->sizePolicy().hasHeightForWidth());
        panel_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_7, 1, 6, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_21, 3, 3, 1, 1);

        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_27, 5, 4, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 4, 1, 1, 1);

        panel_9 = new QPushButton(centralwidget);
        panel_9->setObjectName(QString::fromUtf8("panel_9"));
        sizePolicy.setHeightForWidth(panel_9->sizePolicy().hasHeightForWidth());
        panel_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_9, 2, 1, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_28, 2, 6, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_23, 2, 4, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 4, 0, 1, 1);

        panel_2 = new QPushButton(centralwidget);
        panel_2->setObjectName(QString::fromUtf8("panel_2"));
        sizePolicy.setHeightForWidth(panel_2->sizePolicy().hasHeightForWidth());
        panel_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_2, 1, 1, 1, 1);

        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_25, 5, 2, 1, 1);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        sizePolicy.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_32, 5, 6, 1, 1);

        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_26, 4, 3, 1, 1);

        TuesdayLabel = new QLabel(centralwidget);
        TuesdayLabel->setObjectName(QString::fromUtf8("TuesdayLabel"));
        sizePolicy1.setHeightForWidth(TuesdayLabel->sizePolicy().hasHeightForWidth());
        TuesdayLabel->setSizePolicy(sizePolicy1);
        TuesdayLabel->setMaximumSize(QSize(16777215, 16777215));
        TuesdayLabel->setSizeIncrement(QSize(0, 0));
        TuesdayLabel->setBaseSize(QSize(0, 0));
        TuesdayLabel->setFont(font);
        TuesdayLabel->setFrameShape(QFrame::Box);
        TuesdayLabel->setFrameShadow(QFrame::Raised);
        TuesdayLabel->setLineWidth(2);
        TuesdayLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(TuesdayLabel, 0, 2, 1, 1);

        pushButton_34 = new QPushButton(centralwidget);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        sizePolicy.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_34, 4, 6, 1, 1);

        panel_11 = new QPushButton(centralwidget);
        panel_11->setObjectName(QString::fromUtf8("panel_11"));
        sizePolicy.setHeightForWidth(panel_11->sizePolicy().hasHeightForWidth());
        panel_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(panel_11, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MonthlyViewWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MonthlyViewWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MonthlyViewWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MonthlyViewWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MonthlyViewWindow->setStatusBar(statusbar);

        retranslateUi(MonthlyViewWindow);

        QMetaObject::connectSlotsByName(MonthlyViewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MonthlyViewWindow)
    {
        MonthlyViewWindow->setWindowTitle(QCoreApplication::translate("MonthlyViewWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MonthlyViewWindow", "Date", nullptr));
        setDateButton->setText(QCoreApplication::translate("MonthlyViewWindow", "Set", nullptr));
        panel_5->setText(QString());
        panel_1->setText(QString());
        pushButton_7->setText(QString());
        WednesdayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "WEDNESDAY", nullptr));
        SundayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "SUNDAY", nullptr));
        panel_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        SaturdayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "SATURDAY", nullptr));
        pushButton_24->setText(QString());
        ThursdayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "THURSDAY", nullptr));
        panel_8->setText(QString());
        FridayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "FRIDAY", nullptr));
        pushButton_2->setText(QString());
        panel_10->setText(QString());
        pushButton_35->setText(QString());
        panel_4->setText(QString());
        pushButton_20->setText(QString());
        pushButton_33->setText(QString());
        pushButton_8->setText(QString());
        pushButton_30->setText(QString());
        pushButton_22->setText(QString());
        MondayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "MONDAY", nullptr));
        pushButton_31->setText(QString());
        pushButton_29->setText(QString());
        panel_3->setText(QString());
        panel_7->setText(QString());
        pushButton_21->setText(QString());
        pushButton_27->setText(QString());
        pushButton_3->setText(QString());
        pushButton_9->setText(QString());
        panel_9->setText(QString());
        pushButton_28->setText(QString());
        pushButton_23->setText(QString());
        pushButton_6->setText(QString());
        panel_2->setText(QString());
        pushButton_25->setText(QString());
        pushButton_32->setText(QString());
        pushButton_26->setText(QString());
        TuesdayLabel->setText(QCoreApplication::translate("MonthlyViewWindow", "TUESDAY", nullptr));
        pushButton_34->setText(QString());
        panel_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MonthlyViewWindow: public Ui_MonthlyViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLYVIEWWINDOW_H
