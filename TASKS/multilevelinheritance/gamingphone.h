#ifndef GAMINGPHONE_H
#define GAMINGPHONE_H
#include "smartphone.h"
#include <iostream>
using namespace std;

class gamingphone:public smartphone
{
private:
    int gametypes;
public:
    ~gamingphone();
    gamingphone(int camerasize,float displaysize,string color,float price,int gametypes);
};

#endif // GAMINGPHONE_H
