#include "myradiobutton.h"
#include <iostream>
using namespace std;

MyRadioButton::MyRadioButton()
{
    cout<<"myradiobutton constructor called"<<endl;
}

MyRadioButton::~MyRadioButton()
{
    cout<<"myradiobutton destructor called"<<endl;
}

bool MyRadioButton::event(QEvent *e)
{
    cout<<"myradiobutton event function called"<<endl;
    return true;
}

void MyRadioButton::paintEvent(QPaintEvent *event)
{
    cout<<"myradiobutton paintevent function called"<<endl;
}
