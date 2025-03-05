#include "college_management.h"
enum choice{UpdateStudentName =1,UpdateStudentAge,UpdateStudentFee};

enum option{ UpdateName=1,UpdateAge,UpdateSalary,UpdateContactNumber,UpdateExperience};

enum select
{
    STUDENT=1,STAFF
};

enum choose
{
    INSERT=1,DELETE,UPDATION,SEARCH,DISPLAY,EXIT
};

CollegeManagement::CollegeManagement()
{

    cout<<"Default  Constuctor of College Management called"<<endl;
}

CollegeManagement::~CollegeManagement()
{
    cout<<"collegeManagement Destuctor called"<<endl;

    delete m_student;
    delete m_staff;

}

void CollegeManagement::addStudent(int id, string name,int age,float fee)
{

    m_student->push_back(Student(id,name,age,fee));
    cout<<"Added Student"<<endl;
}

void CollegeManagement::deleteStudent(int id)
{
    for(auto it = m_student->begin();it != m_student->end();it++)
    {
        if(it->getStudentId() == id)
        {
            m_student->erase(it);
            cout<<"Deleted Student"<<endl;
            return;
        }

    }

    cout << "Student Not Found!" << endl;


}

void CollegeManagement::updateStudent(int id)
{
    for (auto &s : *m_student)
    {
        if (s.getStudentId() == id)
        {
            cout<<endl<<"Details to update"<<endl;
            cout<<"1.Name"<<endl;
            cout<<"2.Age"<<endl;
            cout<<"3.Fee"<<endl;

            cout<<endl<<"Select your Choice"<<endl;

            int choice;
            cin>>choice;
            switch(choice)
            {
            case UpdateStudentName:
            {
                cout<<"before Updating Student Name :"<<s.getStudentName()<<endl;
                string newName;
                cout<<"enter New Name of Student"<<endl;
                cin>>newName;
                s.setStudentName(newName);
                cout<<endl<<"Updated Student Name :"<<s.getStudentName()<<endl;
                break;
            }
            case UpdateStudentAge:
            {
                cout<<"before Updating Student Age :"<<s.getStudentAge()<<endl;
                int newAge;
                cout<<"enter New Age of Student"<<endl;
                cin>>newAge;
                s.setStudentAge(newAge);
                cout<<endl<<"Updated Student Age :"<<s.getStudentAge()<<endl;
                break;
            }
            case UpdateStudentFee:
            {
                cout<<"before Updating Student Fee :"<<s.getStudentFee()<<endl;
                float newFee;
                cout<<"enter New Fee of Student"<<endl;
                cin>>newFee;
                s.setStudentFee(newFee);
                cout<<endl<<"Updated Student Fee :"<<s.getStudentFee()<<endl;
                break;
            }
            default:
                cout<<"Invalid Choice"<<endl;
            }

            return;
        }
    }
    cout<<"Student Not Found"<<endl;
}

void CollegeManagement::findStudent(int id)
{
    for(auto it = m_student->begin();it != m_student->end();it++)
    {
        if(it->getStudentId() == id)
        {
            cout<<endl<< "Student Found: "<< endl;
            cout<<"Student Name:"<<it->getStudentName()<<endl;
            cout<<"Student Age:"<<it->getStudentAge()<<endl;
            cout<<"Student Fee:"<<it->getStudentFee()<<endl;
            return;
        }

    }
    cout << "Student Not Found!" << endl;
}

void CollegeManagement::displayStudentData()
{
    int found =0;
    for(auto it = m_student->begin();it != m_student->end();it++)
    {
        found =1;
        cout<<"Student Data"<<endl;

        cout<<"ID:"<<it->getStudentId()<<endl;
        cout<<"Name:"<<it->getStudentName()<<endl;
        cout<<"Age:"<<it->getStudentAge()<<endl;
        cout<<"Fee:"<<it->getStudentFee()<<endl;
    }
    if(found==0)
    {
        cout<<"No student Data found"<<endl;

    }

}

