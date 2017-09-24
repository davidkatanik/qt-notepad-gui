/********************************************************************************
** Form generated from reading UI file 'printdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG_H
#define UI_PRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_printdialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QSpinBox *spinBox;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *printdialog)
    {
        if (printdialog->objectName().isEmpty())
            printdialog->setObjectName(QStringLiteral("printdialog"));
        printdialog->setWindowModality(Qt::ApplicationModal);
        printdialog->resize(670, 470);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(printdialog->sizePolicy().hasHeightForWidth());
        printdialog->setSizePolicy(sizePolicy);
        printdialog->setMinimumSize(QSize(670, 470));
        printdialog->setMaximumSize(QSize(670, 470));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        printdialog->setFont(font);
        tabWidget = new QTabWidget(printdialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 651, 411));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(30, 30));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 621, 191));
        groupBox->setAutoFillBackground(false);
        listWidget = new QListWidget(groupBox);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font1);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 601, 111));
        listWidget->setFrameShape(QFrame::WinPanel);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(18, 150, 191, 16));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(510, 140, 101, 28));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 210, 301, 161));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 95, 20));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 95, 20));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 90, 95, 20));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 120, 261, 31));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(350, 210, 281, 161));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(111, 20, 151, 22));
        spinBox->setMinimum(1);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 71, 21));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(130, 80, 131, 20));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(130, 120, 131, 20));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 71, 71));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../icons/page_up.png")));
        label_3->setScaledContents(false);
        tabWidget->addTab(tab, QString());
        pushButton = new QPushButton(printdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 430, 141, 31));
        pushButton_2 = new QPushButton(printdialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 430, 141, 31));
        pushButton_3 = new QPushButton(printdialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 430, 141, 31));

        retranslateUi(printdialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(printdialog);
    } // setupUi

    void retranslateUi(QWidget *printdialog)
    {
        printdialog->setWindowTitle(QApplication::translate("printdialog", "Tisk", 0));
        groupBox->setTitle(QApplication::translate("printdialog", "V\303\275b\304\233r tisk\303\241rny", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("printdialog", "FAX", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("printdialog", "Microsoft XPS Document Writer", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("printdialog", "Samsung CLX-3180 Series", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("printdialog", "Send to OneNote", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("printdialog", "S\303\255\305\245ov\303\241 tisk\303\241rna", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("printdialog", "PDF Writer", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("printdialog", "Stav: Online", 0));
        pushButton_4->setText(QApplication::translate("printdialog", "P\305\231edvolby", 0));
        groupBox_2->setTitle(QApplication::translate("printdialog", "Rozsah str\303\241nek", 0));
        radioButton->setText(QApplication::translate("printdialog", "V\305\241e", 0));
        radioButton_2->setText(QApplication::translate("printdialog", "V\303\275b\304\233r", 0));
        radioButton_3->setText(QApplication::translate("printdialog", "Str\303\241nky", 0));
        groupBox_3->setTitle(QApplication::translate("printdialog", "Kopi\303\255", 0));
        label_2->setText(QApplication::translate("printdialog", "Po\304\215et kopi\303\255:", 0));
        checkBox->setText(QApplication::translate("printdialog", "Na v\303\275\305\241ku", 0));
        checkBox_2->setText(QApplication::translate("printdialog", "Kompletovat", 0));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("printdialog", "Obecn\303\251", 0));
        pushButton->setText(QApplication::translate("printdialog", "Storno", 0));
        pushButton_2->setText(QApplication::translate("printdialog", "Pou\305\276\303\255t", 0));
        pushButton_3->setText(QApplication::translate("printdialog", "Tiskni", 0));
    } // retranslateUi

};

namespace Ui {
    class printdialog: public Ui_printdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOG_H
