#include "contact.h"

Contact::Contact(QWidget *parent) :
    QWidget(parent)
{
    initLayout();
}
void Contact::initLayout()
{
    EmailLabel = new QLabel(tr("电子邮件："));
    EmailLineEdit = new QLineEdit;
    AddrLabel = new QLabel(tr("联系地址："));
    AddrLineEdit = new QLineEdit;
    CodeLabel = new QLabel(tr("邮政编码："));
    CodeLineEdit = new QLineEdit;
    MoviTeLabel = new QLabel(tr("移动电话："));
    MoviTeLineEdit = new QLineEdit;
    MoviTeCheckBox = new QCheckBox(tr("接收留言"));
    ProTeLabel = new QLabel(tr("办公电话："));
    ProTeLineEdit = new QLineEdit;

    mainLayout = new QGridLayout(this);
    mainLayout ->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addWidget(EmailLabel,0,0);
    mainLayout->addWidget(EmailLineEdit,0,1);
    mainLayout->addWidget(AddrLabel,1,0);
    mainLayout->addWidget(AddrLineEdit,1,1);
    mainLayout->addWidget(CodeLabel,2,0);
    mainLayout->addWidget(CodeLineEdit,2,1);
    mainLayout->addWidget(MoviTeLabel,3,0);
    mainLayout->addWidget(MoviTeLineEdit,3,1);
    mainLayout->addWidget(MoviTeCheckBox,3,2);
    mainLayout->addWidget(ProTeLabel,4,0);
    mainLayout->addWidget(ProTeLineEdit,4,1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
