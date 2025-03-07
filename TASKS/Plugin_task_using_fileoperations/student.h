#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Student
{
private:
    string m_name;
    int m_age;
    float m_grade;

public:
    Student();
    ~Student();
    Student(string name, int age, float grade);

    void writeToFile(const string& filename);
    static void readFromFile(const string& filename);
};

#endif

