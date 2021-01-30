#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_okButton_clicked()
{
    QString userPosition = ui->lineEdit->text();
    if (!userPosition.isEmpty()){
        position = userPosition;
        if (ui->windowsRadioButton->isChecked())
            favoriteOS = "Windows";
        if (ui->linuxRadioButton->isChecked())
            favoriteOS = "Linux";
        if (ui->macRadioButton->isChecked())
            favoriteOS = "Mac";
    }

    // close th dialog
    accept();
}

void infoDialog::on_cancelButton_clicked()
{
    // reject the dialog
    reject();
}

QString infoDialog::getPosition() const
{
    return position;
}

QString infoDialog::getFavoriteOS() const
{
    return favoriteOS;
}
