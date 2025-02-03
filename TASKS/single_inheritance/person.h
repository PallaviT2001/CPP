#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class person
{
private:
    string name;
    int age;
    int contactnumber;
    float height;
public:
    person();
    ~person();
    person(string name,int age,int contactnumber,float height);
};

#endif
