#ifndef APPSWINDOW_H
#define APPSWINDOW_H

#include <QWidget>
#include <QPushButton>

#include <QGridLayout>
#include <QVBoxLayout>
#include <QLabel>


class AppsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AppsWindow(QWidget *parent = nullptr);
    ~AppsWindow();

private:
    void setupUI();
    void addContent1();
    void addContent2();

private slots:
    void openAccount();
    void openSearch();
    void openMap();
    void openPlay();
    void openNews();
    void openGmail();
    void openMeet();
    void openChat();
    void openContacts();
    void openDrive();
    void openCalendar();
    void openTranslate();
    void openPhoto();
    void openChrome();

    void openFinance();
    void openDocs();
    void openSheets();
    void openSlides();
    void openBooks();
    void openBlogger();
    void openKeep();
    void openJamboard();
    void openClassroom();
    void openEarth();
    void openSaved();
    void openArts();
    void openAds();
    void openGoogleOne();
    void openTravel();
    void openForms();
    void openStore();
    void openPassword();

    void closeWindow();



private:

    QGridLayout* firstLayout;

    QVBoxLayout* accountLayout;
    QPushButton* accountButton;
    QLabel* accountLabel;

    QVBoxLayout* searchLayout;
    QPushButton* searchButton;
    QLabel* searchLabel;

    QVBoxLayout* mapLayout;
    QPushButton* mapButton;
    QLabel* mapLabel;

    QVBoxLayout* playLayout;
    QPushButton* playButton;
    QLabel* playLabel;

    QVBoxLayout* newsLayout;
    QPushButton* newsButton;
    QLabel* newsLabel;

    QVBoxLayout* gmailLayout;
    QPushButton* gmailButton;
    QLabel* gmailLabel;

    QVBoxLayout* meetLayout;
    QPushButton* meetButton;
    QLabel* meetLabel;

    QVBoxLayout* chatLayout;
    QPushButton* chatButton;
    QLabel* chatLabel;

    QVBoxLayout* contactsLayout;
    QPushButton* contactsButton;
    QLabel* contactsLabel;

    QVBoxLayout* driveLayout;
    QPushButton* driveButton;
    QLabel* driveLabel;

    QVBoxLayout* calendarLayout;
    QPushButton* calendarButton;
    QLabel* calendarLabel;

    QVBoxLayout* translateLayout;
    QPushButton* translateButton;
    QLabel* translateLabel;

    QVBoxLayout* photoLayout;
    QPushButton* photoButton;
    QLabel* photoLabel;

    QVBoxLayout* chromeLayout;
    QPushButton* chromeButton;
    QLabel* chromeLabel;


    QGridLayout* secondLayout;

    QVBoxLayout* financeLayout;
    QPushButton* financeButton;
    QLabel* financeLabel;

    QVBoxLayout* docsLayout;
    QPushButton* docsButton;
    QLabel* docsLabel;

    QVBoxLayout* sheetsLayout;
    QPushButton* sheetsButton;
    QLabel* sheetsLabel;

    QVBoxLayout* slidesLayout;
    QPushButton* slidesButton;
    QLabel* slidesLabel;

    QVBoxLayout* booksLayout;
    QPushButton* booksButton;
    QLabel* booksLabel;

    QVBoxLayout* bloggerLayout;
    QPushButton* bloggerButton;
    QLabel* bloggerLabel;

    QVBoxLayout* keepLayout;
    QPushButton* keepButton;
    QLabel* keepLabel;

    QVBoxLayout* jamboardLayout;
    QPushButton* jamboardButton;
    QLabel* jamboardLabel;

    QVBoxLayout* classroomLayout;
    QPushButton* classroomButton;
    QLabel* classroomLabel;

    QVBoxLayout* earthLayout;
    QPushButton* earthButton;
    QLabel* earthLabel;

    QVBoxLayout* savedLayout;
    QPushButton* savedButton;
    QLabel* savedLabel;

    QVBoxLayout* artsLayout;
    QPushButton* artsButton;
    QLabel* artsLabel;

    QVBoxLayout* adsLayout;
    QPushButton* adsButton;
    QLabel* adsLabel;

    QVBoxLayout* googleoneLayout;
    QPushButton* googleoneButton;
    QLabel* googleoneLabel;

    QVBoxLayout* travelLayout;
    QPushButton* travelButton;
    QLabel* travelLabel;

    QVBoxLayout* formsLayout;
    QPushButton* formsButton;
    QLabel* formsLabel;

    QVBoxLayout* storeLayout;
    QPushButton* storeButton;
    QLabel* storeLabel;

    QVBoxLayout* passwordLayout;
    QPushButton* passwordButton;
    QLabel* passwordLabel;

    QGridLayout* mainLayout;
    QPushButton* xButton;


};

#endif // APPSWINDOW_H
