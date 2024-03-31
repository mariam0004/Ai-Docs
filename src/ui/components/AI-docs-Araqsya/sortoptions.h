#ifndef SORTOPTIONS_H
#define SORTOPTIONS_H

#include <QWidget>
#include <QPushButton>

class sortOptions : public QWidget
{
    Q_OBJECT
public:
    explicit sortOptions(QWidget *parent = nullptr);
private:
    QPushButton *iconButton;
};

#endif // SORTOPTIONS_H
