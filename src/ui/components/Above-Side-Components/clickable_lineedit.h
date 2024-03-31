#ifndef CLICKABLE_LINEEDIT_H
#define CLICKABLE_LINEEDIT_H

#include <QLineEdit>

class ClickableLineEdit : public QLineEdit {
    Q_OBJECT

public:
    ClickableLineEdit(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;

signals:
    void iconClicked();
};

#endif // CLICKABLE_LINEEDIT_H
