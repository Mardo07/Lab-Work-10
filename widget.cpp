#include "widget.h"

Widget::Widget(QWidget *parent)
    :QWidget(parent)
{
    mainLayout = new QGridLayout(this);

    labelText=new QLabel(tr("Enter text"),this);
    mainLayout->addWidget(labelText,0,0,1,1);
    editText=new QLineEdit(this);
    mainLayout->addWidget(editText,0,1,1,3);

    labelKey=new QLabel(tr("Key"),this);
    mainLayout->addWidget(labelKey,1,0,1,1);
    editKey=new QLineEdit(this);
    mainLayout->addWidget(editKey,1,1,1,3);

    labelEnc=new QLabel(tr("Encryption text"),this);
    mainLayout->addWidget(labelEnc,2,0,1,2);
    editKey=new QLineEdit(this);
    mainLayout->addWidget(editKey,2,2,1,2);

    buttOk=new QPushButton(tr("Ok"),this);
    mainLayout->addWidget(buttOk,3,0,1,2);

    buttCancel=new QPushButton(tr("Cancel"),this);
    mainLayout->addWidget(buttCancel,3,3,1,1);

    mainLayout->setColumnStretch(2,1);
    mainLayout->setRowStretch(4,1);

}

Widget::~Widget(){

}
