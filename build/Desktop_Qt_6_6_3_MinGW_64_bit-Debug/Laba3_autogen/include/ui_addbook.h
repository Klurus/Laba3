/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QPushButton *addButton;
    QLineEdit *bookLine;
    QLineEdit *autorLine;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLineEdit *genreLine;
    QComboBox *comboBox;
    QLabel *label_5;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName("AddBook");
        AddBook->resize(207, 265);
        addButton = new QPushButton(AddBook);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(10, 220, 191, 24));
        bookLine = new QLineEdit(AddBook);
        bookLine->setObjectName("bookLine");
        bookLine->setGeometry(QRect(90, 20, 111, 24));
        autorLine = new QLineEdit(AddBook);
        autorLine->setObjectName("autorLine");
        autorLine->setGeometry(QRect(90, 60, 111, 24));
        label = new QLabel(AddBook);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 81, 16));
        label_2 = new QLabel(AddBook);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 49, 16));
        label_3 = new QLabel(AddBook);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 71, 16));
        label_4 = new QLabel(AddBook);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 140, 49, 16));
        dateEdit = new QDateEdit(AddBook);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(90, 100, 110, 25));
        dateEdit->setDateTime(QDateTime(QDate(1970, 1, 1), QTime(18, 0, 0)));
        dateEdit->setDate(QDate(1970, 1, 1));
        genreLine = new QLineEdit(AddBook);
        genreLine->setObjectName("genreLine");
        genreLine->setGeometry(QRect(90, 140, 111, 24));
        comboBox = new QComboBox(AddBook);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 180, 111, 22));
        label_5 = new QLabel(AddBook);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 180, 49, 16));

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "Dialog", nullptr));
        addButton->setText(QCoreApplication::translate("AddBook", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("AddBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("AddBook", " \320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("AddBook", "\320\226\320\260\320\275\321\200", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AddBook", "\320\222 \320\260\321\200\321\205\320\270\320\262\320\265", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AddBook", "\320\243\321\202\320\265\321\200\321\217\320\275\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("AddBook", "\320\227\320\260\320\261\321\200\320\260\320\273\320\270", nullptr));

        label_5->setText(QCoreApplication::translate("AddBook", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
