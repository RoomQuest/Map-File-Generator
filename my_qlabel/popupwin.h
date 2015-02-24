#ifndef POPUPWIN_H
#define POPUPWIN_H

#include <QMainWindow>

namespace Ui {
class PopUpWin;
}


class PopUpWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit PopUpWin(QWidget *parent = 0);
    ~PopUpWin();

signals:

public slots:

private:
      Ui::PopUpWin *ui;
};

#endif // POPUPWIN_H
