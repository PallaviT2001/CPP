#ifndef STUDENT_H
#define STUDENT_H
#include <list>

class Student
{
private:
    int m_id;
    string m_name;
    string m_branch;

public:
    list<Student> m_students;
    Student(int id, string name,string branch);
    int getId() const;
    void setDetails(string name,string branch);
    void display() const;
};

#endif
