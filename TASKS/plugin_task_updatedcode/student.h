#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int usn;
    string mobileNumber;

public:
    Student();
    Student(string name, int age, int usn, string number);

    string getName() const;
    int getAge() const;
    int getUSN() const;
    string getMobileNumber() const ;
    void display() const;
};

#endif
