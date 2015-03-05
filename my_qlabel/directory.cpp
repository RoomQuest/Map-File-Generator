#include "directory.h"
#include <QDebug>
#include <QString>

Directory::Directory()
{

}

Directory::~Directory()
{

}

void Directory::openfile()
{
    QFileDialog::getOpenFileName(
                this,
                tr("Open Document"),
                QDir::currentPath(),
                tr("Document files (*.csv);;All files"),
                0,
                QFileDialog::DontUseNativeDialog);

    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Open Document"),
                QDir::currentPath(),
                tr("Document files (*.csv);;All files(*.*)"));
    if(!filename.isNull()) {
        qDebug(filename.toUtf8());
    }
}

void Directory::openfiles()
{
    QStringList filenames = QFileDialog::getOpenFileNames(
                this,
                tr("Open Document"),
                QDir::currentPath(),
                tr("Documents (*csv);;All files (*.*)"));
    if(!filenames.isEmpty()) {
        qDebug(filenames.join(",").toUtf8());
    }
}

void Directory::openDir()
{
    QString dirname = QFileDialog::getExistingDirectory(
                this,
                tr("Select a Directory"),
                QDir::currentPath());
    if(!dirname.isNull()) {
        qDebug(dirname.toUtf8());
    }
}

void Directory::saveFile()
{
    QString filename = QFileDialog::getSaveFileName(
                this,
                tr("Save Document"),
                QDir::currentPath(),
                tr("Documents (*.csv)"));
    if(!filename.isNull()) {
        qDebug(filename.toUtf8());
    }

}

