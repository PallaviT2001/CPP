#include "break.h"
#include <iostream>
using namespace std;

Break::Break()
{
    cout<<"break class default constructor called"<<endl;
}

Break::~Break()
{
    cout<<"break class destructor called"<<endl;
}

void Break::applybreak()
{
    cout<<"break applied"<<endl;
}
