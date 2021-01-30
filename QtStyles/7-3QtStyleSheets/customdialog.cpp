#include "customdialog.h"
#include "ui_customdialog.h"
#include <customdialog.h>
#include <QDebug>

customDialog::customDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customDialog)
{
    ui->setupUi(this);
    // set stylesheet on a specific widget
    ui->pushButton->setStyleSheet("QPushButton{background-color : red;}");
}

customDialog::~customDialog()
{
    delete ui;
}

void customDialog::on_pushButton_clicked()
{
    customDialog * dialog = new customDialog(this);

    dialog->exec();
}
