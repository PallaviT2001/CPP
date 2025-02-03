#include "camera.h"
#include <iostream>
using namespace std;
#include <string>

camera::camera(int cameraid,float displaysize)
{
    this->cameraid=cameraid;
    this->displaysize=displaysize;
    cout<<cameraid<<" "<<displaysize<<endl;
}

camera::camera()
{

}

camera::~camera()
{

}

void camera::display()
{
    cout<<"camera display function"<<endl;

}

void camera::takepic()
{
    cout<<"camera takepic function called"<<endl;
}
