#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*
    // string notation for signal and slot
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(changeText()));
    */
    /*
    // Functor notation : regular slot
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::changeText);
    */
    /*
    // lambda notation : functor notation like
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->label->setText("Lambda function");
    });
    */
    // string notation second version cuts out changeText() function below
    connect(ui->pushButton,SIGNAL(clicked()),ui->label,SLOT(setText("Hello World")));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User clicked on button" << endl;
    // not needed with second string notation version of signal slot connection
    //ui->label->setText("Hello World");
}

