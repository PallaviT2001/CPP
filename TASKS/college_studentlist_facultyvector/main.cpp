#include "college.h"
#include "student.h"
#include "faculty.h"
#include "college_management.h"
using namespace std;

int main() {
    College *c1;
    College_management *cm;
    Student *s1;
    Faculty *f1;
    int choice,id,age;
    string name;

    while (true) {
        cout << "\n===== College Management System =====\n";
        cout << "1. Add Student\n2. Delete Student\n3. Update Student\n4. Display Students\n";
        cout << "5. Add Faculty\n6. Delete Faculty\n7. Update Faculty\n8. Display Faculties\n";

        cout << "Enter your choice:";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Student ID, Name, age: ";
            cin >> id >> name >> age;
            cm->addStudent(id, name, age);
            break;

        case 2:
            cout << "Enter Student ID to Delete: ";
            cin >> id;
            cm->deleteStudent(id);
            break;

        case 3:
            cout << "Enter Student ID to update fields ";
            cin >> id;
            cm->updateStudent(id);
            break;

        case 4:
            cm->displayStudents();
            break;


        case 5:
            cout << "Enter Faculty ID, Name,age: ";
            cin >> id >> name >> age;
            c1->addFaculty(id, name,age);
            break;

        case 6:
            cout << "Enter Faculty ID to Delete: ";
            cin >> id;
            cm->deleteFaculty(id);
            break;

        case 7:
            cout << "Enter Faculty ID to update fields";
            cin >> id;
            c1->updateFaculty(id);
            break;

        case 8:
            cm->displayFaculties();
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
