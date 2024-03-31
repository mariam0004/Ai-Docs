#include "mainwindow.h"
#include "appswindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    appsButton = new QPushButton(this);
    appsButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/google-apps-button/icons/googleApps.png"));
    appsButton->setFixedSize(50, 50);
    appsButton->move(width() - appsButton->width(), 0);

    connect(appsButton, &QPushButton::clicked, this, &MainWindow::openAppsWindow);
}

MainWindow::~MainWindow()
{
}

void MainWindow::openAppsWindow()
{
    appsWindow = new AppsWindow(this);
    appsWindow->show();
}
