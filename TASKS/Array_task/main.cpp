#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

class EmployeeManager
{
private:
    struct Employee {
        int id;
        string name;
        int age;
        double salary;
    };

    vector<Employee> employees;
    string filename = "employees.csv";

public:
    void generateCSV(int count) {
        ofstream file(filename);
        if (!file)
        {
            cerr << "Error creating file!" << endl;
            return;
        }
        file << "ID,Name,Age,Salary\n";

        string names[] = {"pallavi", "darshini", "vidya", "likitha", "varshini"};
        for (int i = 1; i <= count; i++)
        {
            int age = rand() % 50 + 20;
            double salary = (rand() % 90000) + 20000;
            file << i << "," << names[i % 5] << "," << age << "," << salary << "\n";
        }

        file.close();
        cout << "Generated " << count << " records in " << filename << endl;
    }


    void loadCSV() {
        employees.clear();
        ifstream file(filename);
        if (!file)
        {
            cerr << "Error opening file!" << endl;
            return;
        }
        string line;
        getline(file, line);

        while (getline(file, line))
        {
            stringstream ss(line);
            Employee emp;
            string temp;
            getline(ss, temp, ',');
            emp.id = stoi(temp);
            getline(ss, emp.name, ',');
            getline(ss, temp, ',');
            emp.age = stoi(temp);
            getline(ss, temp, ',');
            emp.salary = stod(temp);
            employees.push_back(emp);
        }
        file.close();
        cout << "Loaded " << employees.size() << " records.\n";
    }

    void searchByID(int searchID)
    {
        for (const auto &emp : employees)
        {
            if (emp.id == searchID)
            {
                cout << "Found: " << emp.id << ", " << emp.name << ", " << emp.age << ", " << emp.salary << endl;
                return;
            }
        }
        cout << "Employee with ID " << searchID << " not found.\n";
    }


    void sortEmployees(const string &criteria)
    {
        if (criteria == "id")
        {
            sort(employees.begin(), employees.end(), [](Employee a, Employee b) { return a.id < b.id; });
        }
        else if (criteria == "name")
        {
            sort(employees.begin(), employees.end(), [](Employee a, Employee b) { return a.name < b.name; });
        }
        else if (criteria == "age")
        {
            sort(employees.begin(), employees.end(), [](Employee a, Employee b) { return a.age < b.age; });
        }
        else if (criteria == "salary")
        {
            sort(employees.begin(), employees.end(), [](Employee a, Employee b) { return a.salary < b.salary; });
        }
        else
        {
            cout << "Invalid sorting criteria!\n";
            return;
        }
        cout << "Data sorted by " << criteria << ".\n";
    }


    void displayEmployees(int count = 10)
    {
        cout << "ID\tName\tAge\tSalary\n";
        for (int i = 0; i < min(count, (int)employees.size()); i++)
        {
            cout << employees[i].id << "\t" << employees[i].name << "\t" << employees[i].age << "\t" << employees[i].salary << endl;
        }
    }
};

int main() {
    EmployeeManager manager;
    manager.generateCSV(200000);
    manager.loadCSV();
    int searchID;
    cout << "Enter Employee ID to search: ";
    cin >> searchID;
    manager.searchByID(searchID);

    string sortCriteria;
    cout << "Enter sorting criteria (id/name/age/salary): ";
    cin >> sortCriteria;
    manager.sortEmployees(sortCriteria);

    manager.displayEmployees(10);

    return 0;
}
