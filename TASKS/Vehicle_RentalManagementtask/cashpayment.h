#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include <iostream>
using namespace std;
#include "paymentmode.h"

class CashPayment:public PaymentMode
{
public:
    CashPayment();
    ~CashPayment();
    //CashPayment(CashPayment &cash);
    CashPayment(string UpiId, float amount, float balance,string paymentStatus, int transactionId);

    string getUPIid();
    int getTransactionId();
    float getAmount();
    float getBalance();
    string getPaymentStatus();

    void setBalance(float balance);
    void setAmount(float amount);
};

#endif // CASHPAYMENT_H
