#ifndef WIRE_H
#define WIRE_H
#include <string>
using namespace std;

class wire
{
public:
    wire();
    int length;
    float thickness;
    string brand;
    string color;
    float price;
    wire(int length1,float thickness1,string brand1, string color1,float price);
};

#endif

