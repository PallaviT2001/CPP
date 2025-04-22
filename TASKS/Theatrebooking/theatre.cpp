#include "theatre.h"
#include <algorithm>
#include <iostream>
using namespace std;

Theatre::Theatre(int id) : m_id(id) {
    cout << "Theatre constructor for ID " << id << endl;
}

Theatre::~Theatre() {
    cout << "Theatre destructor for ID " << m_id << endl;
}

int Theatre::getId() const { return m_id; }

void Theatre::bookDay(int day) {
    if (!isBooked(day)) bookedDays.push_back(day);
}

bool Theatre::isBooked(int day) const {
    return std::find(bookedDays.begin(), bookedDays.end(), day) != bookedDays.end();
}

ostream& operator<<(ostream& os, const Theatre& t) {
    os << "Theatre ID: " << t.m_id << " | Booked Days: ";
    for (int d : t.bookedDays) os << d << " ";
    return os;
}
