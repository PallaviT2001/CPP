#include "mycheckbox.h"
#include <iostream>
using namespace std;

Mycheckbox::Mycheckbox()
{
    cout<<"mycheckbox constructor called"<<endl;
}

Mycheckbox::~Mycheckbox()
{
    cout<<"my checkbox desytructor called"<<endl;
}

bool Mycheckbox::event(QEvent *e)
{
    cout<<"my checkbox event function called"<<endl;
    return true;
}

void Mycheckbox::paintEvent(QPaintEvent *event)
{
    cout<<"my checkbox paintevent function called"<<endl;
}
