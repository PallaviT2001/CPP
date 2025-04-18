#include "theatre.h"
#include <iostream>
using namespace std;

Theatre::Theatre()
{
    cout <<"Theatre constructor called\n";
}

Theatre::~Theatre()
{
    cout<<"Theatre destructor called"<<endl;
}

Theatre::Theatre(int id) : id(id)
{
    cout<<"Theatre parameterized constructor called"<<endl;
}

int Theatre::getId() const
{
    return id;
}

bool Theatre::operator==(const Theatre& other) const
{
    return id == other.id;
}
