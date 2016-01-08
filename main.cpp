#include "mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QStringList messages;
    messages << tr("String 1")
             << tr("String 2")
             << tr("String 3")
             << tr("Test String");

    foreach (QString msg, messages)
        QMessageBox::information(this, "Title", msg);
}

MainWindow::~MainWindow()
{

}
