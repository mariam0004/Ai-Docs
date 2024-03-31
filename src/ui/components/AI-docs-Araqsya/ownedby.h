#ifndef OWNEDBY_H
#define OWNEDBY_H

#include <QWidget>
#include <QMenuBar>

class ownedBy : public QWidget
{
    Q_OBJECT
public:
    ownedBy(QWidget *parent = nullptr);
private:
    QMenuBar *menuBar;
};

#endif // OWNEDBY_H
