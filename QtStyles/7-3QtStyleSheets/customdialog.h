#ifndef CUSTOMDIALOG_H
#define CUSTOMDIALOG_H

#include <QDialog>

namespace Ui {
class customDialog;
}

class customDialog : public QDialog
{
    Q_OBJECT

public:
    explicit customDialog(QWidget *parent = nullptr);
    ~customDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::customDialog *ui;
};

#endif // CUSTOMDIALOG_H
