#ifndef BIRD_H
#define BIRD_H
#include <iostream>
using namespace std;

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
    friend class Parrot;
};

#endif // BIRD_H
