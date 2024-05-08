/********************************************************************************
** Form generated from reading UI file 'changebook.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEBOOK_H
#define UI_CHANGEBOOK_H

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

class Ui_ChangeBook
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *line1;
    QLineEdit *line2;
    QLineEdit *line3;
    QPushButton *savechanges;
    QDateEdit *date;
    QComboBox *comboBox;
    QLabel *label_5;

    void setupUi(QDialog *ChangeBook)
    {
        if (ChangeBook->objectName().isEmpty())
            ChangeBook->setObjectName("ChangeBook");
        ChangeBook->resize(201, 280);
        label = new QLabel(ChangeBook);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 61, 16));
        label_2 = new QLabel(ChangeBook);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 49, 16));
        label_3 = new QLabel(ChangeBook);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 49, 16));
        label_4 = new QLabel(ChangeBook);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 130, 49, 16));
        line1 = new QLineEdit(ChangeBook);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(80, 10, 111, 24));
        line2 = new QLineEdit(ChangeBook);
        line2->setObjectName("line2");
        line2->setGeometry(QRect(80, 50, 111, 24));
        line3 = new QLineEdit(ChangeBook);
        line3->setObjectName("line3");
        line3->setGeometry(QRect(80, 130, 111, 24));
        savechanges = new QPushButton(ChangeBook);
        savechanges->setObjectName("savechanges");
        savechanges->setGeometry(QRect(20, 210, 171, 24));
        date = new QDateEdit(ChangeBook);
        date->setObjectName("date");
        date->setGeometry(QRect(80, 90, 110, 25));
        date->setDate(QDate(1970, 1, 1));
        comboBox = new QComboBox(ChangeBook);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(80, 170, 111, 22));
        label_5 = new QLabel(ChangeBook);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 170, 49, 16));

        retranslateUi(ChangeBook);

        QMetaObject::connectSlotsByName(ChangeBook);
    } // setupUi

    void retranslateUi(QDialog *ChangeBook)
    {
        ChangeBook->setWindowTitle(QCoreApplication::translate("ChangeBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangeBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeBook", "\320\224\320\260\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("ChangeBook", "\320\226\320\260\320\275\321\200", nullptr));
        savechanges->setText(QCoreApplication::translate("ChangeBook", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ChangeBook", "\320\222 \320\260\321\200\321\205\320\270\320\262\320\265", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ChangeBook", "\320\243\321\202\320\265\321\200\321\217\320\275\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ChangeBook", "\320\227\320\260\320\261\321\200\320\260\320\273\320\270", nullptr));

        label_5->setText(QCoreApplication::translate("ChangeBook", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeBook: public Ui_ChangeBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEBOOK_H
