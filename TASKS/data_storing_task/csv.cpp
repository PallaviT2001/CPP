#include "csv.h"
#include "student.h"

CSV::CSV()
{
    m_student = NULL;
    cout<<"CSV Constructor called"<<endl;
}

CSV::~CSV()
{
    cout<<"CSV Destructor called"<<endl;
}

void CSV::studentinit(Student *s)
{
    m_student = s;
}

list<Student> CSV::readData()
{

    list<Student>studentList;
    for(int i =0;i<10;i++)
    {
        studentList.push_back(Student("Pallavi",28,2845,"974165256"));

    }

    for(auto i =studentList.begin();i != studentList.end();i++)
    {
        cout<<i->getname()<<","<<i->getage()<<","<<i->getusn()<<","<<i->getnumber()<<endl;

    }

    return studentList;
}
