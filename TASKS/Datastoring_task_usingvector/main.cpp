#include <iostream>
#include "fileoperation.h"
#include "student.h"
#include "csv.h"
#include "xml.h"
#include "json.h"

using namespace std;

enum choice
{
    csv = 1, xml, json
};

int main()
{
    Fileoperation *fileptr = nullptr;
    int choice;
    cout << "Select Required File Type" << endl;
    cout << "1. CSV" << endl;
    cout << "2. XML" << endl;
    cout << "3. JSON" << endl;
    cin >> choice;
    switch (choice)
    {
    case csv:
        fileptr = new CSV;
        fileptr->readData();
        delete fileptr;
        break;
    case xml:
        fileptr = new XML;
        fileptr->readData();
        delete fileptr;
        break;
    case json:
        fileptr = new JSON;
        fileptr->readData();
        delete fileptr;
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
    return 0;
}
