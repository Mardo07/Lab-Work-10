#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

class Widget:public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QGridLayout *mainLayout=NULL;
    QLabel *labelText=NULL;
    QLineEdit *editText=NULL;
    QLabel *labelKey=NULL;
    QLineEdit *editKey=NULL;
    QLabel *labelEnc=NULL;
    QLineEdit *editEnc=NULL;
    QPushButton *buttOk=NULL;
    QPushButton *buttCancel=NULL;
};

#endif // WIDGET_H
