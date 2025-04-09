#include "mymenubar.h"
#include <iostream>
using namespace std;

MyMenuBar::MyMenuBar()
{
    cout<<"My menubar constructor called"<<endl;
}

MyMenuBar::~MyMenuBar()
{
    cout<<"My menubar destructor called"<<endl;
}

bool MyMenuBar::event(QEvent *e)
{
    cout<<"My menubar event function called"<<endl;
    return true;
}

void MyMenuBar::paintEvent(QPaintEvent *event)
{
    cout<<"My menubar paintevent function called"<<endl;
}
