#ifndef SHALLOWCOPY_H
#define SHALLOWCOPY_H

class Shallowcopy
{
private:
    int *data;
public:
    Shallowcopy();
    ~Shallowcopy();
    Shallowcopy(int val);
    Shallowcopy(const Shallowcopy &obj);
    void show();
};

#endif
