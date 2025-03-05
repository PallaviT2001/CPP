#include <iostream>
#include "fileoperation.h"
#include "student.h"
#include "csv.h"
#include "xml.h"
#include "json.h"

using namespace std;

enum choice
{
    csv = 1, xml, json
};

int main()
{

    int choice;
    cout << "Select Required File Type" << endl;
    cout << "1. CSV" << endl;
    cout << "2. XML" << endl;
    cout << "3. JSON" << endl;
    cin >> choice;

    CSV c;
    XML x;
    JSON j;

    Student *student = new Student;

    switch (choice)
    {
    case csv:
        c.studentinit(student);


               // student->addstudent("Likitha", 25, 23456, "9743076146");
                c.readData();


        break;
    case xml:
        // x.studentinit(student);
        // for (int i = 0; i < 10; i++)
        // {
        //     student->addstudent("Likitha", 25, 23456, "9743076146");
        //     x.readData();
        // }
        break;
    case json:
        // j.studentinit(student);
        // for (int i = 0; i < 10; i++)
        // {
        //     student->addstudent("Darshini", 26, 34567, "9743076146");
        //     j.readData();
        // }
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    delete student;
    return 0;
}
