#include "Student.h"

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(string name, int age, float grade)
{
    m_name=name;
    m_age=age;
    m_grade=grade;
    cout<<"student parameterized constructor called"<<endl;
}

void Student::writeToFile(const string& filename)
{
    ofstream outFile(filename, ios::app);

    if (outFile.is_open())
    {
        outFile << m_name << "," << m_age << "," << m_grade << endl;
        outFile.close();
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout <<"file is not opened"<< endl;
    }
}

void Student::readFromFile(const string& filename)
{
    ifstream inFile(filename);


    if (inFile.is_open())
    {
        string line;
        cout << "Reading the data from file" << endl;

        while (getline(inFile, line))
        {
            stringstream data(line);
            string name;
            int age;
            float grade;
            getline(data, name, ',');
            data >> age;
            data.ignore();
            data>> grade;
            cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
        }
        inFile.close();
    }
    else
    {
        cout <<"file is not opened"<< endl;
    }
}
