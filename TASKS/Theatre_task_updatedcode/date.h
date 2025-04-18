#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
private:
    string dateStr;
public:
    Date();
    ~Date();
    Date(string d);
    string getDateStr() const;

    bool operator==(const Date& other) const;
    bool operator<(const Date& other) const;
};
#endif
