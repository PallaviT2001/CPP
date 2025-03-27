#ifndef PAYMENTMODE_H
#define PAYMENTMODE_H
#include <iostream>
using namespace std;

class PaymentMode
{
public:
    PaymentMode();
    ~PaymentMode();
    //PaymentMode(PaymentMode &payment);



    virtual float getAmount() = 0;
    virtual float getBalance() = 0 ;
    virtual string getPaymentStatus() = 0;
    virtual void setBalance(float balance) = 0;
    virtual void setAmount(float amount) = 0 ;
    virtual string getUPIid() =0 ;
    virtual  int getTransactionId() = 0;

protected:

    string m_UPIid;
    float m_amount;
    float m_balance;
    string m_paymentStatus;
    int m_transactionId;
};

#endif // PAYMENTMODE_H
