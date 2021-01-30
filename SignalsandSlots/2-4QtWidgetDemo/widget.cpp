#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*
    // string notation connector slot and signal
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    */

    /*
    // functor notation : normal slots
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->progressBar,&QProgressBar::setValue);
    */

    // functor notation : lambda
    connect(ui->horizontalSlider,&QSlider::valueChanged,[=](){

        ui->progressBar->setValue(ui->horizontalSlider->value());
    });
}

Widget::~Widget()
{
    delete ui;
}

