#include "openfilewindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

openFileWindow::openFileWindow(QWidget *parent) : QWidget(parent)
{

    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("This is the openFileWindow", this);
    layout->addWidget(label);
}
