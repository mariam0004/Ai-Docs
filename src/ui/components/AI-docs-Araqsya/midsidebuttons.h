#ifndef MIDSIDEBUTTONS_H
#define MIDSIDEBUTTONS_H

#include "documentsbytitle.h"
#include "ownedby.h"
#include "viewstyle.h"
#include "sortoptions.h"
#include "filepicker.h"
#include <QWidget>

class MidSideButtons : public QWidget
{
    Q_OBJECT
public:
    explicit MidSideButtons(QWidget *parent = nullptr);
private:
    documentsByTitle *DocumentsByTitleWidget;
    ownedBy *ownedByWidget;
    viewStyle *viewWidget;
    sortOptions *sortOptionsWidget;
    filePicker *filePickerWidget;
};

#endif // MIDSIDEBUTTONS_H
