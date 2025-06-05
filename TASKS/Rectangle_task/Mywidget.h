#ifndef MYWIDGET_H
#define MYWIDGET_H
#include <QWidget>

class MyWidget : public QWidget
{
    //Q_OBJECT

public:
    MyWidget(int x, int y, int width, int height, QWidget *parent = nullptr);
    ~MyWidget();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int rectX;
    int rectY;
    int rectWidth;
    int rectHeight;
};

#endif






