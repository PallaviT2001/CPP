#ifndef PHONE_H
#define PHONE_H
#include <string>

class phone
{
private:
    int phonenumber;
    string color;
public:
    phone();
    ~phone();
    phone(int phonenumber,string color);
    void makecall();
    void display();
};

#endif // PHONE_H
