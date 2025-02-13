#ifndef BIRD_H
#define BIRD_H
#include <iostream>
using namespace std;
#include <string>

class Bird
{
private:
    int m_age;
    string m_name;
    float m_height;
public:
    Bird();
    ~Bird();
    Bird(int age,string name,float height);
    friend void display(Bird &a);
};

#endif
