#include "newwindow.h"
#include <QLabel>
#include <QPushButton>

NewWindow::NewWindow(QWidget *parent)
    : QWidget(parent)
{

    setFixedSize(200, 200); // Adjust the size as needed

    titleLabel = new QLabel("Title", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setGeometry(0, 20, width(), 30); // Adjust position and size as needed

    closeButton = new QPushButton(this);
    closeButton->setIcon(QIcon("/home/anna/AI-Docs/src/ui/components/icons/x.png")); // Set your icon path here
    closeButton->setFixedSize(50, 50); // Adjust the size as needed
    closeButton->move(width() / 2 - closeButton->width() / 2, 100); // Adjust position as needed

}

NewWindow::~NewWindow()
{
    // No need to delete child widgets, they get deleted automatically when the parent is deleted
}
