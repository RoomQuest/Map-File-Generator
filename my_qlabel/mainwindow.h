#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool eventFilter(QObject *obj, QEvent *event);

private slots:
    void on_testButton_clicked();
    void onTextBoxReturnPressed();


    void on_subTypeButton_clicked();

signals:
    void newTextEntered(const QString &text);
    void xSig(const double &text);
    void ySig(const double &text);
    void type(const QString &text);

private:
    Ui::MainWindow *ui;
    Form *form;
    double xCoord;
    double yCoord;
    QString typeIn;
};

#endif // MAINWINDOW_H
