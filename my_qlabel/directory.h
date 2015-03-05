#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QFileDialog>

class Directory : public QWidget
{
public:
    Directory();
    ~Directory();
    void openfile();
    void openfiles();
    void openDir();
    void saveFile();
};

#endif // DIRECTORY_H
