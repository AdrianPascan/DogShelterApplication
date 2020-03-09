/********************************************************************************
** Form generated from reading UI file 'MylistWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLISTWINDOW_H
#define UI_MYLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MylistWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QWidget *MylistWindow)
    {
        if (MylistWindow->objectName().isEmpty())
            MylistWindow->setObjectName(QString::fromUtf8("MylistWindow"));
        MylistWindow->resize(400, 300);
        horizontalLayout = new QHBoxLayout(MylistWindow);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(MylistWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(MylistWindow);

        QMetaObject::connectSlotsByName(MylistWindow);
    } // setupUi

    void retranslateUi(QWidget *MylistWindow)
    {
        MylistWindow->setWindowTitle(QApplication::translate("MylistWindow", "MylistWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MylistWindow: public Ui_MylistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLISTWINDOW_H
