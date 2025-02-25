#ifndef FACULTY_H
#define FACULTY_H
#include <vector>

class Faculty
{
private:
    int m_id;
    string m_name;
    string m_dept;

public:
    vector<Faculty> m_faculties;
    Faculty(int id,string name,string dept);
    int getId() const;
    void setDetails(string name,string dept);
    void display() const;
};
#endif
