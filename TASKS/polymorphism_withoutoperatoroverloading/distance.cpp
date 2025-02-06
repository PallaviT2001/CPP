#include "distance.h"

Distance::Distance()
{

}

Distance::~Distance()
{

}

Distance::Distance(int km)
{
   m_km=km;
}

/*void Distance::add(const Distance &obj)
{
    cout<<"without operator overloading"<<endl;
    m_km=this->m_km+obj.m_km;
}*/

void Distance::add(Distance obj)
{
    cout<<"without operator overloading addition"<<endl;
    m_km=m_km+obj.m_km;
}

void Distance::displayadd()
{
    cout<<"total kilometers"<<m_km<<endl;
}

void Distance::sub(Distance obj)
{
    cout<<"without operator overloading substraction"<<endl;
    m_km=this->m_km-obj.m_km;
}

void Distance::displaysub()
{
    cout<<"total kilometers"<<m_km<<endl;
}

void Distance::mul(Distance obj)
{
    cout<<"without operator overloading multiplication"<<endl;
    m_km=this->m_km * obj.m_km;
}

void Distance::displaymul()
{
    cout<<"total kilometers"<<m_km<<endl;
}

void Distance::div(Distance obj2)
{
    cout<<"without operator overloading division"<<endl;
    m_km=this->m_km/obj2.m_km;
}

void Distance::displaydiv()
{
    cout<<"total kilometers"<<m_km<<endl;
}



