#include "rootwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RootWidget w;
    w.show();

    return a.exec();
}
