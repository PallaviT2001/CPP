#include <iostream>
#include "studentmanagement.h"

using namespace std;

int main() {
    StudentManagement sm;
    int choice;

    while (true) {
        cout<<"enter the choice"<<endl;
        cout<<"1.Add student "<<endl;
        cout<<"2.Save student data in txt file"<<endl;
        cout<<"3.Save student data in csv file"<<endl;
        cout<<"4.Load data from txt file"<<endl;
        cout<<"5.Load data from csv file"<<endl;
        cout<<"6.Display student data"<<endl;
        cout<<"7.Exit"<<endl;
        cin >> choice;

        if (choice == 1)
        {
            sm.addStudent();
        }
        else if (choice == 2)
        {
            sm.saveData(1);
        }
        else if (choice == 3)
        {
            sm.saveData(2);
        }
        else if (choice == 4)
        {
            sm.loadData(1);
        }
        else if (choice == 5)
        {
            sm.loadData(2);
        }
        else if (choice == 6)
        {
            sm.display();
        }
        else break;
    }

    return 0;
}
