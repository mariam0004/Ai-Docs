#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class AccountWindow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openAccountWindow();

private:
    QPushButton *accountButton;
    AccountWindow *accountWindow;
};

#endif // MAINWINDOW_H
