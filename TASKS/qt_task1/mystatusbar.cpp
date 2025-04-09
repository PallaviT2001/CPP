#include "mystatusbar.h"
#include <iostream>
using namespace std;

MyStatusBar::MyStatusBar()
{
    cout<<"Mystatusbar constructor called"<<endl;
}

MyStatusBar::~MyStatusBar()
{
    cout<<"Mystatusbar destructor called"<<endl;
}

bool MyStatusBar::event(QEvent *e)
{
    cout<<"Mystatusbar event function called"<<endl;
    return true;
}

void MyStatusBar::paintEvent(QPaintEvent *event)
{
    cout<<"MyStatusbar paint event function called"<<endl;
}
