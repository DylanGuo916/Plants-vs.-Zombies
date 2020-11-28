#include "mainwindow.h"
#include "mainview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow(gMainView);
    mainWindow.show();
    int res = app.exec();
    return res;
}
