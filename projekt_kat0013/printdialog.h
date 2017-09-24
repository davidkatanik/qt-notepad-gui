#ifndef PRINTDIALOG_H
#define PRINTDIALOG_H

#include <QWidget>
#include "ui_printdialog.h"

class printdialog : public QWidget
{
	Q_OBJECT

public:
	printdialog(QWidget *parent = 0);
	~printdialog();

private:
	Ui::printdialog ui;
private slots:
	void back();
};

#endif // PRINTDIALOG_H
