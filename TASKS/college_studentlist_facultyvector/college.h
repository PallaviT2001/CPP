#ifndef COLLEGE_H
#define COLLEGE_H
using namespace std;
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "student.h"
#include "faculty.h"

class College
{
private:
    vector<Faculty> m_faculties;
    list<Student> m_students;
public:
    College();
    void addFaculty(int id,string name,string dept);
    void deleteFaculty(int id);
    void updateFaculty(int id);
    void displayFaculties() const;
    void findfaculty(int id) const;

    void addStudent(int id,string name,string branch);
    void deleteStudent(int id);
    void updateStudent(int id);
    void displayStudents() const;
    void findstudent(int id)const;
};

#endif
