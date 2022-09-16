#include "vehicle.h"

Vehicle::Vehicle(string t, string r, string m, string mo, float kmDriven, unsigned short c, char w)
{
      vehicleType = t;
      regNumber = r;
      make = m;
      model = mo;
      kilometresDriven = kmDriven;
      capacity = c;
      wheelchair = w;
      vehicleAvailable = true;
}

void Vehicle::printVehicleDetails(){

    cout << "\n\t" << vehicleType << "\t" << regNumber << "\t" << make << "\t\t" << model << "\t\t"
         << kilometresDriven << "\t\t" << capacity << "\t\t" << wheelchair << "\t\t" << vehicleAvailable << "\n";
}
