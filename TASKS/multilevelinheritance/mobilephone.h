#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H
#include <iostream>
using namespace std;
#include <string>


class mobilephone
{
private:
    string color;
    float price;
public:
    ~mobilephone();
    mobilephone(string color,float price);
};

#endif // MOBILEPHONE_H
