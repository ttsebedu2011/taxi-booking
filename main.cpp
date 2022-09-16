#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include "customer.h"
#include "fare.h"
#include "menu.h"
#include "globals.h"

using namespace std;

char option;
char answer;
bool invalid;
bool selectOption = true;
bool activeDriver;
bool activeVehicle;
unsigned short driverNum, vehicleNum;

//unsigned short counts;
//char choice;


//void activeDriverVehicle(unsigned short theArray[], unsigned short sizeOfArray);
void printDrivers ();
void printVehicles ();
void allocateFare ();
void printActiveFares ();
Driver drivers[numDrivers]= {Driver ("1234567A", "Tom Daly", "14 Green St., Cork", "087-6543210", 23231, "12/08/2008", "B"),
                             Driver ("2345678B", "Anne O'Brien", "Beach View, Kinsale", "086-5432109", 11980, "09/12/2011", "D"),
                             Driver ("3456789B", "James Twomey", "14, French St., Cork", "085-4321098", 18414, "14/11/2010", "D1"),
                             Driver ("4567890C", "Mary O'Neill", "23 Castle Road, Youghal", "089-8765432", 12669, "11/02/2014", "B"),
                             Driver ("5678901D", "Brendan Brown", "98 Nuns Walk, Cork", "083-2109876", 23864, "01/04/2007", "D"),
                             Driver ("6789012E", "Vincent Coy", "Green Valley, Cobh", "087-8901234", 34196, "03/04/1998", "D1")};

Vehicle vehicles [numVehicles] = {Vehicle ("Taxi", "12 C 4956", "Hyundai", "i30 Tourer", 65172, 4, 'Y'),
                                  Vehicle ("Taxi", "14 C 89365", "Ford", "Mondeo", 33892, 4, 'Y'),
                                  Vehicle ("Taxi", "15 C 46046", "VW", "Passat", 23897, 4, 'Y'),
                                  Vehicle ("Taxi", "14 C 38492", "Nissan", "Primera", 29418, 4, 'Y'),
                                  Vehicle ("Taxi", "10 C 99393", "Skoda", "Octavia", 89678, 4, 'Y'),
                                  Vehicle ("Taxi", "15 C 2379", "Seat", "Toledo", 12812, 4, 'Y'),
                                  Vehicle ("Bus", "10 C 37209", "Ace", "Cougar", 28786, 48, 'Y'),
                                  Vehicle ("Bus", "11 C 882", "Daimler", "Fleetline", 68893, 48, 'N'),
                                  Vehicle ("Minibus", "14 C 23908", "Ford", "Transit", 18827, 16, 'Y'),
                                  Vehicle ("Minibus", "10 C 831", "Fiat", "Ducato", 32986, 16, 'Y'),
                                  Vehicle ("Minibus", "13 C 82677", "Mercedes-Benz", "Vario", 18567, 20, 'N'),};

Fare activeFares[6];
Fare fares;
Customer customer;

int main()
{

    Customer customers;

    Menu menu;

        do {
            option = menu.menuOptions();
            switch (option) {
                case '1': printDrivers (); break;
                case '2': printVehicles (); break;
                case '3': printActiveFares (); break; // Add option to log return from fare.
                case '4': allocateFare (); break;
                case '5': printActiveFares ();
                }
        }
        while (option != 6);
        return 0;
    }

void printDrivers () {
    cout << "\n\t\t\t\tAVAILABLE DRIVERS\n";
    for (unsigned short i = 0; i <= numDrivers - 1; i++) {
         cout << "\n\t" << i+1;
         drivers[i].printDriverDetails();
    }
}

void printVehicles () {
    cout << "\n\t\t\t\tAVAILABLE VEHICLES\n";
    for (unsigned short i = 0; i <= numVehicles - 1; i++) {
        cout << "\n\t" << i+1;
        vehicles[i].printVehicleDetails();
        }
}

void allocateFare () {
    customer.getCustomerDetails ();
    printDrivers ();
    cout << "\n\tEnter suitable drive: ";
    cin >> driverNum;
    printVehicles ();
    cout << "\n\tEnter suitable vehicle: ";
    cin >> vehicleNum;
    fares.setDriverAndVehicle(driverNum, vehicleNum);
    }

void printActiveFares () {
    //drivers[driverNum - 1].setDriverAvailable(activeDriver);
    //vehicles[vehicleNum - 1].setVehicleAvailable(activeVehicle);
    fares.printFare (fares.getDriverNum () - 1,fares.getVehicleNum () - 1);
   // fares.setDriverAndVehicle(activeDriver);
}




