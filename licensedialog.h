#ifndef LICENSEDIALOG_H
#define LICENSEDIALOG_H

#include <QDialog>
#include "protect.h"

namespace Ui {
    class licenseDialog;
}

class licenseDialog : public QDialog{
    Q_OBJECT

public:
    explicit licenseDialog(protect checkLicense, QWidget *parent = 0);
    ~licenseDialog();

private:
    Ui::licenseDialog *ui;

private slots:
    void closeButton();
};

#endif // LICENSEDIALOG_H
