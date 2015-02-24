#include "form.h"
#include "ui_form.h"
#include <mylabel.h>
#include <QFile>
#include <QCoreApplication>
#include <QTextStream>
#include <QListWidget>
#include "mainwindow.h"

Form::Form(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::xOutput(double data)
{
    ui->xformCoords->setText(QString::number(data, 10.0));
}

void Form::yOutput(double data)
{
    ui->yformCoords->setText(QString::number(data, 10.0));
}

void Form::on_SubButton_clicked()
{
        /*
        if(ui->xformCoords->text() == "")
        {
            ui->xformCoords->setText("");
        }*/

        QString v = ui->xformCoords->text();
        QString w = ui->yformCoords->text();
        QString x = ui->ClassInput->text();
        QString y = ui->ProfInput->text();
        QString z = ui->DepartInput->text();
        QFile file("d:/test/output.txt");
        file.open(QIODevice::Append | QIODevice::Text);
        QTextStream out(&file);
        out << x << " , " << v << " , " << w << " , " << y << " , " << z << '\n';

        // optional, as QFile destructor will already do it:
        file.close();



        //this would normally start the event loop, but is not needed for this
        //minimal example:
        //return app.exec();
}


void Form::on_SubButton_released()
{
   Form::close();
}
