#ifndef MYLABEL_H
#define MYLABEL_H

#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <QMouseEvent>

class myLabel : public QLabel
{
public:
    myLabel();
    ~myLabel();
    void mouseMoveEvent(QMouseEvent *event);
};

#endif // MYLABEL_H
