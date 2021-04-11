/********************************************************************************
** Form generated from reading UI file 'eventviewerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTVIEWERDIALOG_H
#define UI_EVENTVIEWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EventViewerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EventViewerDialog)
    {
        if (EventViewerDialog->objectName().isEmpty())
            EventViewerDialog->setObjectName(QString::fromUtf8("EventViewerDialog"));
        EventViewerDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(EventViewerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(EventViewerDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(true);

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(EventViewerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EventViewerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EventViewerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EventViewerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EventViewerDialog);
    } // setupUi

    void retranslateUi(QDialog *EventViewerDialog)
    {
        EventViewerDialog->setWindowTitle(QCoreApplication::translate("EventViewerDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventViewerDialog: public Ui_EventViewerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTVIEWERDIALOG_H
