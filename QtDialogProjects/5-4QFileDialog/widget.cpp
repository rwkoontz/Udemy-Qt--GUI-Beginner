#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>

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


void Widget::on_pushButton_clicked()
{
    // get a directory name
    /*
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);

    qDebug() << "The directory is : " << dir;
    */
    // get a file name
    /*
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/home",
                                                     tr("Images (*.png *.xpm *.jpg)"));

    qDebug() << "The filename is : " << fileName;
    */
    // get file names plural
    /*
    QStringList files = QFileDialog::getOpenFileNames(
                             this,
                             "Select one or more files to open",
                             "/home",
                             "Files (*)");

    qDebug() << "The filenames are : " << files;
    */
    // filename to be saved
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/home/jana/untitled.png",
                               tr("Images (*.png *.xpm *.jpg)"));

    qDebug() << "The save file is : " << fileName;


}
