#include "myscrollbar.h"
#include <iostream>
using namespace std;

MyScrollBar::MyScrollBar()
{
    cout<<"my scrollbar constructor called"<<endl;
}

MyScrollBar::~MyScrollBar()
{
    cout<<"my scrollbar destructor called"<<endl;
}

bool MyScrollBar::event(QEvent *e)
{
    cout<<"my scrollbar event function called"<<endl;
    return true;
}

void MyScrollBar::paintEvent(QPaintEvent *event)
{
    cout<<"my scrollbar paintevent function called"<<endl;
}
