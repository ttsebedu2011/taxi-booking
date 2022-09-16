#ifndef DRIVER_H
#define DRIVER_H
#include "person.h"

class Driver: virtual public Person{

    public:
        Driver(){};
        Driver(string, string, string, string, float, string, string);
        void printDriverDetails();
        string getIdNumber(){return idNumber;};
        //bool getDriverAvailable(){return driverAvailable;};
        void setDriverAvailable(bool){driverAvailable = false;};

    protected:

    private:
        string idNumber, address, startDate, licenseType, fare;
        float amountOfMileage;
        bool driverAvailable;
};

#endif // DRIVER_H
