#include "appswindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QVBoxLayout>

AppsWindow::AppsWindow(QWidget *parent)
    : QWidget(parent)
{
    setupUI();
}

void AppsWindow::setupUI()
{
    mainLayout = new QGridLayout(this);
    setFixedSize(300, 1100);

    addContent1();
    addContent2();

    mainLayout->addLayout(firstLayout, 0, 0);
    mainLayout->addLayout(secondLayout, 1, 0);

    setLayout(mainLayout);
}

void AppsWindow::addContent1()
{
    firstLayout = new QGridLayout();

    accountLayout = new QVBoxLayout;
    accountLayout->setSpacing(0);
    accountButton = new QPushButton(this);
    accountButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/account.png"));
    accountButton->setFixedSize(50, 50);
    accountLayout->addWidget(accountButton);
    accountLabel = new QLabel("Account");
    accountLayout->addWidget(accountLabel);
    accountLayout->addStretch(1);
    connect(accountButton, &QPushButton::clicked, this, &AppsWindow::openAccount);

    searchLayout = new QVBoxLayout;
    searchLayout->setSpacing(0);
    searchButton = new QPushButton(this);
    searchButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/search.png"));
    searchButton->setFixedSize(50, 50);
    searchButton->setFixedSize(50, 50);
    searchLayout->addWidget(searchButton);
    searchLabel = new QLabel("Search");
    searchLayout->addWidget(searchLabel);
    searchLayout->addStretch(1);
    connect(searchButton, &QPushButton::clicked, this, &AppsWindow::openSearch);

    mapLayout = new QVBoxLayout;
    mapLayout->setSpacing(0);
    mapButton = new QPushButton(this);
    mapButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-maps.png"));
    mapButton->setFixedSize(50, 50);
    mapLayout->addWidget(mapButton);
    mapLabel = new QLabel("Map");
    mapLayout->addWidget(mapLabel);
    mapLayout->addStretch(1);
    connect(mapButton, &QPushButton::clicked, this, &AppsWindow::openMap);

    playLayout = new QVBoxLayout;
    playLayout->setSpacing(0);
    playButton = new QPushButton(this);
    playButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-play.png"));
    playButton->setFixedSize(50, 50);
    playLayout->addWidget(playButton);
    playLabel = new QLabel("Play");
    playLayout->addWidget(playLabel);
    playLayout->addStretch(1);
    connect(playButton, &QPushButton::clicked, this, &AppsWindow::openPlay);

    newsLayout = new QVBoxLayout;
    newsLayout->setSpacing(0);
    newsButton = new QPushButton(this);
    newsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google.png"));
    newsButton->setFixedSize(50, 50);
    newsLayout->addWidget(newsButton);
    newsLabel = new QLabel("News");
    newsLayout->addWidget(newsLabel);
    newsLayout->addStretch(1);
    connect(newsButton, &QPushButton::clicked, this, &AppsWindow::openNews);

    gmailLayout = new QVBoxLayout;
    gmailLayout->setSpacing(0);
    gmailButton = new QPushButton(this);
    gmailButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/gmail.png"));
    gmailButton->setFixedSize(50, 50);
    gmailLayout->addWidget(gmailButton);
    gmailLabel = new QLabel("Gmail");
    gmailLayout->addWidget(gmailLabel);
    gmailLayout->addStretch(1);
    connect(gmailButton, &QPushButton::clicked, this, &AppsWindow::openGmail);

    meetLayout = new QVBoxLayout;
    meetLayout->setSpacing(0);
    meetButton = new QPushButton(this);
    meetButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/meet.png"));
    meetButton->setFixedSize(50, 50);
    meetLayout->addWidget(meetButton);
    meetLabel = new QLabel("Meet");
    meetLayout->addWidget(meetLabel);
    meetLayout->addStretch(1);
    connect(meetButton, &QPushButton::clicked, this, &AppsWindow::openMeet);

    chatLayout = new QVBoxLayout;
    chatLayout->setSpacing(0);
    chatButton = new QPushButton(this);
    chatButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-chat.png"));
    chatButton->setFixedSize(50, 50);
    chatLayout->addWidget(chatButton);
    chatLabel = new QLabel("Chat");
    chatLayout->addWidget(chatLabel);
    chatLayout->addStretch(1);
    connect(chatButton, &QPushButton::clicked, this, &AppsWindow::openChat);

    contactsLayout = new QVBoxLayout;
    contactsLayout->setSpacing(0);
    contactsButton = new QPushButton(this);
    contactsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-contact.png"));
    contactsButton->setFixedSize(50, 50);
    contactsLayout->addWidget(contactsButton);
    contactsLabel = new QLabel("Contacts");
    contactsLayout->addWidget(contactsLabel);
    contactsLayout->addStretch(1);
    connect(contactsButton, &QPushButton::clicked, this, &AppsWindow::openContacts);

    driveLayout = new QVBoxLayout;
    driveLayout->setSpacing(0);
    driveButton = new QPushButton(this);
    driveButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-drive.png"));
    driveButton->setFixedSize(50, 50);
    driveLayout->addWidget(driveButton);
    driveLabel = new QLabel("Drive");
    driveLayout->addWidget(driveLabel);
    driveLayout->addStretch(1);
    connect(driveButton, &QPushButton::clicked, this, &AppsWindow::openDrive);

    calendarLayout = new QVBoxLayout;
    calendarLayout->setSpacing(0);
    calendarButton = new QPushButton(this);
    calendarButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-calendar.png"));
    calendarButton->setFixedSize(50, 50);
    calendarLayout->addWidget(calendarButton);
    calendarLabel = new QLabel("Calendar");
    calendarLayout->addWidget(calendarLabel);
    calendarLayout->addStretch(1);
    connect(calendarButton, &QPushButton::clicked, this, &AppsWindow::openCalendar);

    translateLayout = new QVBoxLayout;
    translateLayout->setSpacing(0);
    translateButton = new QPushButton(this);
    translateButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-translate.png"));
    translateButton->setFixedSize(50, 50);
    translateLayout->addWidget(translateButton);
    translateLabel = new QLabel("Translate");
    translateLayout->addWidget(translateLabel);
    translateLayout->addStretch(1);
    connect(translateButton, &QPushButton::clicked, this, &AppsWindow::openTranslate);

    photoLayout = new QVBoxLayout;
    photoLayout->setSpacing(0);
    photoButton = new QPushButton(this);
    photoButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-photo.png"));
    photoButton->setFixedSize(50, 50);
    photoLayout->addWidget(photoButton);
    photoLabel = new QLabel("Photo");
    photoLayout->addWidget(photoLabel);
    photoLayout->addStretch(1);
    connect(photoButton, &QPushButton::clicked, this, &AppsWindow::openPhoto);

    chromeLayout = new QVBoxLayout;
    chromeLayout->setSpacing(0);
    chromeButton = new QPushButton(this);
    chromeButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/chrome.png"));
    chromeButton->setFixedSize(50, 50);
    chromeLayout->addWidget(chromeButton);
    chromeLabel = new QLabel("Chrome");
    chromeLayout->addWidget(chromeLabel);
    chromeLayout->addStretch(1);
    connect(chromeButton, &QPushButton::clicked, this, &AppsWindow::openChrome);

    xButton = new QPushButton(this);
    xButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/x.png"));
    xButton->setFixedSize(20, 20);
    connect(xButton, &QPushButton::clicked, this, &AppsWindow::closeWindow);


    firstLayout->addLayout(accountLayout, 1, 0);
    firstLayout->addLayout(searchLayout, 1, 1);
    firstLayout->addLayout(mapLayout, 1, 2);
    firstLayout->addLayout(playLayout, 2, 0);
    firstLayout->addLayout(newsLayout, 2, 1);
    firstLayout->addLayout(gmailLayout, 2, 2);
    firstLayout->addLayout(meetLayout, 3, 0);
    firstLayout->addLayout(chatLayout, 3, 1);
    firstLayout->addLayout(contactsLayout, 3, 2);
    firstLayout->addLayout(driveLayout, 4, 0);
    firstLayout->addLayout(calendarLayout, 4, 1);
    firstLayout->addLayout(translateLayout, 4, 2);
    firstLayout->addLayout(photoLayout, 5, 0);
    firstLayout->addLayout(chromeLayout, 5, 1);
    firstLayout->addWidget(xButton, 0, 3);
}

