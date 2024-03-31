#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class AppsWindow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openAppsWindow();

private:
    QPushButton *appsButton;
    AppsWindow *appsWindow;
};

#endif // MAINWINDOW_H
