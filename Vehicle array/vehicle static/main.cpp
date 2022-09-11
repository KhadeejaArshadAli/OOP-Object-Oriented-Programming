#include <iostream>
#include "Vehicle.h"
using namespace std;

int Vehicle::vehicle_count = 0; // Defining Static Variable
int main()
{

    cout << "count=" << Vehicle::getVehicleCount() << endl;
    Vehicle Vehicle1;
    cout << "Count=" << Vehicle1.getVehicleCount() << endl;
    cout << "count=" << Vehicle::getVehicleCount() << endl;
    char a[] = "Register";                            // creating an character array of 9 character
    Vehicle1.setRegistrationNumber(a);                // invoking setter
    Vehicle1.getRegistrationNumber();                 // invoking getter
    cout << Vehicle1.getRegistrationNumber() << endl; // displaying the result

    // It is a Static Array and they are fixed in size. 
    // Static memory is allocated on stack only.
    // Static array's size is determined at compile-time.

    Vehicle vehicles[10];
    int user_input;
    int array_index = 0;
    while (user_input != 3)
    {
        cout << "Enter1 for arrival,2 for departure,3 to quit ";
        cin >> user_input;
        if (user_input == 1 && array_index < 10)
        {
            vehicles[array_index] = Vehicle();
            // vehicles[array_index] = new Vehicle;
            array_index++;
        }
        if (user_input == 2 && array_index > 0)
        {
            array_index--;
            delete &vehicles[array_index];
            // there is no need to delete static array, they are deleted automatically after going out of scope.
        }
        cout << "count=" << Vehicle::getVehicleCount() << endl;
    }
}