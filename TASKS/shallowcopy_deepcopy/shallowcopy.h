#ifndef SHALLOWCOPY_H
#define SHALLOWCOPY_H

class Shallowcopy
{
private:
    int *data;
public:
    Shallowcopy();
    ~Shallowcopy();
    Shallowcopy(int a);
    Shallowcopy(const Shallowcopy &obj);
    void show();
    void display();
};

#endif
