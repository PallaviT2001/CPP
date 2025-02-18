#ifndef KEY_H
#define KEY_H

class Key
{
private:
    bool inserted;
public:
    Key();
    ~Key();
    void insert();
    void remove();
    bool isInserted() const;
};

#endif
