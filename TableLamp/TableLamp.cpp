#include "TableLamp.h"
#include <iostream>
TableLamp::TableLamp(){

};


void TableLamp::pressswitch(state State){

  
   
  if (State==ON){
     cout<<"the Lamp is On"<<endl;
  }
  if (State==OFF){

      cout<<"The Lamp is Off"<<endl;
  }
};

ostream&operator <<(ostream &o,const TableLamp &t){
    
   return o;
};  
