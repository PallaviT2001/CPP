#ifndef MYSTATUSBAR_H
#define MYSTATUSBAR_H
#include <QStatusBar>
#include <QEvent>
#include <QPaintEvent>

class MyStatusBar : public QStatusBar
{
public:
    MyStatusBar();
    ~MyStatusBar();
    bool event (QEvent *e)override;
    void paintEvent(QPaintEvent *event)override;
};

#endif // MYSTATUSBAR_H
