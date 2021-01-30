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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsRadioButton;
    QRadioButton *macRadioButton;
    QRadioButton *linuxRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName(QString::fromUtf8("infoDialog"));
        infoDialog->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(infoDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(infoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(infoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(infoDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(infoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsRadioButton = new QRadioButton(groupBox);
        windowsRadioButton->setObjectName(QString::fromUtf8("windowsRadioButton"));

        verticalLayout->addWidget(windowsRadioButton);

        macRadioButton = new QRadioButton(groupBox);
        macRadioButton->setObjectName(QString::fromUtf8("macRadioButton"));

        verticalLayout->addWidget(macRadioButton);

        linuxRadioButton = new QRadioButton(groupBox);
        linuxRadioButton->setObjectName(QString::fromUtf8("linuxRadioButton"));

        verticalLayout->addWidget(linuxRadioButton);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(infoDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(infoDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QApplication::translate("infoDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("infoDialog", "Your Information", nullptr));
        label_2->setText(QApplication::translate("infoDialog", "Position : ", nullptr));
        groupBox->setTitle(QApplication::translate("infoDialog", "Favorite OS", nullptr));
        windowsRadioButton->setText(QApplication::translate("infoDialog", "Windows", nullptr));
        macRadioButton->setText(QApplication::translate("infoDialog", "Mac", nullptr));
        linuxRadioButton->setText(QApplication::translate("infoDialog", "Linux", nullptr));
        okButton->setText(QApplication::translate("infoDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("infoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
