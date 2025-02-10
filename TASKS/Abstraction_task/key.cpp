#include "key.h"
#include <iostream>
using namespace std;

Key::Key()
{
    cout<<"key class default constructor called"<<endl;
}

Key::~Key()
{
    cout<<"key class destructor called"<<endl;
}

void Key::keyinsert()
{
    cout<<"key inserted"<<endl;
}

void Key::keyremove()
{
    cout<<"key removed"<<endl;
}