void AppsWindow::addContent2()
{
    secondLayout = new QGridLayout;

    financeLayout = new QVBoxLayout;
    financeLayout->setSpacing(0);
    financeButton = new QPushButton(this);
    financeButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/google-finance.png"));
    financeButton->setFixedSize(50, 50);
    financeLayout->addWidget(financeButton);
    financeLabel = new QLabel("Finance");
    financeLayout->addWidget(financeLabel);
    financeLayout->addStretch(1);
    connect(financeButton, &QPushButton::clicked, this, &AppsWindow::openFinance);

    docsLayout = new QVBoxLayout;
    docsLayout->setSpacing(0);
    docsButton = new QPushButton(this);
    docsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/docs.png"));
    docsButton->setFixedSize(50, 50);
    docsLayout->addWidget(docsButton);
    docsLabel = new QLabel("Docs");
    docsLayout->addWidget(docsLabel);
    docsLayout->addStretch(1);
    connect(docsButton, &QPushButton::clicked, this, &AppsWindow::openDocs);

    sheetsLayout = new QVBoxLayout;
    sheetsLayout->setSpacing(0);
    sheetsButton = new QPushButton(this);
    sheetsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/sheets.png"));
    sheetsButton->setFixedSize(50, 50);
    sheetsLayout->addWidget(sheetsButton);
    sheetsLabel = new QLabel("Sheets");
    sheetsLayout->addWidget(sheetsLabel);
    sheetsLayout->addStretch(1);
    connect(sheetsButton, &QPushButton::clicked, this, &AppsWindow::openSheets);

    slidesLayout = new QVBoxLayout;
    slidesLayout->setSpacing(0);
    slidesButton = new QPushButton(this);
    slidesButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/slides.png"));
    slidesButton->setFixedSize(50, 50);
    slidesLayout->addWidget(slidesButton);
    slidesLabel = new QLabel("Slides");
    slidesLayout->addWidget(slidesLabel);
    slidesLayout->addStretch(1);
    connect(slidesButton, &QPushButton::clicked, this, &AppsWindow::openSlides);

    booksLayout = new QVBoxLayout;
    booksLayout->setSpacing(0);
    booksButton = new QPushButton(this);
    booksButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/books.png"));
    booksButton->setFixedSize(50, 50);
    booksLayout->addWidget(booksButton);
    booksLabel = new QLabel("Books");
    booksLayout->addWidget(booksLabel);
    booksLayout->addStretch(1);
    connect(booksButton, &QPushButton::clicked, this, &AppsWindow::openBooks);

    bloggerLayout = new QVBoxLayout;
    bloggerLayout->setSpacing(0);
    bloggerButton = new QPushButton(this);
    bloggerButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/blogger.png"));
    bloggerButton->setFixedSize(50, 50);
    bloggerLayout->addWidget(bloggerButton);
    bloggerLabel = new QLabel("Blogger");
    bloggerLayout->addWidget(bloggerLabel);
    bloggerLayout->addStretch(1);
    connect(bloggerButton, &QPushButton::clicked, this, &AppsWindow::openBlogger);

    keepLayout = new QVBoxLayout;
    keepLayout->setSpacing(0);
    keepButton = new QPushButton(this);
    keepButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/keep.png"));
    keepButton->setFixedSize(50, 50);
    keepLayout->addWidget(keepButton);
    keepLabel = new QLabel("Keep");
    keepLayout->addWidget(keepLabel);
    keepLayout->addStretch(1);
    connect(keepButton, &QPushButton::clicked, this, &AppsWindow::openKeep);

    jamboardLayout = new QVBoxLayout;
    jamboardLayout->setSpacing(0);
    jamboardButton = new QPushButton(this);
    jamboardButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/jamboard.png"));
    jamboardButton->setFixedSize(50, 50);
    jamboardLayout->addWidget(jamboardButton);
    jamboardLabel = new QLabel("Jamboard");
    jamboardLayout->addWidget(jamboardLabel);
    jamboardLayout->addStretch(1);
    connect(jamboardButton, &QPushButton::clicked, this, &AppsWindow::openJamboard);

    classroomLayout = new QVBoxLayout;
    classroomLayout->setSpacing(0);
    classroomButton = new QPushButton(this);
    classroomButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/classroom.png"));
    classroomButton->setFixedSize(50, 50);
    classroomLayout->addWidget(classroomButton);
    classroomLabel = new QLabel("Classroom");
    classroomLayout->addWidget(classroomLabel);
    classroomLayout->addStretch(1);
    connect(classroomButton, &QPushButton::clicked, this, &AppsWindow::openClassroom);

    earthLayout = new QVBoxLayout;
    earthLayout->setSpacing(0);
    earthButton = new QPushButton(this);
    earthButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/earth.png"));
    earthButton->setFixedSize(50, 50);
    earthLayout->addWidget(earthButton);
    earthLabel = new QLabel("Earth");
    earthLayout->addWidget(earthLabel);
    earthLayout->addStretch(1);
    connect(earthButton, &QPushButton::clicked, this, &AppsWindow::openEarth);

    savedLayout = new QVBoxLayout;
    savedLayout->setSpacing(0);
    savedButton = new QPushButton(this);
    savedButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/saved.png"));
    savedButton->setFixedSize(50, 50);
    savedLayout->addWidget(savedButton);
    savedLabel = new QLabel("Saved");
    savedLayout->addWidget(savedLabel);
    savedLayout->addStretch(1);
    connect(savedButton, &QPushButton::clicked, this, &AppsWindow::openSaved);

    artsLayout = new QVBoxLayout;
    artsLayout->setSpacing(0);
    artsButton = new QPushButton(this);
    artsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/arts.png"));
    artsButton->setFixedSize(50, 50);
    artsLayout->addWidget(artsButton);
    artsLabel = new QLabel("Arts");
    artsLayout->addWidget(artsLabel);
    artsLayout->addStretch(1);
    connect(artsButton, &QPushButton::clicked, this, &AppsWindow::openArts);

    adsLayout = new QVBoxLayout;
    adsLayout->setSpacing(0);
    adsButton = new QPushButton(this);
    adsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/ads.png"));
    adsButton->setFixedSize(50, 50);
    adsLayout->addWidget(adsButton);
    adsLabel = new QLabel("Ads");
    adsLayout->addWidget(adsLabel);
    adsLayout->addStretch(1);
    connect(adsButton, &QPushButton::clicked, this, &AppsWindow::openAds);

    googleoneLayout = new QVBoxLayout;
    googleoneLayout->setSpacing(0);
    googleoneButton = new QPushButton(this);
    googleoneButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/one.png"));
    googleoneButton->setFixedSize(50, 50);
    googleoneLayout->addWidget(googleoneButton);
    googleoneLabel = new QLabel("Google \n   One");
    googleoneLayout->addWidget(googleoneLabel);
    googleoneLayout->addStretch(1);
    connect(googleoneButton, &QPushButton::clicked, this, &AppsWindow::openGoogleOne);

    travelLayout = new QVBoxLayout;
    travelLayout->setSpacing(0);
    travelButton = new QPushButton(this);
    travelButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/travel.png"));
    travelButton->setFixedSize(50, 50);
    travelLayout->addWidget(travelButton);
    travelLabel = new QLabel("Travel");
    travelLayout->addWidget(travelLabel);
    travelLayout->addStretch(1);
    connect(travelButton, &QPushButton::clicked, this, &AppsWindow::openTravel);

    formsLayout = new QVBoxLayout;
    formsLayout->setSpacing(0);
    formsButton = new QPushButton(this);
    formsButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/forms.png"));
    formsButton->setFixedSize(50, 50);
    formsLayout->addWidget(formsButton);
    formsLabel = new QLabel("Forms");
    formsLayout->addWidget(formsLabel);
    formsLayout->addStretch(1);
    connect(formsButton, &QPushButton::clicked, this, &AppsWindow::openForms);

    storeLayout = new QVBoxLayout;
    storeLayout->setSpacing(0);
    storeButton = new QPushButton(this);
    storeButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/web-store.png"));
    storeButton->setFixedSize(50, 50);
    storeLayout->addWidget(storeButton);
    storeLabel = new QLabel("Store");
    storeLayout->addWidget(storeLabel);
    storeLayout->addStretch(1);
    connect(storeButton, &QPushButton::clicked, this, &AppsWindow::openStore);

    passwordLayout = new QVBoxLayout;
    passwordLayout->setSpacing(0);
    passwordButton = new QPushButton(this);
    passwordButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-apps-button/icons/passwords.png"));
    passwordButton->setFixedSize(50, 50);
    passwordLayout->addWidget(passwordButton);
    passwordLabel = new QLabel("Password\nManager");
    passwordLayout->addWidget(passwordLabel);
    passwordLayout->addStretch(1);
    connect(passwordButton, &QPushButton::clicked, this, &AppsWindow::openPassword);

    secondLayout->addLayout(financeLayout, 0, 0);
    secondLayout->addLayout(docsLayout, 0, 1);
    secondLayout->addLayout(sheetsLayout, 0, 2);
    secondLayout->addLayout(slidesLayout, 1, 0);
    secondLayout->addLayout(booksLayout, 1, 1);
    secondLayout->addLayout(bloggerLayout, 1, 2);
    secondLayout->addLayout(keepLayout, 2, 0);
    secondLayout->addLayout(jamboardLayout, 2, 1);
    secondLayout->addLayout(classroomLayout, 2, 2);
    secondLayout->addLayout(earthLayout, 3, 0);
    secondLayout->addLayout(savedLayout, 3, 1);
    secondLayout->addLayout(artsLayout, 3, 2);
    secondLayout->addLayout(adsLayout, 4, 0);
    secondLayout->addLayout(googleoneLayout, 4, 1);
    secondLayout->addLayout(travelLayout, 4, 2);
    secondLayout->addLayout(formsLayout, 5, 0);
    secondLayout->addLayout(storeLayout, 5, 1);
    secondLayout->addLayout(passwordLayout, 5, 2);
}

