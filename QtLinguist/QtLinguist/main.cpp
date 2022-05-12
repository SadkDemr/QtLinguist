#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator t;
    t.load(":/lang_tr.qm");

    //a.installTranslator(&t); //this part will be restored if you comment line

    MainWindow w;
    w.show();
    return a.exec();
}
