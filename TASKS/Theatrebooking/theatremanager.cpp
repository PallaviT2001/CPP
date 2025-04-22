#include "TheatreManager.h"
#include <algorithm>
using namespace std;

TheatreManager::TheatreManager() {
    for (int i = 1; i <= 10; ++i)
        m_theaters[i] = new Theatre(i);
}

TheatreManager::~TheatreManager() {
    for (auto& pair : m_theaters) {
        delete pair.second;
        pair.second = nullptr;
    }
    m_theaters.clear();
}

bool TheatreManager::bookTheater(int id, const Date& date) {
    string dateStr = date.toString();
    if (!date.isTodayOrFuture()) {
        cout << "Cannot book for a past date.\n";
        return false;
    }

    auto& bookings = m_dateBookings[dateStr];
    if (find(bookings.begin(), bookings.end(), id) != bookings.end()) {
        cout << "Theatre ID " << id << " is already booked on " << dateStr << "\n";
        return false;
    }

    bookings.push_back(id);
    m_theaters[id]->bookDay(date.getDay());
    cout << "Booked Theatre ID " << id << " on " << dateStr << "\n";
    return true;
}

void TheatreManager::showBookings(const Date& date) const {
    auto it = m_dateBookings.find(date.toString());
    if (it != m_dateBookings.end()) {
        cout << "Bookings on " << date.toString() << ":\n";
        for (int id : it->second) cout << "  Theatre ID: " << id << "\n";
    } else {
        cout << "No bookings on " << date.toString() << "\n";
    }
}

void TheatreManager::printAvailableTheaters(const Date& date) const {
    cout << "Available Theatres on " << date.toString() << ":\n";
    for (const auto& pair : m_theaters) {
        if (!pair.second->isBooked(date.getDay()))
            cout << "  Theatre ID: " << pair.first << "\n";
    }
}
