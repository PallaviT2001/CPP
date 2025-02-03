#include "smartphone.h"
#include "gamingphone.h"

smartphone::~smartphone()
{
    cout<<"smartphone destructor called"<<endl;
}

smartphone::smartphone(int camerasize, float displaysize, string color, float price):mobilephone(color,price)
{
    cout<<"smartphone constructor called1"<<endl;
    this->camerasize=camerasize;
    this->displaysize=displaysize;
    cout<<camerasize<<" "<<displaysize<<endl;
}

