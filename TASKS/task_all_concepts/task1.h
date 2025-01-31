#ifndef TASK1_H
#define TASK1_H
#include <string>
#include <iostream>
using namespace std;

class task1
{
private:
    int id;
    string name;
public:
    task1(int id, const string name);
    //task1();
    void display() const;
    static void display(const string message);
    ~task1();
};
#endif
