#include "Vehicle.h"
#include <string.h>
#include <iostream>
using namespace std;

Vehicle::Vehicle(){
   vehicle_count++;//increment
}
Vehicle::~Vehicle(){
    vehicle_count--;
}
void Vehicle::setRegistrationNumber(char*reg_no_in){
    strncpy(registration_number,reg_no_in,9);
    registration_number[9]='\0';
}
char*Vehicle::getRegistrationNumber(){
    return registration_number;
}
int Vehicle::getVehicleCount(){
    return vehicle_count;
}
Vehicle& Vehicle::operator = (const Vehicle&obj){
    if(this!=&obj){
        strncpy(registration_number,obj.registration_number,9);
        registration_number[9]='\0';
    }
    return *this;
}
//int Vehicle::vehicle_count=0;// Defining Static Variable 
