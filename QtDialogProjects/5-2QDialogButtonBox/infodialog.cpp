#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>
#include <QAbstractButton>
#include <QDialogButtonBox>

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton = ui->buttonBox->standardButton(button);

    if(stdButton == QDialogButtonBox::Ok){
        qDebug() << "OK button clicked";
        accept();
    }

    if(stdButton == QDialogButtonBox::Save){
        qDebug() << "Save button clicked";
    }

    if(stdButton == QDialogButtonBox::SaveAll){
        qDebug() << "SaveAll button clicked";
    }

    if(stdButton == QDialogButtonBox::Open){
        qDebug() << "Open button clicked";
    }

    if(stdButton == QDialogButtonBox::No){
        qDebug() << "No button clicked";
    }

    if(stdButton == QDialogButtonBox::NoToAll){
        qDebug() << "NoToAll button clicked";
    }

    if(stdButton == QDialogButtonBox::Cancel){
        qDebug() << "Cancel button clicked";
        reject();
    }

    if(stdButton == QDialogButtonBox::Apply){
        qDebug() << "Apply button clicked";
    }
}
