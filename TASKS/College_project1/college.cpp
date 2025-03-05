#include "college.h"


College::College()
{
    cout<<"Default Constructor of College Called"<<endl;
    m_management = new CollegeManagement;
    m_student = new Student;
    m_staff = new Staff;
    m_management->initStudent(&m_studentlist);
    m_management->initStaff(&m_stafflist);
}

void College::operations()
{
    m_management->operations();
}

College::~College()
{
    cout<<"Destructor of College Called"<<endl;
    delete m_management;
    delete m_student;
    delete m_staff;
}

