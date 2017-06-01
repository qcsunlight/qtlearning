﻿#include "detail.h"

Detail::Detail(QWidget *parent) :
    QWidget(parent)
{
    initLayout();
}
void Detail::initLayout()
{
    NationalLabel = new QLabel(tr("国家/地区："));
    NationalComboBox = new QComboBox;
    NationalComboBox->insertItem(0,tr("中国"));
    NationalComboBox->insertItem(1,tr("美国"));
    NationalComboBox->insertItem(2,tr("英国"));
    NationalComboBox->insertItem(3,tr("其他"));

    ProvinceLabel = new QLabel(tr("省份："));
    ProvinceComboBox = new QComboBox;
    ProvinceComboBox->insertItem(0,tr("北京"));
    ProvinceComboBox->insertItem(1,tr("上海"));
    ProvinceComboBox->insertItem(2,tr("陕西"));
    ProvinceComboBox->insertItem(3,tr("其他"));

    CityLabel = new QLabel(tr("城市："));
    CityLineEdit = new QLineEdit;
    IntroductionLabel = new QLabel(tr("个人说明:"));
    IntroductionTextEdit = new QTextEdit;

    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addWidget(NationalLabel,0,0);
    mainLayout->addWidget(NationalComboBox,0,1);
    mainLayout->addWidget(ProvinceLabel,1,0);
    mainLayout->addWidget(ProvinceComboBox,1,1);
    mainLayout->addWidget(CityLabel,2,0);
    mainLayout->addWidget(CityLineEdit,2,1);
    mainLayout->addWidget(IntroductionLabel,3,0);
    mainLayout->addWidget(IntroductionTextEdit,3,1);

}
