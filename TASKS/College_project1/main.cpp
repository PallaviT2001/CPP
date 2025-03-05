#include "college.h"
#include "College_management.h"

int main() {
    College_management cm;
    int choice, id, age;
    string name;

    while (true) {
        cout << "\n===== College Management System =====\n";
        cout << "1. Add Student\n2. Delete Student\n3. Update Student\n4. Display Students\n";
        cout << "5. Add Faculty\n6. Delete Faculty\n7. Update Faculty\n8. Display Faculties\n9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Student ID, Name, Age: ";
            cin >> id >> name >> age;
            cm.addStudent(id, name, age);
            break;

        case 2:
            cout << "Enter Student ID to Delete: ";
            cin >> id;
            cm.deleteStudent(id);
            break;

        case 3:
            cout << "Enter Student ID to Update: ";
            cin >> id;
            cm.updateStudent(id);
            break;

        case 4:
            cm.displayStudents();
            break;

        case 5:
            cout << "Enter Faculty ID, Name, Age: ";
            cin >> id >> name >> age;
            cm.addFaculty(id, name, age);
            break;

        case 6:
            cout << "Enter Faculty ID to Delete: ";
            cin >> id;
            cm.deleteFaculty(id);
            break;

        case 7:
            cout << "Enter Faculty ID to Update: ";
            cin >> id;
            cm.updateFaculty(id);
            break;

        case 8:
            cm.displayFaculties();
            break;

        case 9:
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
