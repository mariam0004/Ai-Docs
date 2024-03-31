#include "accountwindow.h"

#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>

AccountWindow::AccountWindow(QWidget* parent)
    :QWidget(parent)
{
    setupUI();
}

void AccountWindow::setupUI()
{
    mainLayout = new QGridLayout(this);
    setFixedSize(400 ,350);

    emailLabel = new QLabel("admin@gmail.com");
    emailLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(emailLabel, 0, 0, 1, 3);

    xButton = new QPushButton(this);
    xButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-account-button/icons/x.png"));
    xButton->setFixedSize(20, 20);
    connect(xButton, &QPushButton::clicked, this, &AccountWindow::closeWindow);
    mainLayout->addWidget(xButton, 0, 3);


    QVBoxLayout* accountLayout = new QVBoxLayout;

    accountButton = new QPushButton(this);
    accountButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-account-button/icons/google-account.png"));
    QSize accountSize(100, 100);
    accountButton->setIconSize(accountSize);
    accountButton->setFixedSize(100, 100);
    connect(accountButton, &QPushButton::clicked, this, &AccountWindow::openAccount);
    accountLayout->addWidget(accountButton);

    editButton = new QPushButton(this);
    editButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-account-button/icons/edit-pen.svg"));
    editButton->setFixedSize(20, 20);
    connect(editButton, &QPushButton::clicked, this, &AccountWindow::openAccount);
    accountLayout->addWidget(editButton, 0, Qt::AlignTop | Qt::AlignRight);

    mainLayout->addLayout(accountLayout, 1, 1, 1, 1);

    helloLabel = new QLabel("Hello, Admin !");
    helloLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(helloLabel, 2, 0, 1, 3);



    managementButton = new QPushButton("Google Account Management", this);
    managementButton->setFixedSize(378, 50);
    connect(managementButton, &QPushButton::clicked, this, &AccountWindow::openManagement);
    mainLayout->addWidget(managementButton, 3, 0);

    addButton = new QPushButton(this);
    addButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-account-button/icons/plus.png"));
    addButton->setText("Add Account");
    addButton->setFixedSize(200, 50);
    connect(addButton, &QPushButton::clicked, this, &AccountWindow::openAdd);
    mainLayout->addWidget(addButton, 4, 0);


    logoutButton = new QPushButton(this);
    logoutButton->setIcon(QIcon("/home/mariam/AI-Docs/src/ui/components/google-account-button/icons/logout.png"));
    logoutButton->setText("Logout");
    logoutButton->setFixedSize(200, 50);
    connect(logoutButton, &QPushButton::clicked, this, &AccountWindow::openLogout);
    mainLayout->addWidget(logoutButton, 4, 1);

    policyButton = new QPushButton("Privacy Policy", this);
    policyButton->setFixedSize(200, 50);
    connect(policyButton, &QPushButton::clicked, this, &AccountWindow::openPolicy);
    mainLayout->addWidget(policyButton, 5, 0);

    termsButton = new QPushButton("Terms to Use", this);
    termsButton->setFixedSize(200, 50);
    connect(termsButton, &QPushButton::clicked, this, &AccountWindow::openTerms);
    mainLayout->addWidget(termsButton, 5, 1);

    setLayout(mainLayout);
}

void AccountWindow::closeWindow()
{
    this->close();
}

void AccountWindow::openAccount()
{
    QMessageBox::information(this, "Account", "Opening Account...");
}

void AccountWindow::openManagement()
{
    QMessageBox::information(this, "Management", "Opening Management...");
}

void AccountWindow::openAdd()
{
    QMessageBox::information(this, "Add", "Opening Add...");
}

void AccountWindow::openLogout()
{
    QMessageBox::information(this, "Logout", "Opening Logout...");
}

void AccountWindow::openPolicy()
{
    QMessageBox::information(this, "Policy", "Opening Policy...");
}

void AccountWindow::openTerms()
{
    QMessageBox::information(this, "Terms", "Opening Terms...");
}


AccountWindow::~AccountWindow()
{

}
