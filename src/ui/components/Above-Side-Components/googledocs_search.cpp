#include "googledocs_search.h"
#include "google_services_window.h"
#include <QLabel>



GoogleDocsSearch::GoogleDocsSearch(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QIcon searchIcon("/home/mariam/Downloads/search.png"); //  search icon
    QIcon docsIcon("/home/mariam/Downloads/docs.png"); // the docs icon
    QIcon menuBarIcon("/home/mariam/Downloads/menu.png"); //  menuBar icon

    QHBoxLayout *hLayout = new QHBoxLayout();

    // MenuBar Button
    menuBarButton = new QPushButton(this);
    menuBarButton->setIcon(menuBarIcon);
    menuBarButton->setFixedSize(50, 50); // Set button size
    menuBarButton->setIconSize(QSize(40, 40)); // Set icon size
    menuBarButton->setStyleSheet("QPushButton { border: none; background: transparent; }");
    connect(menuBarButton, &QPushButton::clicked, this, &GoogleDocsSearch::menuBarIconClicked); // Connect clicked signal to slot

    // Docs Icon Label
    docsIconLabel = new QLabel(this);
    docsIconLabel->setPixmap(docsIcon.pixmap(50, 50)); // Set larger icon size
    docsIconLabel->setScaledContents(true); // Ensure icon fills the QLabel
    docsIconLabel->setStyleSheet("background-color: transparent;"); // Set transparent background

    // Add spacer for left side distance for Docs Icon
    QSpacerItem *leftDocsSpacer = new QSpacerItem(70, 0, QSizePolicy::Fixed, QSizePolicy::Preferred);

    // Add spacer for left side distance
    QSpacerItem *leftSpacer = new QSpacerItem(60, 0, QSizePolicy::Fixed, QSizePolicy::Preferred);

    // Add spacer for right side distance
    QSpacerItem *rightSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Preferred);

    // Search LineEdit with icon and text
    searchLineEdit = new ClickableLineEdit(this);
    searchLineEdit->setPlaceholderText("Search");
    searchLineEdit->setClearButtonEnabled(true);
    searchLineEdit->addAction(searchIcon, QLineEdit::LeadingPosition);
    searchLineEdit->setStyleSheet("QLineEdit { border-radius: 10px; padding:7 px;background-color: lightgray; }");

    // Add the icons, spacers, and the search line edit to the layout
    hLayout->addWidget(menuBarButton);
    hLayout->addSpacerItem(leftDocsSpacer);
    hLayout->addWidget(docsIconLabel);
    hLayout->addSpacerItem(leftSpacer);
    hLayout->addWidget(searchLineEdit);
    hLayout->addSpacerItem(rightSpacer);

    // Add the layout to the main layout
    layout->addLayout(hLayout);

    // Additional widgets can be added below the search line edit
    searchResultsTextEdit = new QTextEdit(this);
    layout->addWidget(searchResultsTextEdit);

    connect(searchLineEdit, &ClickableLineEdit::iconClicked, this, &GoogleDocsSearch::performSearch);
    connect(searchLineEdit, &QLineEdit::textChanged, this, &GoogleDocsSearch::highlightSearchText);


    setAttribute(Qt::WA_Hover);

    // Connect the menuBarButton's clicked signal to the menuBarIconClicked slot
    connect(menuBarButton, &QPushButton::clicked, this, &GoogleDocsSearch::menuBarIconClicked);
  //    connect(menuBarButton, &QPushButton::clicked, this, &GoogleDocsSearch::menuBarIconClicked);

//    googleServicesWindow = new GoogleServicesWindow(this); // Assuming the parent of GoogleServicesWindow is set to this widget
 //   googleServicesWindow->hide(); // Initially hide the window
}




void GoogleDocsSearch::highlightSearchText(const QString &text) {
    QString searchText = searchLineEdit->text();
    QTextDocument *doc = searchResultsTextEdit->document();
    QTextCursor cursor(doc);

    QTextCharFormat format;
    format.setBackground(Qt::lightGray);

    cursor.beginEditBlock();
    cursor.movePosition(QTextCursor::Start);
    QTextCursor highlightCursor = cursor;

    while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
        highlightCursor = doc->find(searchText, highlightCursor);
        if (!highlightCursor.isNull()) {
            highlightCursor.mergeCharFormat(format);
        }
    }

    cursor.endEditBlock();
}

void GoogleDocsSearch::performSearch() {
    QString searchText = searchLineEdit->text();
    // Perform search action here
    // For example, display the searched text in a message box
    QMessageBox::information(this, "Search", "Searching for: " + searchText);

}

void GoogleDocsSearch::menuBarIconClicked() {
    GoogleServicesWindow *servicesWindow = new GoogleServicesWindow(this);
    servicesWindow->show();
}

bool GoogleDocsSearch::eventFilter(QObject *obj, QEvent *event) {
    if (obj == menuBarButton && event->type() == QEvent::MouseButtonPress) {
        // Handle the mouse press event
        menuBarIconClicked();
        return true;
    }
    return QWidget::eventFilter(obj, event);
}

/*
void GoogleDocsSearch::enterEvent(QEvent *event) {
    // Set highlighted style when the mouse enters
    menuBarButton->setStyleSheet("QPushButton { border: 2px solid lightgray; border-radius: 25px; background-color: lightgray; }");
}

void GoogleDocsSearch::leaveEvent(QEvent *event) {
    // Reset the style when the mouse leaves
    menuBarButton->setStyleSheet("QPushButton { border: none; background: transparent; }");
}*/





