#ifndef MYSCROLLBAR_H
#define MYSCROLLBAR_H
#include <QEvent>
#include <QPaintEvent>
#include <QScrollBar>

class MyScrollBar : public QScrollBar
{
public:
    MyScrollBar();
    ~MyScrollBar();
    bool event (QEvent *e)override;
    void paintEvent(QPaintEvent *event)override;
};

#endif // MYSCROLLBAR_H
