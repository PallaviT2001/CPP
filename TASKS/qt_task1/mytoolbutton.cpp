#include "mytoolbutton.h"
#include <iostream>
using namespace std;

MyToolButton::MyToolButton()
{
    cout<<"my toolbutton constructor called"<<endl;
}

MyToolButton::~MyToolButton()
{
    cout<<"my toolbutton destructor called"<<endl;
}

bool MyToolButton::event(QEvent *e)
{
    cout<<"my toolbutton event function called"<<endl;
    return true;
}

void MyToolButton::paintEvent(QPaintEvent *event)
{
    cout<<"my tool button paint event function called"<<endl;
}
