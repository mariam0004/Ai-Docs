#include "filepicker.h"
#include <QFileDialog>
#include <QVBoxLayout>
#include <openfilewindow.h>

filePicker::filePicker(QWidget *parent) : QWidget(parent)
{

    iconButton = new QPushButton(this);
    iconButton->setIcon(QIcon(":/images/Images/folder.png"));
    iconButton->setIconSize(QSize(50, 50));
    iconButton->setStyleSheet("QPushButton { border-radius: 25px; }");
    iconButton->setStyleSheet("QPushButton {"
                              "  text-align: center;"
                              "}"
                              "QPushButton:hover {"
                              "  border-radius: 25px;"
                              "  box-shadow: 3px 3px 5px grey;"
                              "}");

    connect(iconButton, &QPushButton::clicked, this, &filePicker::openFilePicker);
}

void filePicker::openFilePicker()
{
    openFileWindow *newWindow = new openFileWindow(this);
    newWindow->show();
}

