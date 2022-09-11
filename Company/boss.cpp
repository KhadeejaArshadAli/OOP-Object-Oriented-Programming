#include <iostream>
#include "company.h"
using namespace std;


boss :: boss (office *o) : employee(o){
    mypc.turn_on();
        cout << "boss :: turn_on()\n";
    
    cout<<"boss :: boss()\n";
}

boss :: ~boss(){
    cout<<"boss :: ~boss()\n";
}

