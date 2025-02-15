#ifndef CARTEMPLATE_H
#define CARTEMPLATE_H
#include <iostream>
using namespace std;

template<typename I, typename D>
class cartemplate
{
private:
    string name;
public:
    cartemplate();
    ~cartemplate();
    D add(I,D);
};

#endif
