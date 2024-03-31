#include "newfile.h"
#include <QVBoxLayout>
#include <QLabel>

NewFile::NewFile(QWidget *parent) : QWidget(parent) {
    QLabel *titleLabel = new QLabel("Create a New File", this);
    titleLabel->setAlignment(Qt::AlignCenter);

    // Add more widgets as needed for file creation, e.g., text fields, buttons, etc.

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(titleLabel);
    // Add other widgets to the layout
    // layout->addWidget(otherWidget);

    setLayout(layout);

    setFixedSize(1300, 1000); // Adjust size as necessary
}
