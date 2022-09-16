#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle
{
    public:
        Vehicle(){};
        Vehicle(string, string, string, string, float, unsigned short, char);
        void printVehicleDetails();
        string getRegNumber(){return regNumber;};
        //bool getVehicleAvailable(){return vehicleAvailable;};
        void setVehicleAvailable(bool){vehicleAvailable = false;};

    protected:

    private:
        string vehicleType, regNumber, make, model;
        float kilometresDriven;
        unsigned short capacity;
        char wheelchair;
        bool vehicleAvailable;

};

#endif // VEHICLE_H
