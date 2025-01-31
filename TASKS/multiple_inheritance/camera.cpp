#include "camera.h"
#include <iostream>
using namespace std;

camera::camera(int cameraid,string cameraname)
{
    m_cameraid=cameraid;
    m_cameraname=cameraname;
    cout<<m_cameraid<<" "<<m_cameraname<<endl;
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
    cout<<m_cameraid<<" "<<m_cameraname<<endl;

    cout<<"camera takepic function called"<<endl;
}
