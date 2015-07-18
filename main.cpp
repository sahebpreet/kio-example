#include <QtGui/QApplication>
#include "kioexample.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    KIOExample foo;
    foo.show();
    return app.exec();
}
