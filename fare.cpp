#include "fare.h"
#include "vehicle.h"
#include "driver.h"
#include "customer.h"
#include "globals.h"

#include <iostream>

using namespace std;

Fare::Fare()
{

}

void Fare::getDistance(){
    cout << "\n\tEnter number of kilometres: ";
    cin >> noOfKilometresPerFare;
   // fareCost = (noOfKilometresPerFare * 6.5) + 5;
   // cout << "\n\tTaxi fare: E" << fareCost << "\n";
}

void Fare::calculateFare(){
    fareCost = (noOfKilometresPerFare * 6.5) + 5;
}


void Fare::setDriverAndVehicle(unsigned short d, unsigned short v){
    driverCode = d;
    vehicleCode = v;
}

void Fare::printFare(unsigned short driver, unsigned short vehicle){

    drivers[driver].printDriverDetails ();
    vehicles [vehicle].printVehicleDetails ();
    /*printDriverDetails();
    printVehicleDetails();
    printCustomerDetails();*/
    cout << "\n\tNumber of KM: " << noOfKilometresPerFare << "\n";
    cout << "\n\tTaxi fare: E" << fareCost << "\n";
}


/*void Fare::getVehicleAndDriver(){
    cout << "\n\tEnter driver's IdNumber to select driver: ";
    cin >> driverCode;

    if(getIdNumber() == driverCode)
        //getDriverAvailable() = false;
        //driverAvailable = false;
        //setDriverAvailable() = false;
    else
        cout << "\n\tError in valid code";

    cout << "\n\tEnter vehicle registration number to select vehicle: ";
    cin >> vehicleCode;

    if(getRegNumber() == vehicleCode)
        //getVehicleAvailable() = false;
        //vehicleAvailable = false;

    else
        cout << "\n\tError in valid code";
}*/

void updateKilometres(){

}
