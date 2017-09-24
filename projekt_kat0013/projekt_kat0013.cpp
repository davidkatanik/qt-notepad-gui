#include "projekt_kat0013.h"
#include <QComboBox>
#include <QLabel>
#include <qmessagebox>
projekt_kat0013::projekt_kat0013(QWidget *parent): QMainWindow(parent)
{
	ui.setupUi(this);
	cmbox = new QComboBox();
	cmbox2 = new QComboBox();
	static QFontDatabase qfd;
	QStringList list;
	list << "7" << "9" << "10" << "11" << "12" << "13" << "15" << "17";

	cmbox->addItems(qfd.families());

	cmbox2->addItems(list);
	ui.toolBar->addWidget(cmbox);
	ui.toolBar->addWidget(cmbox2);

	QString s = "";
	for (int i = 1; i <= 60; i++){
		s.append(QString::number(i));
		s.append("\n");
	}
	ui.ptNumbers->appendPlainText(s);
	ui.ptNumbers->moveCursor(QTextCursor::Start);
	ui.ptNumbers->setReadOnly(true);
	QLabel *label = new QLabel();
	label->setText("   Pocet slov: 0");
	QLabel *label2 = new QLabel();
	label2->setText(" Kodovani: UTF-8   ");
	label2->setMinimumWidth(width()/2);
	label2->setAlignment(Qt::AlignRight);
	ui.statusBar->addWidget(label);
	ui.statusBar->addPermanentWidget(label2);

	connect(ui.actionPrint, SIGNAL(triggered()), this, SLOT(pdialog()));
	connect(ui.actionTisk, SIGNAL(triggered()), this, SLOT(pdialog()));
	connect(ui.actionP_smo, SIGNAL(triggered()), this, SLOT(fdialog()));
	connect(ui.actionO_programu, SIGNAL(triggered()), this, SLOT(about()));
}
void projekt_kat0013::pdialog(){
	print_dialog->show();
}
void projekt_kat0013::fdialog(){
	font_dialog->show();
}
void projekt_kat0013::about(){
	QMessageBox::information(this, tr("URO projekt"), tr("Tento projekt vyhotovil David Katanik"));
}
projekt_kat0013::~projekt_kat0013()
{

}
