#ifndef MYSPINBOX_H
#define MYSPINBOX_H
#include <QEvent>
#include <QPaintEvent>
#include <QSpinBox>

class MySpinBox : public QSpinBox
{
public:
    MySpinBox();
    ~MySpinBox();
    bool event (QEvent *e)override;
    void paintEvent(QPaintEvent *event)override;

};

#endif // MYSPINBOX_H
