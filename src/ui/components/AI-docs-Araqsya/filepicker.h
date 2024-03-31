#ifndef FILEPICKER_H
#define FILEPICKER_H

#include <QWidget>
#include <QPushButton>

class filePicker : public QWidget
{
    Q_OBJECT

public:
    explicit filePicker(QWidget *parent = nullptr);

private slots:
    void openFilePicker();
private:
    QPushButton *iconButton;
};

#endif // FILEPICKER_H
