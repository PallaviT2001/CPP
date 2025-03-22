#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H
#include <iostream>
#include "car.h"
#include "bike.h"

using namespace std;

class RentalDetails
{

public:

    RentalDetails();
    RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType, string paymentMode, string UpiId,int transactionId,string paymentStatus, Vehical *rentedVehical);
    ~RentalDetails();

    string getName();
    string getMobile();
    int getAge();
    int getBookingId();
    string getVehicalType();
    string getPaymentMode();
    string getUPIid();
    int getTransactionId();
    string getPaymentStatus();

    int getId();
    string getModel();
    float getCost();
    string getStatus();
    int getDuration();

private:
    string m_name;
    string m_mobile;
    int m_age;
    int m_bookingId;
    string m_vehicalType;
    string m_paymentMode;
    string m_UPI;
    int m_transactionId;
    string m_paymentStatus;
    Vehical *m_rentedVehical;
};


#endif // RENTALDETAILS_H
