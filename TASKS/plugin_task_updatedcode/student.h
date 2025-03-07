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

    string getName() const { return name; }
    int getAge() const { return age; }
    int getUSN() const { return usn; }
    string getMobileNumber() const { return mobileNumber; }

    void display() const;
};

#endif // STUDENT_H
