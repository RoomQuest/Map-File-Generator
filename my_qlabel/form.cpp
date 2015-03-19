#include "form.h"
#include "ui_form.h"
#include <mylabel.h>
#include <QFile>
#include <QCoreApplication>
#include <QTextStream>
#include <QListWidget>
#include "mainwindow.h"
#include "directory.h"


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

void Form::inputType(QString data)
{
    ui->labelType->setText(QString().append(data));
}

void Form::on_SubButton_clicked()
{

        QString v = ui->xformCoords->text();
        QString w = ui->yformCoords->text();
        QString x = ui->ClassInput->text();
        QString s = ui->typeInput->text();
        QString y = ui->ProfInput->text();
        QString z = ui->DepartInput->text();
        QString a = ui->FloorInput->text();
        //Directory t;
        //t.saveFile();

        QFile file("d:/test/output.csv");                                      //For testing
        //QFile file(qApp->applicationDirPath() + "/output/output.csv");           //Outputs to final execuatable folder
         //   (QPixmap(qApp->applicationDirPath() + "/images/map.png"))
        file.open(QIODevice::Append | QIODevice::Text);
        QTextStream out(&file);

        if (x == NULL && z == NULL) {
            out << y << "," << s << "," << a << "," << v << "," << w <<'\n';
        }
        else if (y == NULL && z == NULL ){
            out << x << "," << s << "," << a << "," << v << "," << w <<'\n';
        }
        else if (x == NULL && y == NULL) {
            out << z << "," << s << "," << a << "," << v << "," << w <<'\n';
        }

        //out << x << "," << s << "," << v << "," << w <<'\n';

        // optional, as QFile destructor will already do it:
        file.close();

        //this would normally start the event loop, but is not needed for this
        //minimal example:
        //return app.exec();

        //JBH.map ---->  name, x, y, floor
        //JBH.alias ---> name, alias
        //JBH.prof --->  name, professor
        //JBH.util ----> name, utility
}

void Form::on_SubButton_released()
{
   Form::close();
}
