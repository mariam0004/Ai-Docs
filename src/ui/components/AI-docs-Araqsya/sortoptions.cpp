#include "sortoptions.h"
#include <QMenu>

sortOptions::sortOptions(QWidget *parent)
    : QWidget{parent}
{
    iconButton = new QPushButton(this);
    iconButton->setIcon(QIcon(":/images/Images/alpha"));
    iconButton->setIconSize(QSize(50, 50));
    iconButton->setStyleSheet("QPushButton {"
                              "  text-align: center;"
                              "}"
                              "QPushButton:hover {"
                              "  border-radius: 25px;"
                              "  box-shadow: 3px 3px 5px grey;"
                              "}"
                              "QPushButton::menu-indicator { image: none; }");
    QMenu *options = new QMenu();

    QAction *openedByMe = new QAction("Last Opened By Me", this);
    openedByMe->setCheckable(true);
    QAction *modifiedByMe = new QAction("Last Modified By Me", this);
    modifiedByMe->setCheckable(true);
    QAction *modified = new QAction("Last Modified", this);
    modified->setCheckable(true);
    QAction *title = new QAction("Title", this);
    title ->setCheckable(true);
    options->addAction(openedByMe);
    options->addAction(modifiedByMe);
    options->addAction(modified);
    options->addAction(title);
    iconButton->setMenu(options);

    QObject::connect(openedByMe, &QAction::toggled, [modifiedByMe, modified, title](bool checked) {
        if (checked) {
            modifiedByMe->setChecked(false);
            modified->setChecked(false);
            title->setChecked(false);
        }
    });

    QObject::connect(modifiedByMe, &QAction::toggled, [openedByMe, modified, title](bool checked) {
        if (checked) {
            openedByMe->setChecked(false);
            modified->setChecked(false);
            title->setChecked(false);
        }
    });

    QObject::connect(modified, &QAction::toggled, [openedByMe, modifiedByMe, title](bool checked) {
        if (checked) {
            openedByMe->setChecked(false);
            modifiedByMe->setChecked(false);
            title->setChecked(false);
        }
    });

    QObject::connect(title, &QAction::toggled, [openedByMe, modified, modifiedByMe](bool checked) {
        if (checked) {
            openedByMe->setChecked(false);
            modified->setChecked(false);
            modifiedByMe->setChecked(false);
        }
    });
}
