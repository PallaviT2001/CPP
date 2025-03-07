#include "Student.h"
#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    string filename = "students.txt";

    Student s1("likitha",26,75.00);
    Student s2("pallavi",25,50.00);
    Student s3("darshini",25,50.00);

    s1.writeToFile(filename);
    s2.writeToFile(filename);
    s3.writeToFile(filename);

    Student::readFromFile(filename);
    return 0;
}
