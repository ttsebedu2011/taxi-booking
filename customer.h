#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "person.h"
#include <iostream>

using namespace std;

const unsigned short numCustomers = 6;

class Customer: virtual public Person
{
    public:
        Customer();
        void getCustomerDetails();
        void printCustomerDetails();

    protected:

    private:
        string source, destination;
        unsigned short numberOfPeople;
        char customerWheelchair;
        string customers[numCustomers];
        //bool option = true;
        //bool invalid;
        //char answer;

};

#endif // CUSTOMER_H