void CollegeManagement::addStaff(int id, string name,int age,float salary,int number,int experience)
{
    m_staff->push_back(Staff(id,name,age,salary,number,experience));
    cout<<"Added Staff"<<endl;
}
void CollegeManagement::deleteStaff(int id)
{
    for(auto it = m_staff->begin();it != m_staff->end();it++)
    {
        if(it->getStaffId() == id)
        {
            m_staff->erase(it);
            cout<<"Deleted staff"<<endl;
            return;
        }

    }

    cout << "Staff Not Found!" << endl;
}

void CollegeManagement::updateStaff(int id)
{
    for (auto &s : *m_staff)
    {
        if (s.getStaffId() == id)
        {
            cout<<endl<<"Details to update"<<endl;
            cout<<"1.Name"<<endl;
            cout<<"2.Age"<<endl;
            cout<<"3.Salary"<<endl;
            cout<<"4.Contact Number"<<endl;

            cout<<endl<<"Select your Choice"<<endl;
            int soption;
            cin>>soption;
            switch(soption)
            {
            case UpdateName:
            {
                cout<<"before Updating Staff Name :"<<s.getStaffName()<<endl;
                string newName;
                cout<<"enter New Name of Staff"<<endl;
                cin>>newName;
                s.setStaffName(newName);
                cout<<"Updated Staff Name:"<<s.getStaffName()<<endl;

                break;
            }
            case UpdateAge:
            {
                cout<<"before Updating Staff Age :"<<s.getStaffAge()<<endl;
                int newAge;
                cout<<"enter New Age of Staff"<<endl;
                cin>>newAge;
                s.setStaffAge(newAge);
                cout<<endl<<"Updated Staff Age :"<<s.getStaffAge()<<endl;
                break;
            }
            case UpdateSalary:
            {
                cout<<"before Updating Staff Salary :"<<s.getStaffSalary()<<endl;
                int newSalary;
                cout<<"enter New Salary of Staff"<<endl;
                cin>>newSalary;
                s.setStaffSalary(newSalary);
                cout<<endl<<"Updated Staff Salary :"<<s.getStaffSalary()<<endl;
                break;
            }
            case UpdateContactNumber:
            {
                cout<<"before Updating Staff ContactNumber :"<<s.getStaffContactNumber()<<endl;
                int newContactNumber;
                cout<<"enter New ContactNumber of Staff"<<endl;
                cin>>newContactNumber;
                s.setStaffContactNumber(newContactNumber);
                cout<<endl<<"Updated Staff ContactNumber :"<<s.getStaffContactNumber()<<endl;
                break;
            }
            case UpdateExperience:
            {
                cout<<"before Updating Staff Experience :"<<s.getStaffExperience()<<endl;
                int newExperience;
                cout<<"enter New Experience of Staff"<<endl;
                cin>>newExperience;
                s.setStaffExperience(newExperience);
                cout<<endl<<"Updated Staff Experience :"<<s.getStaffExperience()<<endl;
                break;
            }
            default:
                cout<< "Invalid Choice"<<endl;

                return;
            }
        }
        cout<<"Staff Not Found"<<endl;
    }
}

void CollegeManagement::findStaff(int id)
{
    for(auto it = m_staff->begin();it != m_staff->end();it++)
    {
        if(it->getStaffId() == id)
        {
            cout << "Staff Found: " <<endl;
            cout<<"Id:"<<it->getStaffId()<< endl;
            cout<<"Name:"<<it->getStaffName()<< endl;
            cout<<"Age:"<<it->getStaffAge()<< endl;
            cout<<"Salary:"<<it->getStaffSalary()<< endl;
            cout<<"Contact Number:"<<it->getStaffContactNumber()<< endl;
            cout<<"Experience:"<<it->getStaffExperience()<< endl;

            return;
        }

    }

    cout << "Staff Not Found!" << endl;
}


void CollegeManagement::displayStaffData()
{
    int found =0;
    for(auto it = m_staff->begin();it != m_staff->end();it++)
    {
        found =1;
        cout<<"Staff Data"<<endl;

        cout<<"ID:"<< it->getStaffId() << endl;
        cout<<"Name:"<< it->getStaffName() << endl;
        cout<<"Age:"<<it->getStaffAge()<< endl;
        cout<<"Salary:"<<it->getStaffSalary()<< endl;
        cout<<"Contact Number:"<<it->getStaffContactNumber()<< endl;
        cout<<"Experience:"<<it->getStaffExperience()<< endl;
    }
    if(found==0)
    {
        cout<<"No Staff Data found"<<endl;

    }

}

