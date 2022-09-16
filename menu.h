#ifndef MENU_H
#define MENU_H
#include "vehicle.h"
#include "driver.h"
#include "customer.h"

class Menu
{
    public:
        Menu();
        char menuOptions();
        void driverMenu ();
        void vehicleMenu ();
        //char getChoice(){return toupper(choice);};

    protected:

    private:
        char option;
        char choice;
};

#endif // MENU_H
