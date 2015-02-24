/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ClassInput;
    QLabel *label_2;
    QLineEdit *ProfInput;
    QLabel *label_3;
    QLineEdit *DepartInput;
    QPushButton *SubButton;
    QLabel *label_4;
    QLabel *xformCoords;
    QLabel *label_5;
    QLabel *yformCoords;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(179, 344);
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 321));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 139, 278));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ClassInput = new QLineEdit(layoutWidget);
        ClassInput->setObjectName(QStringLiteral("ClassInput"));

        verticalLayout->addWidget(ClassInput);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        ProfInput = new QLineEdit(layoutWidget);
        ProfInput->setObjectName(QStringLiteral("ProfInput"));

        verticalLayout->addWidget(ProfInput);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        DepartInput = new QLineEdit(layoutWidget);
        DepartInput->setObjectName(QStringLiteral("DepartInput"));

        verticalLayout->addWidget(DepartInput);

        SubButton = new QPushButton(layoutWidget);
        SubButton->setObjectName(QStringLiteral("SubButton"));

        verticalLayout->addWidget(SubButton);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        xformCoords = new QLabel(layoutWidget);
        xformCoords->setObjectName(QStringLiteral("xformCoords"));

        verticalLayout->addWidget(xformCoords);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        yformCoords = new QLabel(layoutWidget);
        yformCoords->setObjectName(QStringLiteral("yformCoords"));

        verticalLayout->addWidget(yformCoords);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        groupBox->setTitle(QApplication::translate("Form", "GroupBox", 0));
        label->setText(QApplication::translate("Form", "Classroom", 0));
        ClassInput->setText(QString());
        label_2->setText(QApplication::translate("Form", "Professor", 0));
        label_3->setText(QApplication::translate("Form", "Departartment", 0));
        SubButton->setText(QApplication::translate("Form", "Submit", 0));
        label_4->setText(QApplication::translate("Form", "X Coordinates", 0));
        label_5->setText(QApplication::translate("Form", "Y Coordinates", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
