#include "csv.h"

CSV::CSV() {}
CSV::~CSV() {}

list<Student> CSV::readData()
{

    cout<<"CSV read Data function Called"<<endl;
    list<Student>studentList;

    Student s1("Pallavi",28,2845,"974165256");
    Student s2("Pallavi",28,2845,"974165256");
    Student s3("Pallavi",28,2845,"974165256");
    Student s4("Pallavi",28,2845,"974165256");
    Student s5("Pallavi",28,2845,"974165256");
    Student s6("Pallavi",28,2845,"974165256");
    Student s7("Pallavi",28,2845,"974165256");
    Student s8("Pallavi",28,2845,"974165256");
    Student s9("Pallavi",28,2845,"974165256");
    Student s10("Pallavi",28,2845,"974165256");

    studentList.push_back(s1);
    studentList.push_back(s2);
    studentList.push_back(s3);
    studentList.push_back(s4);
    studentList.push_back(s5);
    studentList.push_back(s6);
    studentList.push_back(s7);
    studentList.push_back(s8);
    studentList.push_back(s9);
    studentList.push_back(s10);

    return studentList;
}


