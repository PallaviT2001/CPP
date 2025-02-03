#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "phone.h"
#include "camera.h"
#include "music.h"
#include <string>
#include <iostream>
using namespace std;

class smartphone:public phone,public camera,public music
{
private:
    int smartphoneid;
public:
    smartphone();
    ~smartphone();
    smartphone(int smartphoneid,int cameraid,float displaysize,int musicid, string musicname,int phonenumber,string color);
};
#endif
