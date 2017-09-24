/********************************************************************************
** Form generated from reading UI file 'fontdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTDIALOG_H
#define UI_FONTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fontdialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QComboBox *comboBox;
    QLabel *label_2;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QCheckBox *checkBox;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLabel *label;

    void setupUi(QWidget *fontdialog)
    {
        if (fontdialog->objectName().isEmpty())
            fontdialog->setObjectName(QStringLiteral("fontdialog"));
        fontdialog->resize(700, 480);
        fontdialog->setMinimumSize(QSize(700, 480));
        fontdialog->setMaximumSize(QSize(700, 480));
        tabWidget = new QTabWidget(fontdialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 681, 421));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 211, 191));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_2 = new QListWidget(tab);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(450, 10, 211, 191));
        listWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_3 = new QListWidget(tab);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        new QListWidgetItem(listWidget_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(230, 10, 211, 191));
        listWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(450, 250, 211, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 220, 61, 20));
        label_2->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 651, 181));
        groupBox_2->setFont(font);
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(180, 30, 141, 22));
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(180, 60, 141, 22));
        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(180, 90, 141, 22));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 130, 301, 20));
        checkBox->setFont(font);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 30, 151, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 60, 151, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 90, 151, 20));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(540, 60, 101, 22));
        spinBox->setMinimum(1);
        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(540, 90, 101, 22));
        spinBox_2->setMinimum(1);
        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(431, 130, 71, 22));
        spinBox_3->setMinimum(1);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(430, 60, 101, 20));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(430, 90, 101, 20));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(540, 130, 101, 20));
        comboBox_5 = new QComboBox(tab_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(480, 230, 181, 22));
        comboBox_6 = new QComboBox(tab_2);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(480, 290, 181, 22));
        comboBox_7 = new QComboBox(tab_2);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(480, 320, 181, 22));
        comboBox_8 = new QComboBox(tab_2);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(480, 260, 181, 22));
        checkBox_2 = new QCheckBox(tab_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(280, 350, 381, 31));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 230, 181, 20));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 260, 181, 20));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 290, 181, 20));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 320, 181, 20));
        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(fontdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 440, 101, 31));
        pushButton_2 = new QPushButton(fontdialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 440, 111, 31));
        groupBox = new QGroupBox(fontdialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 260, 241, 151));
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 241, 141));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(fontdialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fontdialog);
    } // setupUi

    void retranslateUi(QWidget *fontdialog)
    {
        fontdialog->setWindowTitle(QApplication::translate("fontdialog", "fontdialog", 0));

        const bool __sortingEnabled = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_3->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("fontdialog", "Normalni", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_3->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("fontdialog", "Kurziva", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_3->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("fontdialog", "Tucne", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_3->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("fontdialog", "Tucne kurziva", 0));
        listWidget_3->setSortingEnabled(__sortingEnabled);

        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "St\305\231edoevropsk\303\251", 0)
         << QApplication::translate("fontdialog", "Z\303\241padn\303\255", 0)
         << QApplication::translate("fontdialog", "\305\230eck\303\251", 0)
         << QApplication::translate("fontdialog", "Tureck\303\251", 0)
         << QApplication::translate("fontdialog", "Pobaltsk\303\251", 0)
         << QApplication::translate("fontdialog", "Cyrilice", 0)
         << QApplication::translate("fontdialog", "Vietnamsk\303\251", 0)
        );
        label_2->setText(QApplication::translate("fontdialog", "Skript", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("fontdialog", "P\303\255smo", 0));
        groupBox_2->setTitle(QApplication::translate("fontdialog", "Prolo\305\276en\303\255 znak\305\257", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "100%", 0)
         << QApplication::translate("fontdialog", "150%", 0)
         << QApplication::translate("fontdialog", "200%", 0)
         << QApplication::translate("fontdialog", "50%", 0)
         << QApplication::translate("fontdialog", "33%", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "Norm\303\241ln\303\255", 0)
         << QApplication::translate("fontdialog", "Roz\305\241\303\255\305\231en\303\251", 0)
         << QApplication::translate("fontdialog", "Z\303\272\305\276en\303\251", 0)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "Norm\303\241ln\303\255", 0)
         << QApplication::translate("fontdialog", "Zv\303\275\305\241en\303\251", 0)
         << QApplication::translate("fontdialog", "Sn\303\255\305\276en\303\251", 0)
        );
        checkBox->setText(QApplication::translate("fontdialog", "Prokl\303\241d\303\241n\303\255 p\303\255sem velikost\303\255", 0));
        label_8->setText(QApplication::translate("fontdialog", "M\304\233\305\231\303\255tko:", 0));
        label_9->setText(QApplication::translate("fontdialog", "Mezery:", 0));
        label_10->setText(QApplication::translate("fontdialog", "Um\303\255st\304\233n\303\255:", 0));
        label_11->setText(QApplication::translate("fontdialog", "O kolik:", 0));
        label_12->setText(QApplication::translate("fontdialog", "O kolik:", 0));
        label_13->setText(QApplication::translate("fontdialog", "Bod\305\257 a v\303\255ce", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "\305\275\303\241dn\303\251", 0)
         << QApplication::translate("fontdialog", "Pouze standardn\303\255", 0)
         << QApplication::translate("fontdialog", "Standardn\303\255 a kontextov\303\251", 0)
         << QApplication::translate("fontdialog", "Historick\303\251 a voliteln\303\251", 0)
         << QApplication::translate("fontdialog", "V\305\241echny", 0)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "V\303\275choz\303\255", 0)
         << QApplication::translate("fontdialog", "Vyrovnan\303\251", 0)
         << QApplication::translate("fontdialog", "Starod\303\241vn\303\251", 0)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "1", 0)
         << QApplication::translate("fontdialog", "2", 0)
         << QApplication::translate("fontdialog", "3", 0)
         << QApplication::translate("fontdialog", "4", 0)
         << QApplication::translate("fontdialog", "5", 0)
         << QApplication::translate("fontdialog", "6", 0)
         << QApplication::translate("fontdialog", "7", 0)
         << QApplication::translate("fontdialog", "8", 0)
         << QApplication::translate("fontdialog", "9", 0)
         << QApplication::translate("fontdialog", "10", 0)
         << QApplication::translate("fontdialog", "11", 0)
         << QApplication::translate("fontdialog", "12", 0)
         << QApplication::translate("fontdialog", "13", 0)
         << QApplication::translate("fontdialog", "14", 0)
         << QApplication::translate("fontdialog", "15", 0)
         << QApplication::translate("fontdialog", "16", 0)
         << QApplication::translate("fontdialog", "17", 0)
         << QApplication::translate("fontdialog", "18", 0)
         << QApplication::translate("fontdialog", "19", 0)
         << QApplication::translate("fontdialog", "20", 0)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("fontdialog", "V\303\275choz\303\255", 0)
         << QApplication::translate("fontdialog", "Propor\304\215n\303\255", 0)
         << QApplication::translate("fontdialog", "Tabulkov\303\251", 0)
        );
        checkBox_2->setText(QApplication::translate("fontdialog", "Pou\305\276\303\255vat kontextov\303\251 alternativy", 0));
        label_4->setText(QApplication::translate("fontdialog", "Ligatury:", 0));
        label_5->setText(QApplication::translate("fontdialog", "Mezery mezi \304\215\303\255sly:", 0));
        label_6->setText(QApplication::translate("fontdialog", "\304\214\303\255seln\303\251 tvary:", 0));
        label_7->setText(QApplication::translate("fontdialog", "Stylistick\303\251 sady:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("fontdialog", "Up\305\231esnit", 0));
        pushButton->setText(QApplication::translate("fontdialog", "Pou\305\276\303\255t", 0));
        pushButton_2->setText(QApplication::translate("fontdialog", "Storno", 0));
        groupBox->setTitle(QApplication::translate("fontdialog", "Uk\303\241zka", 0));
        label->setText(QApplication::translate("fontdialog", "AaBbYy", 0));
    } // retranslateUi

};

namespace Ui {
    class fontdialog: public Ui_fontdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTDIALOG_H
