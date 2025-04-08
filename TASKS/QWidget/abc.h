#ifndef ABC_H
#define ABC_H
#include <iostream>
using namespace std;
#include <QWidget>

class ABC:public QWidget
{
private:
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event)override;
public:
    ABC(QWidget *parent=nullptr);
    ~ABC();
};

#endif

