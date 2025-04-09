#ifndef MYMENUBAR_H
#define MYMENUBAR_H
#include <QEvent>
#include <QPaintEvent>
#include <QMenuBar>

class MyMenuBar : public QMenuBar
{
public:
    MyMenuBar();
    ~MyMenuBar();
    bool event (QEvent *e)override;
    void paintEvent(QPaintEvent *event)override;

};

#endif // MYMENUBAR_H