void AppsWindow::closeWindow()
{
    this->close();
}

void AppsWindow::openAccount()
{
    QMessageBox::information(this, "Account", "Opening Account...");
}

void AppsWindow::openSearch()
{
    QMessageBox::information(this, "Search", "Opening Search...");
}

void AppsWindow::openMap()
{
    QMessageBox::information(this, "Map", "Opening Map...");
}

void AppsWindow::openPlay()
{
    QMessageBox::information(this, "Play", "Opening Play...");
}

void AppsWindow::openNews()
{
    QMessageBox::information(this, "News", "Opening News...");
}

void AppsWindow::openGmail()
{
    QMessageBox::information(this, "Gmail", "Opening Gmail...");
}

void AppsWindow::openMeet()
{
    QMessageBox::information(this, "Meet", "Opening Meet...");
}

void AppsWindow::openChat()
{
    QMessageBox::information(this, "Chat", "Opening Chat...");
}

void AppsWindow::openContacts()
{
    QMessageBox::information(this, "Contacts", "Opening Contacts...");
}

void AppsWindow::openDrive()
{
    QMessageBox::information(this, "Drive", "Opening Drive...");
}

void AppsWindow::openCalendar()
{
    QMessageBox::information(this, "Calendar", "Opening Calendar...");
}

