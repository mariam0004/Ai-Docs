#include "viewstyle.h"

viewStyle::viewStyle(QWidget *parent) : QWidget(parent)
{
    iconButton = new QPushButton(this);
    iconButton->setIcon(QIcon(":/images/Images/view-grid.png"));
    iconButton->setIconSize(QSize(50, 50));
    iconButton->setStyleSheet("QPushButton {"
                              "  text-align: center;"
                              "}"
                              "QPushButton:hover {"
                              "  border-radius: 25px;"
                              "  box-shadow: 3px 3px 5px grey;"
                              "}");

    connect(iconButton, &QPushButton::clicked, this, &viewStyle::changeIcon);

    isClicked = false;
}

void viewStyle::changeIcon()
{
    if (!isClicked) {
        iconButton->setIcon(QIcon(":/images/Images/view-list.png"));
    } else {
        iconButton->setIcon(QIcon(":/images/Images/view-grid.png"));
    }

    isClicked = !isClicked;
}
