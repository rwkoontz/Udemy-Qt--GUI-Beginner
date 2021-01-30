#include "widget.h"
#include "ui_widget.h"
#include <QColorDialog>
#include <QDebug>
#include <QColor>
#include <QFontDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_textColorButton_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::WindowText);
    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid()){
        palette.setColor(QPalette::WindowText,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User chose a valid color.";
    }
    else
        qDebug() << "User chose invalid color.";

}

void Widget::on_backgroundButton_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::Window);
    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid()){
        palette.setColor(QPalette::Window,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User chose a valid color.";
    }
    else
        qDebug() << "User chose invalid color.";
}

void Widget::on_fontButton_clicked()
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
