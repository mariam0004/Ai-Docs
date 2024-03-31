#include <QApplication>
#include "midsidebuttons.h"
#include <QScreen>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MidSideButtons midSideButtonsWidget;
    midSideButtonsWidget.setWindowTitle("Mid Side Buttons Widget");
    QScreen *screen = QGuiApplication::primaryScreen();
    midSideButtonsWidget.resize(screen->size());
    midSideButtonsWidget.show();
    return app.exec();
}
