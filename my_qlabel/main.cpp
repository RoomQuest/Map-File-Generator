#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <QMouseEvent>
#include "mylabel.h"
#include "form.h"
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *window = new MainWindow();

    window->show();

    return app.exec();
}
