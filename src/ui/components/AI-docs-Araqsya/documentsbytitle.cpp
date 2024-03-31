#include "documentsbytitle.h"
#include <QVBoxLayout>

documentsByTitle::documentsByTitle(QWidget *parent)
    : QWidget(parent)
{
    doclabel = new QLabel("Documents by Title", this);
    doclabel->setStyleSheet("font-size: 16px;");

}

