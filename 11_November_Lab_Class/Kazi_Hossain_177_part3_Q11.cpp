#include<bits/stdc++.h>
using namespace std;

class Payment
{
public:
    virtual void processPayment() = 0;
};

class CreditCardPayment : public Payment
{
public:
    void processPayment()
    {
        cout<<"Payment proccessed using Credit Card"<<endl;
    }
};

class MobileBankingPayment : public Payment
{
public:
    void processPayment()
    {
        cout<<"Payment proccessed using Mobile Banking"<<endl;
    }
};

int main()
{
    Payment *p;

    p = new CreditCardPayment();
    p->processPayment();
    delete p;

    p = new MobileBankingPayment();
    p->processPayment();
    delete p;

    return 0;
}