#include "myspinbox.h"
#include <iostream>
using namespace std;

MySpinBox::MySpinBox()
{
    cout<<"myspin box constructor called"<<endl;
}

MySpinBox::~MySpinBox()
{
    cout<<"myspin box destructor called"<<endl;
}

bool MySpinBox::event(QEvent *e)
{
    cout<<"myspinbox event function called"<<endl;
    return true;
}

void MySpinBox::paintEvent(QPaintEvent *event)
{
    cout<<"myspinbox paint event function called"<<endl;
}
