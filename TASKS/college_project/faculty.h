#ifndef FACULTY_H
#define FACULTY_H
#include <iostream>
using namespace std;
#include <vector>

class Faculty
{
private:
    int id;
    string name;
    string department;
public:
    Faculty();
    ~Faculty();
    Faculty(int id,string name,string department);
    vector<Faculty>facultylist;

    void display() const;
    void displayfaculty() const;

    void addfaculty(int id,string name,string department);
    void deletefaculty(int id);
    void updatefaculty(int id);
    void findfaculty(int id);

    int getid();
    void setdetails(string name,string department);
};
#endif

