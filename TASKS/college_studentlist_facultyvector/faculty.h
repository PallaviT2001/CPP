#ifndef FACULTY_H
#define FACULTY_H
#include "personaldetails.h"
#include <vector>

class Faculty:public Personaldetails
{
public:
    Faculty();
    ~Faculty();
    Faculty(int id,string name,int age);
    int getId();
    string getname();
    int getage();
    void setDetails(string name,int age);
    void display();
};
#endif
