//payment.cpp
//
//This program introduces inheritance through a problem of
//creating two types of Payments, Cash and Credit. The 
//PaymentDetails method outputs in English a sentece that describes 
//the payment. 

#include <iostream>
#include <string>

using namespace std; 

// Base class to store a payment amount and get a description 

class Payment
{
public:
    Payment();
    Payment(float amount);
    void setPayment(float amount);
    float getPayment();
    void paymentDetails();
private:
    float amount;
};

Payment::Payment() : amount(0)
{}

Payment::Payment(float amt):amount(amt)
{}

void Payment::setPayment(float amt)
{
    amount =amt;
}

float Payment::getPayment()
{
    return amount;
}

void Payment::paymentDetails()
{
    cout << "The payment amount is "<< amount <<endl;
}

class CashPayment: public Payment{
public:
    CashPayment():Payment(){}
    CashPayment(float amount):Payment(amount){}
    void paymentDetails(){
        cout <<"The cash payment amount is "<< getPayment()<<endl;
    }
};

class CreditCardPayment: public Payment {
private:
    string cardName;
    string expirationDate;
    string cardNumber;
public:
    CreditCardPayment(float amount, string name, string expire, string number)
    : Payment(amount), cardName(name), expirationDate(expire), cardNumber(number){}
    void paymentDetails(){
        Payment::paymentDetails();
        cout << "The name on the card is: "<<cardName << endl;
        cout << "The expiration date is: " <<expirationDate << endl;
        cout <<"The credit card number is: "<< cardNumber << endl;
    }
};

int main()
{
    CashPayment cash1(50.5), cash2(20.45);
    CreditCardPayment credit1(10.5, "Fred", "10/5/2010", "123456789");
    CreditCardPayment credit2(100, "Barney", "11/15/2009", "987654321");
    cout << "Cash 1 details:" << endl;
    cash1.paymentDetails();
    cout << endl;
    cout << "Cash 2 details:" << endl;
    cash2.paymentDetails();
    cout << endl;
    cout << "Credit 1 details:" << endl;
    credit1.paymentDetails();
    cout << endl;
    cout << "Credit 2 details:" << endl;
    credit2.paymentDetails();
    cout << endl;
    return 0;
}
