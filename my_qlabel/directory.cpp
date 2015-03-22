#include "directory.h"
#include <QDebug>
#include <QString>

Directory::Directory()
{

}

Directory::~Directory()
{

}

void Directory::openfile() //opens a file
{
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Open Image"),
                QDir::currentPath(),
                tr("Image (*.png);;All files(*.*)"));
    if(!filename.isNull()) {
        qDebug(filename.toUtf8());
    }
}

void Directory::openfiles() //opens multiple files
{
    QStringList filenames = QFileDialog::getOpenFileNames(
                this,
                tr("Open Image"),
                QDir::currentPath(),
                tr("Image (*.png);;All files (*.*)"));
    if(!filenames.isEmpty()) {
        qDebug(filenames.join(",").toUtf8());
    }
}

void Directory::openDir() //opens a directory
{
    QString dirname = QFileDialog::getExistingDirectory(
                this,
                tr("Select a Directory"),
                QDir::currentPath());
    if(!dirname.isNull()) {
        qDebug(dirname.toUtf8());
    }
}

void Directory::saveFile() // saves a file
{
    QString filename = QFileDialog::getSaveFileName(
                this,
                tr("Save Map File"),
                QDir::currentPath(),
                tr("Map File (*.csv)"));
    if(!filename.isNull()) {
        qDebug(filename.toUtf8());
    }

}

