#include "userinfo.h"
#include <QApplication>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UserInfo w;

    w.show();

    return a.exec();
}
