#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class student:public person
{
private:
    float fees;
    string address;
protected:
    int mid;
public:
    student();
    ~student();
    student(float fees,string address);

    void setfees(float fees);
    float getfees();

    void setmid(int mid);
    int getmid();

    void setaddress(string address);
    string getaddress();

};

#endif
