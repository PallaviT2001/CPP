#ifndef TEMPCAR_H
#define TEMPCAR_H

template <typename C>

class Tempcar
{
private:
    C m_z;
public:
    Tempcar();
    ~Tempcar();
    Tempcar(C z);
    C add(C a,C b);


};

#endif // TEMPCAR_H
