#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"
#include <QLabel>
#include "form.h"
#include <QMessageBox>
#include <QBrush>
#include <QPalette>
#include <QPoint>
#include <QCursor>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Kyle/Documents/QT/RoomQuestBack/Image/JB3rdfloor.png");
    ui->lblPic->setPixmap(pix);
    ui->testButton->setStyleSheet("QPushButton{background: transparent;}");
    qApp->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_testButton_clicked()
{
    form = new Form(this);
    form->show();

    connect(this,SIGNAL(xSig(double)),form,SLOT(xOutput(double)));      //sends coordinates to form
    connect(this,SIGNAL(ySig(double)),form,SLOT(yOutput(double)));
    emit xSig(xCoord);
    emit ySig(yCoord);
}

void MainWindow::onTextBoxReturnPressed()
{
    emit this->newTextEntered(ui->Coords->text());
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  if (event->type() == QEvent::MouseMove)
  {
    QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);

    ui->Coords->setText(QString("Mouse coords (%1,%2)").arg(mouseEvent->pos().x()).arg(mouseEvent->pos().y()));
    xCoord = mouseEvent->pos().x();
    yCoord = mouseEvent->pos().y();

  }
  return false;
}
