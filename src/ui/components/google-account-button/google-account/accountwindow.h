#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QIcon>

class AccountWindow : public QWidget
{
    Q_OBJECT
public:
    explicit AccountWindow(QWidget* p = nullptr);
    ~AccountWindow();

private:
    void setupUI();

private slots:
    void closeWindow();
    void openAccount();
    void openManagement();
    void openAdd();
    void openLogout();
    void openPolicy();
    void openTerms();

private:
    QGridLayout* mainLayout;

    QLabel* emailLabel;
    QPushButton* xButton;
    QPushButton* accountButton;
    QPushButton* editButton;
    QLabel* helloLabel;
    QPushButton* managementButton;

    QPushButton* addButton;
    QPushButton* logoutButton;

    QPushButton* policyButton;
    QPushButton* termsButton;


};

#endif // ACCOUNTWINDOW_H
