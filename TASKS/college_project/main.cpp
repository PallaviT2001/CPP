#include <iostream>
#include "student.h"
#include "college.h"
#include "faculty.h"
using namespace std;

int main()
{
    College collegeobj;
    Student studentobj;
    Faculty facultyobj;
    int id,choice,age;
    string department;
    string name;
    while(true)
    {
        cout<<"1.add student"<<endl;
        cout<<"2.delete student"<<endl;
        cout<<"3.update student"<<endl;
        cout<<"4.display student"<<endl;
        cout<<"5.find student"<<endl;
        cout<<"6.add faculty"<<endl;
        cout<<"7.delete faculty"<<endl;
        cout<<"8.update faculty"<<endl;
        cout<<"9.display faculty"<<endl;
        cout<<"10.find faculty"<<endl;
        cout<<"11.exit"<<endl;

        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
           cout<<"enter student id, name and age"<<endl;
           cin>>id>>name>>age;
           studentobj.addstudent(id,name,age);
            break;
        }
        case 2:
        {
            cout<<"enter student id to delete"<<endl;
            cin>>id;
            studentobj.deletestudent(id);
            break;
        }

        case 3:
        {
            cout<<"enter student id to update"<<endl;
            cin>>id;
            studentobj.updatestudent(id);
            break;
        }

        case 4:
        {
            cout<<"display student list"<<endl;
            studentobj.displaystudents();
            break;
        }

        case 5:
        {
            cout<<"enter student id to find"<<endl;
            cin>>id;
            studentobj.findstudent(id);
            break;
        }

        case 6:
        {
            cout<<"enter faculty id, name and department"<<endl;
            cin>>id>>name>>department;
            facultyobj.addfaculty(id,name,department);
            break;
        }
        case 7:
        {
            cout<<"enter faculty id to delete"<<endl;
            cin>>id;
            facultyobj.deletefaculty(id);
            break;
        }

        case 8:
        {
            cout<<"enter faculty id to update"<<endl;
            cin>>id;
            facultyobj.updatefaculty(id);
            break;
        }

        case 9:
        {
            cout<<"display faculty list"<<endl;
            facultyobj.displayfaculty();
            break;
        }

        case 10:
        {
            cout<<"enter faculty id to find"<<endl;
            cin>>id;
            facultyobj.findfaculty(id);
            break;
        }

        case 11:
        {
            exit(0);
            break;
        }
        }
    }

    return 0;
}
