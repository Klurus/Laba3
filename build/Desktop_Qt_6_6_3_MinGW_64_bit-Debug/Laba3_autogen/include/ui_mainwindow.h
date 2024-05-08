/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_3;
    QWidget *centralwidget;
    QTableView *booktable;
    QPushButton *addbook;
    QPushButton *bookdetails;
    QPushButton *removebook;
    QLineEdit *searchline;
    QPushButton *search;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(583, 487);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        booktable = new QTableView(centralwidget);
        booktable->setObjectName("booktable");
        booktable->setGeometry(QRect(20, 150, 541, 231));
        booktable->setSelectionMode(QAbstractItemView::SingleSelection);
        addbook = new QPushButton(centralwidget);
        addbook->setObjectName("addbook");
        addbook->setGeometry(QRect(70, 380, 151, 24));
        bookdetails = new QPushButton(centralwidget);
        bookdetails->setObjectName("bookdetails");
        bookdetails->setGeometry(QRect(360, 380, 151, 24));
        removebook = new QPushButton(centralwidget);
        removebook->setObjectName("removebook");
        removebook->setGeometry(QRect(220, 420, 141, 24));
        removebook->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        searchline = new QLineEdit(centralwidget);
        searchline->setObjectName("searchline");
        searchline->setGeometry(QRect(180, 50, 211, 31));
        search = new QPushButton(centralwidget);
        search->setObjectName("search");
        search->setGeometry(QRect(200, 90, 171, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 583, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "sfsd", nullptr));
        addbook->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        bookdetails->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        removebook->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        searchline->setInputMask(QString());
        searchline->setText(QString());
        searchline->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265/\321\201\321\202\320\260\321\202\321\203\321\201 \320\272\320\275\320\270\320\263\320\270...", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
