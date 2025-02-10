#ifndef CIRCLE_H
#define CIRCLE_H


class Circle:public Shape
{
private:
    int m_radious;
public:
    Circle();
    ~Circle();
    Circle(int radius);

    void area();
    void display();
};

#endif // CIRCLE_H
