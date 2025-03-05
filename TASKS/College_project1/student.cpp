#include "student.h"

Student::Student() : Personaldetails() {}

Student::Student(int id, string name, int age) : Personaldetails(id, name, age) {}

void Student::display() const {
    cout<<"Student: " << m_name << ", Age: " << m_age << endl;
}
