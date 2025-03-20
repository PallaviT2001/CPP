#include "rentaldetails.h"

RentalDetails::RentalDetails()
{
    cout<<"Rental Details constructor called"<<endl;

}

RentalDetails::RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType, string paymentMode, string UpiId, int transactionId, string paymentStatus, Vehical *rentedVehical)
{
    cout<<"Rental Details Parameterized Constructor Called"<<endl;
    m_name = name;
    m_mobile = mobile;
    m_age = age;
    m_bookingId = bookingid;
    m_vehicalType = vehicalType;
    m_paymentMode = paymentMode;
    m_UPI = UpiId;
    m_transactionId = transactionId;
    m_paymentStatus = paymentStatus;
    m_rentedVehical = rentedVehical;
}

RentalDetails::~RentalDetails()
{
    cout<<"Rental Details Destructor called"<<endl;

}



string RentalDetails::getName()
{
    return m_name;
}

string RentalDetails::getMobile()
{
    return m_mobile;
}

int RentalDetails::getAge()
{
    return m_age;
}

int RentalDetails::getBookingId()
{
    return m_bookingId;
}

string RentalDetails::getVehicalType()
{
    return m_vehicalType;
}

string RentalDetails::getPaymentMode()
{
    return m_paymentMode;
}

string RentalDetails::getUPIid()
{
    return m_UPI;
}

int RentalDetails::getTransactionId()
{
    return m_transactionId;
}

string RentalDetails::getPaymentStatus()
{
    return m_paymentStatus;
}

int RentalDetails::getId()
{
    return m_rentedVehical->getId();
}

string RentalDetails::getModel()
{
    return m_rentedVehical->getModel();
}

float RentalDetails::getCost()
{

    return m_rentedVehical-> getCost();

}

string RentalDetails::getStatus()
{
    return m_rentedVehical->getStatus();
}

int RentalDetails::getDuration()
{
    return m_rentedVehical-> getDuration();
}
