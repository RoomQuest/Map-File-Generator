/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblPic;
    QPushButton *testButton;
    QLineEdit *Coords;
    QLineEdit *typeInput;
    QLabel *label;
    QPushButton *subTypeButton;
    QPushButton *openFile;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1601, 1348);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblPic = new QLabel(centralWidget);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setGeometry(QRect(0, 0, 800, 600));
        lblPic->setMouseTracking(true);
        lblPic->setFrameShape(QFrame::Box);
        testButton = new QPushButton(centralWidget);
        testButton->setObjectName(QStringLiteral("testButton"));
        testButton->setGeometry(QRect(0, 0, 1600, 1200));
        testButton->setCheckable(true);
        testButton->setChecked(false);
        Coords = new QLineEdit(centralWidget);
        Coords->setObjectName(QStringLiteral("Coords"));
        Coords->setGeometry(QRect(200, 1250, 201, 31));
        typeInput = new QLineEdit(centralWidget);
        typeInput->setObjectName(QStringLiteral("typeInput"));
        typeInput->setGeometry(QRect(670, 1220, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(610, 1220, 55, 16));
        subTypeButton = new QPushButton(centralWidget);
        subTypeButton->setObjectName(QStringLiteral("subTypeButton"));
        subTypeButton->setGeometry(QRect(680, 1250, 93, 28));
        openFile = new QPushButton(centralWidget);
        openFile->setObjectName(QStringLiteral("openFile"));
        openFile->setGeometry(QRect(460, 1230, 131, 28));
        MainWindow->setCentralWidget(centralWidget);
        lblPic->raise();
        testButton->raise();
        Coords->raise();
        typeInput->raise();
        subTypeButton->raise();
        label->raise();
        openFile->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1601, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QT - Capture Mouse Move", 0));
        lblPic->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        testButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Type", 0));
        subTypeButton->setText(QApplication::translate("MainWindow", "Submit type", 0));
        openFile->setText(QApplication::translate("MainWindow", "Open Map Image", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
