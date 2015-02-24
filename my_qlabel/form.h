#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include <QString>

namespace Ui {
    class Form;
}

class Form : public QMainWindow
{
    Q_OBJECT
public:
    explicit Form(QWidget *parent = 0);
    ~Form();

signals:

public slots:
    void xOutput(double data);
    void yOutput(double data);

private slots:
    void on_SubButton_clicked();
    void on_SubButton_released();

private:
     Ui::Form *ui;
};

#endif // FORM_H
