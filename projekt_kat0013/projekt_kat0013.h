#ifndef PROJEKT_KAT0013_H
#define PROJEKT_KAT0013_H

#include <QtWidgets/QMainWindow>
#include "ui_projekt_kat0013.h"
#include "printdialog.h"
#include "fontdialog.h"
class projekt_kat0013 : public QMainWindow
{
	Q_OBJECT

public:
	projekt_kat0013(QWidget *parent = 0);
	~projekt_kat0013();

private:
	Ui::projekt_kat0013Class ui;
	QComboBox *cmbox;
	QComboBox *cmbox2;
	printdialog *print_dialog = new printdialog();
	fontdialog *font_dialog = new fontdialog();


private slots :
	void pdialog();
	void fdialog();
	void about();

};

#endif // PROJEKT_KAT0013_H
