#include "customer.h"
#include "person.h"

#include <iostream>

using namespace std;

Customer::Customer()
{
    //ctor
}

void Customer::getCustomerDetails(){
    cout << "\n\tEnter customer name: ";
    cin >> name;
    cout << "\n\tEnter telephone number: ";
    cin >> telephoneNumber;
    cout << "\n\tEnter source: ";
    cin >> source;
    cout << "\n\tEnter destination: ";
    cin >> destination;
    cout << "\n\tEnter number of passengers: ";
    cin >> numberOfPeople;
    cout << "\n\tIs there a passenger on wheelchair: ";
    cin >> customerWheelchair;
}
/*    do{ //loop to check if the input is valid

        cout << "\n\tIs there a passenger on wheelchair Y/N: ";
        cin >> customerWheelchair;

        if(toupper(answer) == 'Y')
            invalid = false;

        else if(toupper(answer) == 'N')
            invalid = false;

        else{
            cout << "\n\tError!!! Please enter Y/N\n";
            invalid = true;
            }
        }while(invalid = true);
}*/

void Customer::printCustomerDetails(){
    cout << "\n\tName: " << name
         << "\n\tTelephone number: " << telephoneNumber
         << "\n\tSource: " << source
         << "\n\tDestination: " << destination
         << "\n\tNumber of passengers: " << numberOfPeople
         << "\n\tWheelchair passenger: " << customerWheelchair << "\n";
}
