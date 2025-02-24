#ifndef COLLEGE_H
#define COLLEGE_H
using namespace std;
#include <iostream>
#include <vector>
#include <list>
#include <string>

class Student
{
    int m_id;
    string m_name;
    string m_branch;

    public:
    Student(int id, string name,string branch);
    int getId() const;
    void setDetails(string name,string branch);
    void display() const;
};

class Faculty
{
    int m_id;
    string m_name;
    string m_dept;

    public:
    Faculty(int id,string name,string dept);
    int getId() const;
    void setDetails(string name,string dept);
    void display() const;
};

class College
{
    vector<Faculty> m_faculties;
    list<Student> m_students;

    public:
    College();
    void addFaculty(int id,string name,string dept);
    void deleteFaculty(int id);
    void updateFaculty(int id,string name, std::string dept);
    void displayFaculties() const;

    void addStudent(int id,string name,string branch);
    void deleteStudent(int id);
    void updateStudent(int id,string name,string branch);
    void displayStudents() const;
};

#endif
