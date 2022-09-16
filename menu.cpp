#include "menu.h"
#include "driver.h"
#include "vehicle.h"
#include "customer.h"

#include <iostream>

using namespace std;

Menu::Menu()
{
    //ctor
}

char Menu::menuOptions(){
  // do {
        cout << "\n\t1. Display all details on all vehicles (including whether the vehicle is free or not).\n"
             << "\t2. Display all details on all drivers (including whether the driver is free or not).\n"
             << "\t3. Display all active fares.• Log return from fare.\n"
             << "\t4. Allocate fare.\n"
             << "\t5. Print daily report.\n"
             << "\t6. Exit."
             << "\n\n\t> ";

        cin >> option;
        return option;
  }
        /*cout << "\n\tSelect (D) for Driver Menu or (V) Vehicle Menu  or (E) to Exit : ";
        cin >> option;
        option = toupper (option);
        switch (option) {
        case 'D': printDriverDetails(); break;
        case 'V': printVehicleDetails(); break;
        case 'E': cout << "\n\tThank you for using this program.\n"; break;
        default: cerr << "\n\tInvalid option.\n";
        }
    }
    while (option != 'E');
}
/*
void Menu::driverMenu() {

    printDriverDetails();

      switch (user1.getChoice ()) {
        case 'L': user1.login ();
                  break;
        case 'C': user1.changePassword ();
    }
    user1.printDetails ();
}

void Menu::vehicleMenu() {

    printVehicleDetails();

    switch (admin.getChoice ()) {
        case 'L': admin.login ();
                  break;
        case 'C': admin.changePassword (); break;
        case 'P': admin.changeUserPassword (user1); break;
        case 'D': admin.disable (user1); break;
        case 'V': admin.viewDailyLog (); break;
    }
    admin.printDetails ();
}*/
