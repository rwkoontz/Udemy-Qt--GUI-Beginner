/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *activeButton;
    QPushButton *disabledButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        activeButton = new QPushButton(Widget);
        activeButton->setObjectName(QString::fromUtf8("activeButton"));

        horizontalLayout->addWidget(activeButton);

        disabledButton = new QPushButton(Widget);
        disabledButton->setObjectName(QString::fromUtf8("disabledButton"));
        disabledButton->setEnabled(true);

        horizontalLayout->addWidget(disabledButton);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        activeButton->setText(QApplication::translate("Widget", "Active", nullptr));
        disabledButton->setText(QApplication::translate("Widget", "Disabled", nullptr));
        label->setText(QApplication::translate("Widget", "My Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
