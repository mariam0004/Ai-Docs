#ifndef DOCUMENTSBYTITLE_H
#define DOCUMENTSBYTITLE_H

#include <QWidget>
#include <QLabel>

class documentsByTitle : public QWidget
{
    Q_OBJECT

public:
    explicit documentsByTitle(QWidget *parent = nullptr);
private:
    QLabel *doclabel;
};
#endif // DOCUMENTSBYTITLE_H
