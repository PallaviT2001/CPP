#include "student.h"

Student::Student() : name(""), age(0), usn(0), mobileNumber("")
{

}

Student::Student(string name, int age, int usn, string number): name(name), age(age), usn(usn), mobileNumber(number)
{

}

void Student::display() const
{
    cout << "Name: " << name << ", Age: " << age<< ", USN: " << usn << ", Mobile: " << mobileNumber << endl;
}

string Student ::getName() const
{
    return name;
}

int Student:: getAge() const
{
    return age;
}

int Student:: getUSN() const
{
    return usn;
}
string Student ::getMobileNumber() const
{
    return mobileNumber;
}