void AppsWindow::openTranslate()
{
    QMessageBox::information(this, "Translate", "Opening Translate...");
}

void AppsWindow::openPhoto()
{
    QMessageBox::information(this, "Photo", "Opening Photo...");
}

void AppsWindow::openChrome()
{
    QMessageBox::information(this, "Chrome", "Opening Chrome...");
}

void AppsWindow::openFinance()
{
    QMessageBox::information(this, "Finance", "Opening Finance...");
}

void AppsWindow::openDocs()
{
    QMessageBox::information(this, "Docs", "Opening Docs...");
}

void AppsWindow::openSheets()
{
    QMessageBox::information(this, "Sheets", "Opening Sheets...");
}

void AppsWindow::openSlides()
{
    QMessageBox::information(this, "Slides", "Opening Slides...");
}

void AppsWindow::openBooks()
{
    QMessageBox::information(this, "Books", "Opening Books...");
}

void AppsWindow::openBlogger()
{
    QMessageBox::information(this, "Blogger", "Opening Blogger...");
}

void AppsWindow::openKeep()
{
    QMessageBox::information(this, "Keep", "Opening Keep...");
}

void AppsWindow::openJamboard()
{
    QMessageBox::information(this, "Jamboard", "Opening Jamboard...");
}

void AppsWindow::openClassroom()
{
    QMessageBox::information(this, "Classroom", "Opening Classroom...");
}

