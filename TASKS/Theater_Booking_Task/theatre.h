#ifndef THEATRE_H
#include <iostream>
using namespace std;

class Theatre
{
private:
    int m_id;
    bool booked[31];
public:
    Theatre();
    ~Theatre();
    Theatre(int id);
    int getId();
    void setId(int id);
    bool book(int day);
    bool isBooked(int day);
};
#endif
