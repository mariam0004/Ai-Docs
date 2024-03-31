// google_services_window.cpp
#include "google_services_window.h"
#include <QVBoxLayout>

GoogleServicesWindow::GoogleServicesWindow(QWidget *parent) : QWidget(parent) {
    setFixedSize(parent->width() / 3, parent->height()); // Set 1/3 width of parent

    setupUi();
}

void GoogleServicesWindow::setupUi() {
    QVBoxLayout *mainLayout = new QVBoxLayout(this); // Vertical layout for the main window
    mainLayout->setContentsMargins(0, 0, 0, 0); // No margins

    // Create a widget to contain the icons
    QWidget *iconsWidget = new QWidget(this);
    iconsWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding); // Allow the widget to expand
    iconsWidget->setStyleSheet("background-color:  white;"); // Set blue background color
    mainLayout->addWidget(iconsWidget); // Add the widget to the main layout

    // Use a vertical layout for the icons
    QVBoxLayout *iconsLayout = new QVBoxLayout(iconsWidget);
    iconsLayout->setAlignment(Qt::AlignCenter); // Align icons to the center

    // Google icon
    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/google (2).png", "Google");
  //  addSeparator(iconsLayout);

    // Sheets icon
    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/sheets.png", "Sheets");
  //  addSeparator(iconsLayout);

    // Docs icon
    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/docs.png", "Docs");
  //  addSeparator(iconsLayout);

    // Slides icon
    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/google.png", "Slides");
 //   addSeparator(iconsLayout);

    // google form icon
    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/google-forms.png", "Forms");
    addSeparator(iconsLayout);

    // Settings icon
    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/settings.png", "Settings");

    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/help-web-button.png", "Help &  Feedback");
    addSeparator(iconsLayout);

    addServiceIcon(iconsLayout, "/home/mariam/AI_DOCS/src/ui/components/Icons/google-drive.png", "Drive");

    addSeparator(iconsLayout);

    layout = new QGridLayout(this);

    // Add your service icons and other UI elements here

    // Add close button
    closeButton = new QPushButton("X", this);
    closeButton->setFixedSize(20, 20); // Set a fixed size for the button
    closeButton->setStyleSheet("QPushButton {"
                               "    border-radius: 10px;" //circle form
                               "    background-color: transparent;"
                               "    color: black;"
                               "}"
                               "QPushButton:hover {"
                               "    background-color: red;"
                               "}"); // Adjust the style as needed
    layout->addWidget(closeButton, 1, 1,0 ,0, Qt::AlignTop | Qt::AlignRight); // Add the button with rectangle parameters, aligned to top-right
    connect(closeButton, &QPushButton::clicked, this, &GoogleServicesWindow::closeWindow);
}

void GoogleServicesWindow::addServiceIcon(QVBoxLayout *layout, const QString &iconPath, const QString &text) {
    QWidget *iconWidget = new QWidget(); // 'this' as parent
    QHBoxLayout *iconLayout = new QHBoxLayout(iconWidget);
    iconLayout->setContentsMargins(0, 0, 0, 0);
    iconLayout->setSpacing(5); // Add spacing between icon and text

    QLabel *iconLabel = new QLabel(); // don't pass 'this' as parent here
    QPixmap pixmap(iconPath);
    if (text == "Google") {
        pixmap = pixmap.scaled(40, 40, Qt::KeepAspectRatio);
    } else {
        pixmap = pixmap.scaled(20, 20, Qt::KeepAspectRatio);
    }
    iconLabel->setPixmap(pixmap);
    iconLayout->addWidget(iconLabel);

    QLabel *textLabel = new QLabel(text); // Create label for text
    if (text == "Google") { // Check if it's the Google text
        QFont font = textLabel->font();
        font.setPointSize(15); // Set bigger font size for Google text
        textLabel->setFont(font);
    }
    iconLayout->addWidget(textLabel);

    layout->addWidget(iconWidget);
}




void GoogleServicesWindow::addSeparator(QVBoxLayout *layout) {
    QFrame *line = new QFrame(this);
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed); // Set size policy to expand horizontally
    layout->addWidget(line);
}

void GoogleServicesWindow::closeWindow() {
    this->hide();
}


