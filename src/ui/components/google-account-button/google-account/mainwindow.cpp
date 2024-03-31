#include "mainwindow.h"
#include "accountwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    accountButton = new QPushButton(this);
    accountButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-account-button/icons/google-account.png"));
    accountButton->setFixedSize(50, 50);
    accountButton->move(width(), 0);

    connect(accountButton, &QPushButton::clicked, this, &MainWindow::openAccountWindow);
}

MainWindow::~MainWindow()
{
}

void MainWindow::openAccountWindow()
{
    accountWindow = new AccountWindow(this);
    accountWindow->show();
}
