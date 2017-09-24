#include "fontdialog.h"
#include <QFontDatabase>
#include <QFont>
#include <QDebug>

fontdialog::fontdialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	static QFontDatabase qfd;
	ui.label->setFont(font);
	ui.listWidget->addItems(qfd.families());
	for (int i = 1; i <= 72; i++){
		ui.listWidget_2->addItem(QString::number(i));
	}
	connect(ui.listWidget, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(familySelect(QListWidgetItem *)));
	connect(ui.listWidget_3, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(fontSelect(QListWidgetItem *)));
	connect(ui.listWidget_2, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(sizeSelect(QListWidgetItem *)));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(back()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(back()));
}
void fontdialog::familySelect(QListWidgetItem *family){
	font.setFamily(family->text());
	ui.label->setFont(font);
}
void fontdialog::fontSelect(QListWidgetItem *ft){
	QString k = "Kurziva";
	QString t = "Tucne";
	QString tk = "Tucne kurziva";
	if (ft->text() == k){
		font.setBold(false);
		font.setItalic(true);
	}
	else if (ft->text() == t){
		font.setBold(true);
		font.setItalic(false);
	}
	else if (ft->text() == tk){
		font.setBold(true);
		font.setItalic(true);
	}
	else {
		font.setBold(false);
		font.setItalic(false);
	}
	ui.label->setFont(font);
}
void fontdialog::sizeSelect(QListWidgetItem *size){
	QString s = size->text();
	int i = s.split(" ")[0].toInt();
	font.setPixelSize(i);
	ui.label->setFont(font);
}
void fontdialog::back(){
	close();
}
fontdialog::~fontdialog()
{

}
