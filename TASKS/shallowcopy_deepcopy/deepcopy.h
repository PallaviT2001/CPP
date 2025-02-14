#ifndef DEEPCOPY_H
#define DEEPCOPY_H

class Deepcopy
{
private:
    int *data;
public:
    Deepcopy();
    ~Deepcopy();
    Deepcopy(int val);
    Deepcopy(const Deepcopy &obj);
    void show();
};
#endif

