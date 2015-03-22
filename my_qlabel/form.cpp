#include "form.h"
#include "ui_form.h"
#include <mylabel.h>
#include <QFile>
#include <QCoreApplication>
#include <QTextStream>
#include <QListWidget>
#include "mainwindow.h"
#include "directory.h"


Form::Form(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Form) // constructor
{
    ui->setupUi(this);
}

Form::~Form()                                                   // destructor
{
    delete ui;
}

void Form::xOutput(double data)                                 // saves the X coordinates
{
    ui->xformCoords->setText(QString::number(data, 10.0));
}

void Form::yOutput(double data)                                 // saves the Y coordinates
{
    ui->yformCoords->setText(QString::number(data, 10.0));
}

void Form::inputType(QString data)                              // saves input type
{
    ui->labelType->setText(QString().append(data));
}

void Form::on_SubButton_clicked()                               // Asks for the to select the file and saves to the file
{

        QString v = ui->xformCoords->text();
        QString w = ui->yformCoords->text();
        QString x = ui->ClassInput->text();
        QString s = ui->typeInput->text();
        QString y = ui->ProfInput->text();
        QString z = ui->DepartInput->text();
        QString a = ui->FloorInput->text();

        QFile filename(QFileDialog::getOpenFileName(
                    this,
                    tr("Open File"),
                    QDir::currentPath(),
                    tr("Doncuments (*.csv);;All files(*.*)")));
        /*if(!filename.isNull()) {
            qDebug(filename.toUtf8());
        }*/

        //QFile file("d:/test/output.csv");                                      //For testing
        //QFile file(qApp->applicationDirPath() + "/output/output.csv");           //Outputs to final execuatable folder
         //   (QPixmap(qApp->applicationDirPath() + "/images/map.png"))
        filename.open(QIODevice::Append | QIODevice::Text);
        QTextStream out(&filename);

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
        filename.close();



        //this would normally start the event loop, but is not needed for this
        //minimal example:
        //return app.exec();

        //JBH.map ---->  name, x, y, floor
        //JBH.alias ---> name, alias
        //JBH.prof --->  name, professor
        //JBH.util ----> name, utility
}

void Form::on_SubButton_released() // closes the form
{
   Form::close();
}
