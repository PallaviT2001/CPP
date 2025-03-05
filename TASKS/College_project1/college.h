#ifndef COLLEGE_H
#define COLLEGE_H

#include <iostream>
#include <vector>
#include <list>
#include "student.h"
#include "faculty.h"

using namespace std;

class College {
protected:
    list<Student> m_students;
    vector<Faculty> m_faculties;

public:
    College();
    ~College();

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
