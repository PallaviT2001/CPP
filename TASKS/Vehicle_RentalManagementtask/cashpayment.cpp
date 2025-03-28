#include "cashpayment.h"

CashPayment::CashPayment()
{
    cout<<"Cash payment constructor called"<<endl;
}

CashPayment::~CashPayment()
{
    cout<<"Cash Payment destructor called"<<endl;
}


CashPayment::CashPayment(string UpiId,  float amount, float balance, string paymentStatus, int transactionId)
{
    cout<<"Cash Parameterized Constructor Called"<<endl;
    m_UPIid = UpiId;
    m_amount = amount;
    m_balance = balance;
    m_paymentStatus = paymentStatus;
    m_transactionId = transactionId;
}

string CashPayment::getUPIid()
{
    return m_UPIid;
}

int CashPayment::getTransactionId()
{
    return m_transactionId;
}

float CashPayment::getAmount()
{
    return m_amount;
}
float CashPayment::getBalance()
{
    return m_balance;
}

string CashPayment::getPaymentStatus()
{
    return m_paymentStatus;
}

void CashPayment::setBalance(float balance)
{
    m_balance = balance;
}

void CashPayment::setAmount(float amount)
{
    m_amount = amount;
}
