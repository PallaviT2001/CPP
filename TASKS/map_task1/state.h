#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

class State
{
private:
    string m_state;
public:
    State();
    ~State();
    State(string state);
    bool operator<(const State &s)const
    {
        return m_state<s.m_state;
    }
    friend ostream& operator <<(ostream& cout,const State &s)
    {
        cout<<s.m_state;
        return cout;
    }
};

#endif
