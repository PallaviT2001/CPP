#include "music.h"
#include <iostream>
using namespace std;

music::music()
{

}
music::~music()
{
    cout<<"music destroyed"<<endl;
}

music::music(int musicid,string musicname)
{
    this->musicid=musicid;
    this->musicname=musicname;
    cout<<musicid<<" "<<musicname;
}
