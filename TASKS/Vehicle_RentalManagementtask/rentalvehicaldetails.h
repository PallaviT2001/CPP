#ifndef RENTALVEHICALDETAILS_H
#define RENTALVEHICALDETAILS_H
#include <iostream>
using namespace std;

class RentalVehicalDetails
{
public:
    RentalVehicalDetails();
    ~RentalVehicalDetails();

    virtual int getId() = 0;
    virtual string getBrand() = 0;
    virtual string getModel() = 0;
    virtual string getVehicalNumber() = 0 ;
    virtual float getCost() = 0;
    virtual string getStatus() = 0;
    virtual int getDuration() =0;
    virtual void setStatus(string status) = 0 ;
    virtual void setCost(float cost) =0;

protected:
    int m_id;
    string m_brand;
    string m_model;
    string m_vehicalNumber;
    float m_cost;
    string m_status;
    int m_duration;

};

#endif // RENTALVEHICALDETAILS_H
