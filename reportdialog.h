#ifndef REPORTDIALOG_H
#define REPORTDIALOG_H

#include <QtWidgets/QDialog>

namespace Ui {
    class reportDialog;
}

class reportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit reportDialog(QString message, QWidget *parent = 0);
    ~reportDialog();

private:
    Ui::reportDialog *ui;
};

#endif // REPORTDIALOG_H
