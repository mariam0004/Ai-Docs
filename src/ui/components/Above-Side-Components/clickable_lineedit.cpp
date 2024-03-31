#include "clickable_lineedit.h"

#include <QMouseEvent>

ClickableLineEdit::ClickableLineEdit(QWidget *parent) : QLineEdit(parent) {}

void ClickableLineEdit::mousePressEvent(QMouseEvent *event) {
    QLineEdit::mousePressEvent(event);

    const int iconWidth = 15; // your icon size
    if (event->button() == Qt::LeftButton &&
        event->x() <= iconWidth + 2 * this->height()) { // Check if clicked within the icon area
        emit iconClicked();
    }
}
