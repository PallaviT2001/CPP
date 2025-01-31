#include <iostream>
using namespace std;
#include "a.h"

a::a()
{
    cout<<"a constructor called"<<endl;
}

a::~a()
{
    cout<<"a destructor called"<<endl;
}

void a::display()
{
    cout<<"a display function called"<<endl;
}
void a::calla()
{
    cout<<"a class call a function called"<<endl;
}
