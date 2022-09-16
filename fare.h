#ifndef FARE_H
#define FARE_H
#include "vehicle.h"
#include "driver.h"
#include "customer.h"


class Fare: public Vehicle, public Driver, public Customer
{
    public:
        Fare();
        void getDistance();
        void calculateFare();
        void activeVehicles();
        void dailyLog();
        void dailyReport();
        void printFare(unsigned short, unsigned short);
        void setDriverAndVehicle(unsigned short, unsigned short);
        unsigned short getVehicleNum () {return vehicleCode;}
        unsigned short getDriverNum () {return driverCode;}
    protected:

    private:
        unsigned short driverCode, vehicleCode, customerCode;
        float fareCost, revenueGenerated, noOfKilometresPerFare, totalNoOfKilometres;
        bool chosen = false;

};

#endif // FARE_H