void AppsWindow::openEarth()
{
    QMessageBox::information(this, "Earth", "Opening Earth...");
}

void AppsWindow::openSaved()
{
    QMessageBox::information(this, "Saved", "Opening Saved...");
}

void AppsWindow::openArts()
{
    QMessageBox::information(this, "Arts", "Opening Arts...");
}

void AppsWindow::openAds()
{
    QMessageBox::information(this, "Ads", "Opening Ads...");
}

void AppsWindow::openGoogleOne()
{
    QMessageBox::information(this, "Google One", "Opening Google One...");
}

void AppsWindow::openTravel()
{
    QMessageBox::information(this, "Travel", "Opening Travel...");
}

void AppsWindow::openForms()
{
    QMessageBox::information(this, "Forms", "Opening Forms...");
}

void AppsWindow::openStore()
{
    QMessageBox::information(this, "Store", "Opening Store...");
}

void AppsWindow::openPassword()
{
    QMessageBox::information(this, "Password", "Opening Password Manager...");
}


AppsWindow::~AppsWindow()
{
    //good practice to explicitly delete
    delete firstLayout;

    delete accountLayout;
    delete accountButton;
    delete accountLabel;

    delete searchLayout;
    delete searchButton;
    delete searchLabel;

    delete mapLayout;
    delete mapButton;
    delete mapLabel;

    delete playLayout;
    delete playButton;
    delete playLabel;

    delete newsLayout;
    delete newsButton;
    delete newsLabel;

    delete gmailLayout;
    delete gmailButton;
    delete gmailLabel;

    delete meetLayout;
    delete meetButton;
    delete meetLabel;

    delete chatLayout;
    delete chatButton;
    delete chatLabel;

    delete contactsLayout;
    delete contactsButton;
    delete contactsLabel;

    delete driveLayout;
    delete driveButton;
    delete driveLabel;

    delete calendarLayout;
    delete calendarButton;
    delete calendarLabel;

    delete translateLayout;
    delete translateButton;
    delete translateLabel;

    delete photoLayout;
    delete photoButton;
    delete photoLabel;

    delete chromeLayout;
    delete chromeButton;
    delete chromeLabel;


    delete secondLayout;

    delete financeLayout;
    delete financeButton;
    delete financeLabel;

    delete docsLayout;
    delete docsButton;
    delete docsLabel;

    delete sheetsLayout;
    delete sheetsButton;
    delete sheetsLabel;

    delete slidesLayout;
    delete slidesButton;
    delete slidesLabel;

    delete booksLayout;
    delete booksButton;
    delete booksLabel;

    delete bloggerLayout;
    delete bloggerButton;
    delete bloggerLabel;

    delete keepLayout;
    delete keepButton;
    delete keepLabel;

    delete jamboardLayout;
    delete jamboardButton;
    delete jamboardLabel;

    delete classroomLayout;
    delete classroomButton;
    delete classroomLabel;

    delete earthLayout;
    delete earthButton;
    delete earthLabel;

    delete savedLayout;
    delete savedButton;
    delete savedLabel;

    delete artsLayout;
    delete artsButton;
    delete artsLabel;

    delete adsLayout;
    delete adsButton;
    delete adsLabel;

    delete googleoneLayout;
    delete googleoneButton;
    delete googleoneLabel;

    delete travelLayout;
    delete travelButton;
    delete travelLabel;

    delete formsLayout;
    delete formsButton;
    delete formsLabel;

    delete storeLayout;
    delete storeButton;
    delete storeLabel;

    delete passwordLayout;
    delete passwordButton;
    delete passwordLabel;

    delete mainLayout;
    delete xButton;


}

