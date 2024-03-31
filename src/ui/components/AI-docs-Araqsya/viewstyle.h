#ifndef VIEWSTYLE_H
#define VIEWSTYLE_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class viewStyle : public QWidget
{
    Q_OBJECT
public:
    explicit viewStyle(QWidget *parent = nullptr);

private slots:
    void changeIcon();

private:
    QPushButton *iconButton;
    bool isClicked;
};

#endif // VIEWSTYLE_H
