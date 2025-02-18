#include "Key.h"
#include <iostream>
using namespace std;

Key::~Key()
{
    cout<<"key destructor called"<<endl;
}

Key::Key() : inserted(false)
{
    cout<<"Key constructor called"<<endl;
}

void Key::insert()
{
    inserted = true;
}

void Key::remove()
{
    inserted = false;
}

bool Key::isInserted() const
{
    return inserted;
}
