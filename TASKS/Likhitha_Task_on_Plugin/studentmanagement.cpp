#include "studentmanagement.h"
#include "csv.h"
#include "xml.h"

enum choice {csv=1,xml};
StudentManagement::StudentManagement()
{
    cout << "Student Management Constructor called" << endl;
    m_fileoperations = nullptr;

}

StudentManagement::~StudentManagement()
{
    delete m_fileoperations;
}



void StudentManagement::display()
{
    cout<< endl <<"Enter required format"<<endl;
    cout<<"1.CSV"<<endl;
    cout<<"2.XML"<<endl << endl;

    cout << "Enter your choice: ";

    int choice;
    cin>>choice;
    switch(choice)
    {
    case csv:
    {
        m_fileoperations = new CSV;
        m_list = m_fileoperations->readData();

        for(auto i =m_list.begin();i!= m_list.end();i++)
        {
            cout<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobileNumber()<<endl;
        }
        break;
    }
    case xml:
    {
        m_fileoperations = new XML;
        m_list = m_fileoperations->readData();
        for(auto i =m_list.begin();i!= m_list.end();i++)
        {
            cout<<"<Name>"<<i->getName()<<"<Name>"<<endl<<"<Age>"<<i->getAge()<<"<Age>"<<endl<<"<USN>"<<i->getUSN()<<"<USN>"<<endl<<"Mobile Number>"<<i->getMobileNumber()<<"<Mobile Number>"<<endl;

        }
        break;
    }


    }



}

