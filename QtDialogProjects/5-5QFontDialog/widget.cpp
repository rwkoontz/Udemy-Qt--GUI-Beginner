#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFont>
#include <QFontDialog>
#include <QMessageBox>

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


void Widget::on_chooseFontButton_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, QFont("Times", 12), this);
    if (ok) {
        ui->label->setFont(font);
        // font is set to the font the user selected
    } else {
        QMessageBox::information(this,"Message","User didn't choose font");
        // the user canceled the dialog; font is set to the initial
        // value, in this case Times, 12.
    }

}
