#ifndef COLLEGEMANAGEMENT_H
#define COLLEGEMANAGEMENT_H
#include <iostream>
#include "student.h"
#include "staff.h"
#include <vector>
#include <list>
using namespace std;
class CollegeManagement
{
private:
    list<Student>*m_student;
    vector<Staff>*m_staff;
public:
    CollegeManagement();
    ~CollegeManagement();
    void addStudent(int id,string name,int age,float fee);
    void deleteStudent(int id);
    void updateStudent(int id);
    void findStudent(int id);
    void displayStudentData();

    void addStaff(int id,string name,int age,float salary,int number,int experience);
    void deleteStaff(int id);
    void updateStaff(int id);
    void findStaff(int id);
    void displayStaffData();

    void initStudent( list<Student>* m_student);
    void initStaff(vector<Staff>* m_staff);
    void operations();

};

#endif // COLLEGEMANAGEMENT_H
