#include "bird.h"

Bird::Bird()
{
    cout<<"bird class default constructor called"<<endl;
}

Bird::~Bird()
{
    cout<<"bird class destructor called"<<endl;
}

Bird::Bird(int age,string name,float height)
{
    cout<<"bird class parameterized constructor called"<<endl;
}
