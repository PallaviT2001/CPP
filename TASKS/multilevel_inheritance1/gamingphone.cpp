#include "gamingphone.h"
#include "smartphone.h"
#include "mobilephone.h"
#include <iostream>
using namespace std;

gamingphone::~gamingphone()
{
    cout<<"gaming destructor called"<<endl;
}

gamingphone::gamingphone(int camerasize,float displaysize,string color,float price,int gametypes)
    :smartphone(camerasize,displaysize,color,price)
{
    cout<<"gaming constructor called1"<<endl;
    this->gametypes =gametypes;
    cout<<gametypes<<endl;
}




