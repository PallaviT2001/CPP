#ifndef LAPTOPTEMPLATE_H
#define LAPTOPTEMPLATE_H

template<typename I,typename S,typename D>

class Laptoptemplate
{
private:
    float price;
public:
    Laptoptemplate();
    ~Laptoptemplate();
    S function(I,S);
};

#endif
