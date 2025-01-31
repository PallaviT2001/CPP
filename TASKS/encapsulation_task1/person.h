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
    string contactnumber;
public:
    person();
    ~person();
    string getname();
    void setname(string name);
    int getid();
    void setid(int id);
    int getage();
};

#endif // PERSON_H
