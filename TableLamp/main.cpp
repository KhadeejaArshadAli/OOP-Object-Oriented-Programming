#include "TableLamp.h"
#include <iostream>
#include <string>
int main(void){
    TableLamp myTL;
    
    myTL.pressswitch(TableLamp::OFF);
    cout << myTL<<endl;
    AdjTableLamp yourLamp;
    cout<<yourLamp<<endl;
    yourLamp.pressswitch(TableLamp::OFF);
    yourLamp.dim(AdjTableLamp::OFF);
    yourLamp.print(cout);
    AdjTableLamp*aLamp=new AdjTableLamp();
    cout<<*aLamp<<endl;
    aLamp->print(cout);
    aLamp->pressswitch(TableLamp::OFF);
    aLamp->dim(AdjTableLamp::OFF);
    aLamp->print(cout);



};