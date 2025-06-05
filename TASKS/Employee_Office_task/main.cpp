#include <iostream>
#include "Office.h"
#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
    Office off("PthinkS");

    Employee Pallavi("Pallavi", &off);
    Employee Varshini("Varshini", &off);
    Employee Likitha("Likitha", &off);
    Employee Darshini("Darshini", &off);
    Employee Ashwini("Ashwini", &off);
    Employee Gagana("Gagana", &off);
    Employee Navya("Navya", &off);
    Employee Divya("Divya", &off);
    Employee Teju("Teju", &off);
    Employee harshitha("harshitha", &off);
    Employee Nithya("Nithya", &Gagana);
    Employee yashaswini("yashaswini", &Varshini);

    cout<<"\noffice print function called"<<endl;
    off.print();

    cout<<"\nOffice getme function called"<<endl;
    off.getme();

    cout<<"\nvarshini getme function called"<<endl;
    Varshini.getme();

    cout<<"\noffice find child function called"<<endl;
    off.findChild("PthinkS");

    cout<<"\nVarshini findchild function called"<<endl;
    Varshini.findChild("Varshini");
    cout<<endl;

    return 0;
}




