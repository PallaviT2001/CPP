#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H
#include <iostream>
#include "RentalCarDetails.h"
#include "RentalBikeDetails.h"
#include "paymentmode.h"

using namespace std;

class RentalDetails
{
public:

    RentalDetails();
    ~RentalDetails();

     RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType, string paymentType, RentalVehicalDetails *rentedVehical, PaymentMode *payment);

    string getName();
    string getMobile();
    int getAge();
    int getBookingId();
    string getVehicalType();
    string getPaymentType();
    string getUPIid();
    float getAmount();
    float getBalance();
    string getPaymentStatus();
    int getTransactionId();


    int getId();
    string getBrand();
    string getModel();
    string getVehicalNumber();
    float getCost();
    string getStatus();
    int getDuration();


    void setStatus(string status);
    void setBalance(float balance);
    void setAmount(float amount);
private:
    string m_name;
    string m_mobile;
    int m_age;
    int m_bookingId;
    string m_vehicalType;
    string m_paymentType;
    RentalVehicalDetails *m_rentedVehical;
    PaymentMode *m_payment;
};


#endif // RENTALDETAILS_H
