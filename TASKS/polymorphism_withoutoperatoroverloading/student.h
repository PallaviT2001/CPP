#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class student
{
private:
    int id;
    string name;
    int contactnumber;
public:
    student();
    ~student();
    student(int id,string name,int contactnumber);
    void display();

    int getid();
    void setid(int id);

    string getname();
    void setname(string name);
};

#endif

/*class student
{
public:
    int *a;
    student();
    ~student();
    student(const student &s1)
    {
        cout<<"copy constructor called"<<endl;
        this->a=new int(*s1.a);
    }
};

#endif*/
