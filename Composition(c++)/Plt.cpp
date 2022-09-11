#include "Blood.h"
#include <iostream>
using namespace std;

Plt::Plt(int numberofPlt){//Parametrized Constructor
        this->numberofPlt=numberofPlt;
}
        

void Plt:: Compare(){ //To compare the individual components
        if(numberofPlt<150){
            cout<<"The number of  Plateles are lower than normal"<<endl;
        }
        else if (numberofPlt>450)
        {
           cout<<"The number Platelets are higher than normal"<<endl;  
        }
        else{
            cout<<"The number of Platelets within the normal range"<<endl;
        }
    }
  

      
Plt::~Plt(){// Destructor

}

