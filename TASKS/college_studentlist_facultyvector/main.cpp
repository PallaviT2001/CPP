#include "college.h"
#include "student.h"
#include "faculty.h"
using namespace std;

int main() {
    College college;
    int choice, id;
    string name, dept, branch;

    while (true) {
        cout << "\n===== College Management System =====\n";
        cout << "1. Add Faculty\n2. Delete Faculty\n3. Update Faculty\n4. Display Faculties\n";
        cout << "5. Add Student\n6. Delete Student\n7. Update Student\n8. Display Students\n";
        cout << "9. find student\n10. find faculty\n11. exit\n";

        cout << "Enter your choice:";
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
            cout << "Enter Faculty ID to update fields";
            cin >> id;
            college.updateFaculty(id);
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
            cout << "Enter Student ID to update fields ";
            cin >> id;
            college.updateStudent(id);
            break;

        case 8:
            college.displayStudents();
            break;

        case 9:
            cout<<"enter student id to find details"<<endl;
            cin>>id;
            college.findstudent(id);
            break;

        case 10:
            cout<<"enter faculty id to find details"<<endl;
            cin>>id;
            college.findfaculty(id);
            break;

        case 11:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
