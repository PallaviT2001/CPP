#include "OnlinePayment.h"

OnlinePayment::OnlinePayment()
{
    cout<<"Online Constructor Called"<<endl;
}

OnlinePayment::~OnlinePayment()
{
    cout<<"Online Destructor Called"<<endl;
}

/*OnlinePayment::OnlinePayment(OnlinePayment &online)
{
    cout<<"online payment copy constructor called"<<endl;
}*/

OnlinePayment::OnlinePayment(string UpiId,  float amount, float balance, string paymentStatus, int transactionId)
{
    cout<<"Online Parameterized Constructor Called"<<endl;

    m_UPIid = UpiId;
    m_amount = amount;
    m_balance = balance;
    m_paymentStatus = paymentStatus;
    m_transactionId =transactionId;
}

string OnlinePayment::getUPIid()
{
    return m_UPIid;
}

float OnlinePayment::getAmount()
{
    return m_amount;
}

float OnlinePayment::getBalance()
{
    return m_balance;
}
string OnlinePayment::getPaymentStatus()
{
    return m_paymentStatus;
}

void OnlinePayment::setBalance(float balance)
{
    m_balance = balance;
}

void OnlinePayment::setAmount(float amount)
{
    m_amount = amount;
}
int OnlinePayment::getTransactionId()
{
    return m_transactionId;
}
