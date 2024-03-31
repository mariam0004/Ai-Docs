
#ifndef GOOGLEDOCS_SEARCH_H
#define GOOGLEDOCS_SEARCH_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QIcon>
#include <QMessageBox>
#include <QPushButton>
#include <QEvent>
#include "clickable_lineedit.h" // Assuming you have this header for ClickableLineEdit

class GoogleDocsSearch : public QWidget {
    Q_OBJECT

public:
    explicit GoogleDocsSearch(QWidget *parent = nullptr);

private slots:
    //    void highlightDocsIcon();
    //    void highlightMailIcon();
    void highlightSearchText(const QString &text);
    void menuBarIconClicked(); // Slot for handling menuBar icon click





public:
    void performSearch();




public:
    ClickableLineEdit *searchLineEdit;
    QTextEdit *searchResultsTextEdit;
    QLabel *docsIconLabel; // Added member variable for docs icon label
    QLabel *mailIconLabel; // Added member variable for mail icon label
    QPushButton *menuBarButton;

    bool isMouseOverMenuBar;
 //   QPushButton *menuBarButton;


protected:
    bool eventFilter(QObject *obj, QEvent *event);

};

#endif // GOOGLEDOCS_SEARCH_H

