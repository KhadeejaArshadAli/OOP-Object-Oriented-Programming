#include "Blood.h"
#include<iostream>
using namespace std;


RBC::RBC(float numberofRBC){ //Parametrized Constructor
        this->numberofRBC=numberofRBC;
}
        
    
   

void RBC::Compare(){//To compare individual components
        if(numberofRBC<4.2){
            cout<<"The number of RBCs are lower than normal"<<endl;
        }
        else if (numberofRBC>6.1)
        {
           cout<<"The number of RBCs are higher than normal"<<endl;  
        }
        else{
            cout<<"The number of RBcs within the normal range"<<endl;
        }
    }
    
RBC::~RBC(){//Destructor

}
