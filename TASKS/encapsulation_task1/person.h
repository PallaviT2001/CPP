#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class person
{
private:
    string name;
    int id;
    int age;
    int contactnumber;

public:
    person();
    ~person();
    person(string name,int id,int age,int contactnumber);

    string getname();
    void setname(string name);

    int getid();
    void setid(int id);

    int getage();
    void setage(int age);

    int getcontactnumber();
    void setcontactnumber(int contactnumber);
};
#endif
