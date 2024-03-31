#include "midsidebuttons.h"
#include <QHBoxLayout>

MidSideButtons::MidSideButtons(QWidget *parent) : QWidget(parent)
{
    setStyleSheet("background-color: white;");
    QHBoxLayout *layout = new QHBoxLayout(this);
    DocumentsByTitleWidget = new documentsByTitle;
    ownedByWidget = new ownedBy(this);
    viewWidget = new viewStyle(this);
    sortOptionsWidget = new sortOptions(this);
    filePickerWidget = new filePicker(this);

    layout->addWidget(DocumentsByTitleWidget);
    layout->addWidget(ownedByWidget);
    layout->addWidget(viewWidget);
    layout->addWidget(sortOptionsWidget);
    layout->addWidget(filePickerWidget);

    setLayout(layout);

}

