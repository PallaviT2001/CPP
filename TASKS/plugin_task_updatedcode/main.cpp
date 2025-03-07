#include <iostream>
#include "studentmanagement.h"

using namespace std;

int main() {
    StudentManagement sm;
    int choice;

    while (true) {
        cout << "\n1. Add Student\n2. Save to TXT\n3. Save to CSV\n4. Load from TXT\n5. Load from CSV\n6. Display\n7. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) sm.addStudent();
        else if (choice == 2) sm.saveData(1);
        else if (choice == 3) sm.saveData(2);
        else if (choice == 4) sm.loadData(1);
        else if (choice == 5) sm.loadData(2);
        else if (choice == 6) sm.display();
        else break;
    }

    return 0;
}
