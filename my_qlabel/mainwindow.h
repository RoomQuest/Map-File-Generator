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


signals:
    void newTextEntered(const QString &text);
    void xSig(const double &text);
    void ySig(const double &text);

private:
    Ui::MainWindow *ui;
    Form *form;
    double xCoord;
    double yCoord;
};

#endif // MAINWINDOW_H
