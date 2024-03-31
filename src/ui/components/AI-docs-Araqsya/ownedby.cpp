#include "ownedby.h"
#include <QAction>
#include <QVBoxLayout>
#include <QMenu>

ownedBy::ownedBy(QWidget *parent) : QWidget(parent)
{
    menuBar = new QMenuBar(this);
    QMenu *menuOwned = new QMenu("Owned By Anyone ▼");
    menuBar->addMenu(menuOwned);

    QAction *actionAnyone = new QAction("Owned By Anyone", this);
    actionAnyone->setCheckable(true);
    QAction *actionMe = new QAction("Owned By Me", this);
    actionMe->setCheckable(true);
    QAction *actionNotMe = new QAction("Owned By Not Me", this);
    actionNotMe->setCheckable(true);

    menuOwned->addAction(actionAnyone);
    menuOwned->addAction(actionMe);
    menuOwned->addAction(actionNotMe);



    QObject::connect(actionAnyone, &QAction::toggled, [menuOwned, actionMe, actionNotMe](bool checked) {
        if (checked) {
            actionMe->setChecked(false);
            actionNotMe->setChecked(false);
            menuOwned->blockSignals(true);
            menuOwned->setTitle("Owned By Anyone ▼");
            menuOwned->blockSignals(false);
        }
    });

    QObject::connect(actionMe, &QAction::toggled, [menuOwned, actionAnyone, actionNotMe](bool checked) {
        if (checked) {
            actionAnyone->setChecked(false);
            actionNotMe->setChecked(false);
            menuOwned->blockSignals(true);
            menuOwned->setTitle("Owned By Me       ▼");
            menuOwned->blockSignals(false);
        }
    });

    QObject::connect(actionNotMe, &QAction::toggled, [menuOwned, actionAnyone, actionMe](bool checked) {
        if (checked) {
            actionAnyone->setChecked(false);
            actionMe->setChecked(false);
            menuOwned->blockSignals(true); // Block signals temporarily to avoid feedback loop
            menuOwned->setTitle("Owned By Not Me ▼");
            menuOwned->blockSignals(false); // Unblock signals
        }
    });

}
