#include "popupwin.h"

PopUpWin::PopUpWin(QWidget *parent) : QMainWindow(parent), ui(new Ui::PopUpWin)
{
    ui->setupUi(this);
}

popupwin::~popupwin()
{
    delete ui;
}

