#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QCheckBox>

class Contact : public QWidget
{
    Q_OBJECT
public:
    Contact(QWidget *parent = 0);
    ~Contact(){}
    void initLayout();
private:
    QLabel *EmailLabel;
    QLineEdit *EmailLineEdit;
    QLabel *AddrLabel;
    QLineEdit *AddrLineEdit;
    QLabel *CodeLabel;
    QLineEdit *CodeLineEdit;
    QLabel *MoviTeLabel;
    QLineEdit *MoviTeLineEdit;
    QCheckBox *MoviTeCheckBox;
    QLabel *ProTeLabel;
    QLineEdit *ProTeLineEdit;
    QGridLayout *mainLayout;
};

#endif // CONTACT_H
