#include "mainwindow.h"
#include "mainview.h"
#include "aspectratiolayout.h"
#include <QLayout>
#include <QVBoxLayout>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent),
      mainView(gMainView)
{
    QWidget *centralWidget = new QWidget();
    QLayout *layout = new QVBoxLayout();
    layout->addWidget(mainView);
    QComboBox *comboBox = new QComboBox();
    layout->addWidget(comboBox);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
    setPalette(Qt::red);
    setAutoFillBackground(true);
    adjustSize();
}

MainWindow::~MainWindow()
{


}

