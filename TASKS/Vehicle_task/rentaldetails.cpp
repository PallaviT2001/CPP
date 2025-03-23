#include "rentaldetails.h"

RentalDetails::RentalDetails()
{
    cout<<"Rental Details constructor called"<<endl;

}

RentalDetails::RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType, string paymentType, RentalVehicalDetails *rentedVehical, PaymentMode *payment)
{
    cout<<"Rental Details Parameterized Constructor Called"<<endl;
    m_name = name;
    m_mobile = mobile;
    m_age = age;
    m_bookingId = bookingid;
    m_vehicalType = vehicalType;
    m_paymentType = paymentType;
    m_rentedVehical = rentedVehical;
    m_payment = payment;

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

string RentalDetails::getPaymentType()
{
    return m_paymentType;
}

string RentalDetails::getUPIid()
{
    return m_payment->getUPIid();
}

float RentalDetails::getAmount()
{
    return m_payment->getAmount();
}

float RentalDetails::getBalance()
{
    return m_payment->getBalance();
}

string RentalDetails::getPaymentStatus()
{
    return m_payment->getPaymentStatus();
}

int RentalDetails::getTransactionId()
{
    return m_payment->getTransactionId();
}

int RentalDetails::getId()
{
    return m_rentedVehical->getId();
}

string RentalDetails::getBrand()
{
    return m_rentedVehical->getBrand();
}

string RentalDetails::getModel()
{
    return m_rentedVehical->getModel();
}
string RentalDetails::getVehicalNumber()
{
    return m_rentedVehical->getVehicalNumber();
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

void RentalDetails::setStatus(string status)
{
    m_rentedVehical->setStatus(status);
}

void RentalDetails::setBalance(float balance)
{
    m_payment->setBalance(balance);
}

void RentalDetails::setAmount(float amount)
{
    m_payment->setAmount(amount);
}
