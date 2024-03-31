#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QWidget>

class QLabel;
class QPushButton;

class NewWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewWindow(QWidget *parent = nullptr);
    ~NewWindow();

private:
    QLabel *titleLabel;
    QPushButton *closeButton;
};

#endif // NEWWINDOW_H
