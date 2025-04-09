#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H
#include <QEvent>
#include <QPaintEvent>
#include <QCheckBox>

class Mycheckbox : public QCheckBox
{
public:
    Mycheckbox();
    ~Mycheckbox();
    bool event (QEvent *e)override;
    void paintEvent(QPaintEvent *event)override;
};
#endif // MYCHECKBOX_H
