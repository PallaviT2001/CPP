#include "college.h"
using namespace std;

int main() {
    College college;
    int choice, id;
    string name, dept, branch;

    while (true) {
        cout << "\n===== College Management System =====\n";
        cout << "1. Add Faculty\n2. Delete Faculty\n3. Update Faculty\n4. Display Faculties\n";
        cout << "5. Add Student\n6. Delete Student\n7. Update Student\n8. Display Students\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Faculty ID, Name, Department: ";
            cin >> id >> name >> dept;
            college.addFaculty(id, name, dept);
            break;

        case 2:
            cout << "Enter Faculty ID to Delete: ";
            cin >> id;
            college.deleteFaculty(id);
            break;

        case 3:
            cout << "Enter Faculty ID, New Name, New Department: ";
            cin >> id >> name >> dept;
            college.updateFaculty(id, name, dept);
            break;

        case 4:
            college.displayFaculties();
            break;

        case 5:
            cout << "Enter Student ID, Name, Branch: ";
            cin >> id >> name >> branch;
            college.addStudent(id, name, branch);
            break;

        case 6:
            cout << "Enter Student ID to Delete: ";
            cin >> id;
            college.deleteStudent(id);
            break;

        case 7:
            cout << "Enter Student ID, New Name, New Branch: ";
            cin >> id >> name >> branch;
            college.updateStudent(id, name, branch);
            break;

        case 8:
            college.displayStudents();
            break;

        case 9:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
