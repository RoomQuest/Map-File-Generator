#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include "mylabel.h"
#include "form.h"
#include <QObject>
#include <QMouseEvent>
#include <QLabel>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *window = new MainWindow();

    window->show();

    return app.exec();
}
