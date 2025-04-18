#ifndef THEATRE_H
#define THEATRE_H

class Theatre
{
private:
    int id;
public:
    Theatre();
    ~Theatre();
    Theatre(int id);
    int getId() const;
    bool operator==(const Theatre& other) const;
};

#endif
