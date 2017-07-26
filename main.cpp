#include <QApplication>
#include "resizeabletabwidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ResizeableTabWidget mywidget;
    mywidget.resize(336, 227);
    mywidget.show();

    return a.exec();
}
