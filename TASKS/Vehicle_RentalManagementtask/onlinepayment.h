#ifndef ONLINEPAYMENT_H
#define ONLINEPAYMENT_H
#include <iostream>
using namespace std;
#include "paymentmode.h"

class OnlinePayment:public PaymentMode
{
public:
    OnlinePayment();
    ~OnlinePayment();
    OnlinePayment(string UpiId, float amount, float balance,string paymentStatus, int transactionId);

    string getUPIid();
    int getTransactionId();
    float getAmount();
    float getBalance();
    string getPaymentStatus();

    void setBalance(float balance);
    void setAmount(float amount) ;
};

#endif // ONLINEPAYMENT_H