void CollegeManagement::initStudent(list<Student> *m_studentlist)
{
    m_student = m_studentlist;

}

void CollegeManagement::initStaff(vector<Staff> *m_stafflist)
{
    m_staff = m_stafflist;
}

void CollegeManagement::operations()
{

    cout<<"1.Student operations"<<endl;
    cout<<"2.Staff operations"<<endl;
    cout<<"Enter Option"<<endl;
    int select;
    cin>>select;
    switch(select)
    {
    case STUDENT:
        while(true)
        {
            cout<<"1.Insert student"<<endl;
            cout<<"2.Delete Student"<<endl;
            cout<<"3.Update Student details"<<endl;
            cout<<"4.Find particular Student"<<endl;
            cout<<"5.Display Student Data"<<endl;
            cout<<"6.Exit"<<endl;


            cout<<"Enter choice"<<endl;
            int choose;
            cin>>choose;
            switch(choose)
            {
            case INSERT:
            {
                int id,age;
                string name;
                float fee;
                cout<<"enter Student Id : ";
                cin>>id;
                cout<<"enter Student Name :";
                cin>>name;
                cout<<"enter Student Age :";
                cin>>age;
                cout<<"enter Student Fee :";
                cin>>fee;



                addStudent(id,name,age,fee);
                break;
            }
            case DELETE:
            {
                int id;
                cout<<"enter Student Id to delete"<<endl;
                cin>>id;
                deleteStudent(id);
                break;
            }
            case UPDATION:

                {
                    int id;
                    cout<<"enter Student Id to update"<<endl;
                    cin>>id;
                    updateStudent(id);
                    break;
                }
            case SEARCH:
            {
                int id;
                cout<<"enter Student Id to Find"<<endl;
                cin>>id;
                findStudent(id);
                break;
            }
            case DISPLAY:
            {
                displayStudentData();
                break;
            }
            case EXIT:
                cout<<"Exiting from Student"<<endl;
                return;
            default:
                cout<<"Invalid Choice, try again"<<endl;
                break;

            }

        }
        break;
    case STAFF:

        while(true)
        {
            cout<<"1.Insert Staff"<<endl;
            cout<<"2.Delete Staff"<<endl;
            cout<<"3.Update Staff details"<<endl;
            cout<<"4.Find particular Staff"<<endl;
            cout<<"5.Display Staff Data"<<endl;

            cout<<"Enter choice"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case INSERT:
            {
                int id,age,contactNumber,experience;
                float salary;
                string name;
                cout<<"enter Staff Id: ";
                cin>>id;
                cout<<"enter Staff Name: ";
                cin>>name;
                cout<<"enter Staff Age: ";
                cin>>age;
                cout<<"enter Staff Salary: ";
                cin>>salary;
                cout<<"enter Staff Contact Number: ";
                cin>>contactNumber;
                cout<<"enter Staff Experience: ";
                cin>>experience;

                addStaff(id,name,age,salary,contactNumber,experience);
                break;
            }
            case DELETE:
            {
                int id;
                cout<<"enter Staff Id to delete"<<endl;
                cin>>id;
                deleteStaff(id);
                break;
            }
            case UPDATION:

                {
                    int id;
                    cout<<"enter Staff Id to update"<<endl;
                    cin>>id;
                    updateStaff(id);
                    break;
                }
            case SEARCH:
            {
                int id;
                cout<<"enter Staff Id to Find"<<endl;
                cin>>id;
                findStaff(id);
                break;
            }
            case DISPLAY:
            {
                displayStaffData();
                break;
            }
            case EXIT:
                cout<<"Exiting from Staff"<<endl;
                return;
            default:
                cout<<"Invalid Choice, try again"<<endl;
                break;

            }

        }
        break;

    }
}
