#include "key.h"
#include "engine.h"
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

void Key::keyinsert(Engine *eng)
{
    cout<<"key inserted"<<endl;
    this->eng=eng;
    eng->startengine();
}

void Key::keyremove()
{
    cout<<"key removed"<<endl;
}
