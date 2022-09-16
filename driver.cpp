#include "driver.h"
#include <iostream>

using namespace std;

Driver::Driver(string id, string n, string a, string phone, float km, string date, string lType)
{
    idNumber = id;
    name = n;
    address = a;
    telephoneNumber = phone;
    amountOfMileage = km;
    startDate = date;
    licenseType = lType;
    driverAvailable = true;
}

void Driver::printDriverDetails(){


    cout << "\n\t" << idNumber << "\t" << name << "\t" << address
    << "\t" << telephoneNumber << "\t" << amountOfMileage << "\t"
    << startDate << "\t" << licenseType << "\t" << driverAvailable << "\n";

}

/*void Gymnast::printDetails () {
// Print the gymnasts name and scores.

    cout << "\n\tName: " << name << "\t";
    for (unsigned short i = 0; i <= numScores - 1; i++)
        cout << scores [i] << "\t";*/


/*Gymnast::Gymnast(string n, float s1, float s2, float s3, float s4, float s5)
{
    name = n;
    scores [0] = s1;
    scores [1] = s2;
    scores [2] = s3;
    scores [3] = s4;
    scores [4] = s5;
}*/
