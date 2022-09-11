#include<string.h>
#include<iostream>
using namespace std;
class Vehicle{
    private:
    char registration_number[10];
    static int vehicle_count;
    string name;
    public:
    Vehicle();
    ~Vehicle();
     Vehicle(string name);
    void setRegistrationNumber(char*reg_no_in);
    char*getRegistrationNumber();
    static int getVehicleCount();
    Vehicle& operator = (const Vehicle&obj);
    void display();
    
};