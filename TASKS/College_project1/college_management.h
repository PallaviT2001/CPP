#ifndef COLLEGE_MANAGEMENT_H
#define COLLEGE_MANAGEMENT_H
#include <iostream>
using namespace std;
#include "student.h"
#include "faculty.h"
#include <list>
#include <vector>

class College_management
{
public:

    College_management();
    ~College_management();

    list<Student> m_students;
    vector<Faculty> m_faculties;

    void addStudent(int id, string name, int age);
    void deleteStudent(int id);
    void updateStudent(int id);
    void displayStudents();

    void addFaculty(int id, string name, int age);
    void deleteFaculty(int id);
    void updateFaculty(int id);
    void displayFaculties();
};

#endif
