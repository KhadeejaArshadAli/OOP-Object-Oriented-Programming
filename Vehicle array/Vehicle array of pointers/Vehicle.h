#include<string.h>
#include<iostream>
class Vehicle{
    private:
    char registration_number[10];
    static int vehicle_count;
    public:
    Vehicle();
    ~Vehicle();
    void setRegistrationNumber(char*reg_no_in);
    char*getRegistrationNumber();
    static int getVehicleCount();

};