// google_services_window.h
#ifndef GOOGLE_SERVICES_WINDOW_H
#define GOOGLE_SERVICES_WINDOW_H

#include <QPushButton>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>

class GoogleServicesWindow : public QWidget {
    Q_OBJECT

public:
    explicit GoogleServicesWindow(QWidget *parent = nullptr);

private:
    void setupUi();
    void addServiceIcon(QVBoxLayout *layout, const QString &iconPath, const QString &text);
    void addSeparator(QVBoxLayout *layout);
    void closeWindow();

private:
    QGridLayout *layout;

    QPushButton * closeButton;
};

#endif // GOOGLE_SERVICES_WINDOW_H
