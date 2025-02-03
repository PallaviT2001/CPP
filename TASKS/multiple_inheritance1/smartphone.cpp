#include "smartphone.h"
#include "camera.h"
#include "music.h"
#include "phone.h"
#include <iostream>
using namespace std;
#include <string>
#include "smartphone.h"
#include "camera.h"
#include "music.h"
#include "phone.h"

smartphone::smartphone()
{


}

smartphone::~smartphone()
{
    cout<<"smartphone destructor called"<<endl;
}

smartphone::smartphone(int smartphoneid,int cameraid,float displaysize,int musicid, string musicname,int phonenumber,string color):
    camera(cameraid,displaysize),music(musicid,musicname),phone(phonenumber,color)
{
    this->smartphoneid=smartphoneid;
    cout<<smartphoneid<<endl;
}

