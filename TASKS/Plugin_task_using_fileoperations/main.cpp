#include "Student.h"
#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    enum choice {txt=1,csv};

    cout<<"enter the format u want to read the data"<<endl;
    cout<<"1.txt "<<endl;
    cout<<"2.csv "<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
    case txt:
    {
        string filename = "students.txt";

        Student s1("likitha",26,75.00);
        Student s2("pallavi",25,50.00);
        Student s3("darshini",25,50.00);

        s1.writeToFile(filename);
        s2.writeToFile(filename);
        s3.writeToFile(filename);

        Student::readFromFile(filename);
    }
    case csv:
    {
        string filename="studentscsv.csv";

        Student s1("likitha",26,75.00);
        Student s2("pallavi",25,50.00);
        Student s3("darshini",25,50.00);

        s1.writeToFile(filename);
        s2.writeToFile(filename);
        s3.writeToFile(filename);

        Student::readFromFile(filename);
    }
        return 0;
    }
}




