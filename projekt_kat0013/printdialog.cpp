#include "printdialog.h"

printdialog::printdialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(back()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(back()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(back()));
}
void printdialog::back(){
	close();
}
printdialog::~printdialog()
{

}
