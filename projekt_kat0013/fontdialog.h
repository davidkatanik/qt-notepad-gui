#ifndef FONTDIALOG_H
#define FONTDIALOG_H

#include <QWidget>
#include <QtWidgets/QMainWindow>
#include "ui_fontdialog.h"

class fontdialog : public QWidget
{
	Q_OBJECT

public:
	fontdialog(QWidget *parent = 0);
	~fontdialog();
	QFont font;

private:
	Ui::fontdialog ui;
	private slots:
	void familySelect(QListWidgetItem *);
	void fontSelect(QListWidgetItem *);
	void sizeSelect(QListWidgetItem *);
	void back();
};

#endif // FONTDIALOG_H
