/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName(QString::fromUtf8("infoDialog"));
        infoDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(infoDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(infoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::No|QDialogButtonBox::NoToAll|QDialogButtonBox::Ok|QDialogButtonBox::Open|QDialogButtonBox::Save|QDialogButtonBox::SaveAll);

        horizontalLayout->addWidget(buttonBox);

        textEdit = new QTextEdit(infoDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QApplication::translate("infoDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
