#include "TableLamp.h"
#include <iostream>
AdjTableLamp::AdjTableLamp(){

    brightness=1.0;


};
void AdjTableLamp::dim(state State){
    
    if (State==ON)
    {
       brightness-0.1;

    cout<<"The brightness is adjusted by 0.1: "<<brightness-0.1<<endl;
   }
   if (State==OFF)
   {
       cout<<"The Lamp is not turned ON"<<endl;
   }
   
};

void AdjTableLamp::print(ostream& o){

};