#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    student *s1 = new student("Pallavi",1,25,123654);
    s1->printme();
    student *s2= new student("likitha",10,20,987456);
    s2->printme();
    return 0;
}
