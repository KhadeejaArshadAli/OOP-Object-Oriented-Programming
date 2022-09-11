#include <iostream>
#include "Vehicle.h"
using namespace std;

int Vehicle::vehicle_count=0;// Defining Static Variable 
int main(){

    cout<<"count="<<Vehicle::getVehicleCount()<<endl;
    Vehicle Vehicle1;
    cout<<"count="<<Vehicle1.getVehicleCount()<<endl;
    cout<<"count="<<Vehicle::getVehicleCount()<<endl;
    char a[] = "Register";                            // creating an character array of 9 character
    Vehicle1.setRegistrationNumber(a);                // invoking setter
    Vehicle1.getRegistrationNumber();                 // invoking getter
    cout << Vehicle1.getRegistrationNumber() << endl; // displaying the result

    Vehicle veh[2]={Vehicle("BMW"),Vehicle("CIVIC")};
    veh[1].display();



    Vehicle vehicles[10];
    int user_input;
    int array_index=0;
    while(user_input!=3)
    {
        cout<<"Enter1 for arrival,2 for departure,3 to quit ";
        cin>>user_input;
        if(user_input==1 && array_index<10){
            vehicles[array_index] = Vehicle();
            //vehicles[array_index] = new Vehicle;
            array_index++;
        }
        if (user_input==2 && array_index>0)
        {
            array_index--;
            delete &vehicles[array_index];
            //delete vehicles -> [array_index]; ERROR

        }
        cout<<"count="<<Vehicle::getVehicleCount()<<endl;
        
    }
}