#include <iostream>
#include "Vehicle.h"
using namespace std;

int Vehicle::vehicle_count = 0; // Defining Static Variable
int main()
{

    cout << "count=" << Vehicle::getVehicleCount() << endl;
    Vehicle Vehicle1;
    cout << "count=" << Vehicle1.getVehicleCount() << endl;
    cout << "count=" << Vehicle::getVehicleCount() << endl;
    char a[] = "Register";                            // creating an character array of 9 character
    Vehicle1.setRegistrationNumber(a);                // invoking setter
    Vehicle1.getRegistrationNumber();                 // invoking getter
    cout << Vehicle1.getRegistrationNumber() << endl; // displaying the result
    // It is a Dynamic Array and it is allocated on heap.
    // Size of dynamic arrays is determined at run-time.
    Vehicle *vehicles = new Vehicle[10];
    int user_input;
    int array_index = 0;
    while (user_input != 3)
    {
        cout << "Enter1 for arrival,2 for departure,3 to quit ";
        cin >> user_input;
        if (user_input == 1 && array_index < 10)
        {
            vehicles[array_index] = Vehicle();
            array_index++;
        }
        if (user_input == 2 && array_index > 0)
        {
            array_index--;
            delete &vehicles[array_index];
            // You need to manually delete dynamic arrays after you no longer need them.
        }
        cout << "count=" << Vehicle::getVehicleCount() << endl;
    }
}