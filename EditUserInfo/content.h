#ifndef CONTENT_H
#define CONTENT_H

#include <QFrame>
#include <QStackedWidget>
#include <QPushButton>
#include "baseinfo.h"
#include "detail.h"
#include "contact.h"

class Content : public QFrame
{
    Q_OBJECT
public:
    Content(QWidget *parent=0);
    QStackedWidget *stack;
    QPushButton *AmendBtn;
    QPushButton *CloseBtn;

    BaseInfo *baseinfo;
    Contact *contact;
    Detail *detail;
};

#endif // CONTENT_H
