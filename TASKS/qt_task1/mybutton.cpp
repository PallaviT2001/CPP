#include "mybutton.h"
#include <iostream>
using namespace std;

MyButton::MyButton()
{
    cout<<"mybutton constructor called"<<endl;
}

MyButton::~MyButton()
{
    cout<<"mybutton destructor called"<<endl;
}

bool MyButton::event(QEvent *e)
{
    cout<< "MyButton event function called"<<endl;
   return true;
}

void MyButton:: paintEvent(QPaintEvent *event)
{
    cout<< "MyButton paintEvent function called"<<endl;
}

