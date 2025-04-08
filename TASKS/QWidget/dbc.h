#ifndef DBC_H
#define DBC_H
#include "abc.h"
#include <iostream>
using namespace std;
#include <QWidget>

class DBC:public QWidget
{
private:
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;
public:
    DBC(QWidget *parent =nullptr);
    ~DBC();
};

#endif

