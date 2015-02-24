#include "mylabel.h"
#include <QLabel>


myLabel::myLabel()
{
    this->setAlignment(Qt::AlignBottom);
    this->setText("No Value");
    this->setMouseTracking(true);
}

myLabel::~myLabel()
{

}

void myLabel::mouseMoveEvent(QMouseEvent *event)
{
    this->setText("X:"+QString::number(event->x())+"--Y:"+QString::number(event->y()));
}

