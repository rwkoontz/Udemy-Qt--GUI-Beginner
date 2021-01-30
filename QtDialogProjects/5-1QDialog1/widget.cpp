#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include <QDebug>
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_provideInfoButton_clicked()
{
    infoDialog * dialog = new infoDialog(this);
    // show the dialog modal
    /*
    int ret = dialog->exec();
    if (ret == QDialog::Accepted){
        QString position = dialog->getPosition();
        QString OS = dialog->getFavoriteOS();
        QString labelString = "Dialog Accepted - Position is : " + position + " OS is : " + OS;
        ui->myLabel->setText(labelString);
    }
    else
        qDebug() << "Dialog Rejected";
        */
    // show the dialog non modal
    connect(dialog,&infoDialog::accepted,[=](){
        QString position = dialog->getPosition();
        QString OS = dialog->getFavoriteOS();
        QString labelString = "Dialog Accepted - Position is : " + position + " OS is : " + OS;
        ui->myLabel->setText(labelString);
    });

    connect(dialog,&infoDialog::rejected,[=](){
        qDebug() << "Dialog Rejected";
    });

    // display the dialog
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}
