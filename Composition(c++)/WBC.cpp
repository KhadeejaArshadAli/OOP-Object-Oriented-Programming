#include "Blood.h"
#include <iostream>
using namespace std;
WBC::WBC(int numberofWBC){
        this->numberofWBC=numberofWBC;
}
        

  

void WBC::Compare(){// to compare the individual components
        if(numberofWBC<5){
            cout<<"The number of WBCs are lower than normal"<<endl;
        }
        else if (numberofWBC>10)
        {
           cout<<"The number of  WBCs are higher than normal"<<endl;  
        }
        else{
            cout<<"The number of WBCs within the normal range"<<endl;
        }
    }
WBC::~WBC(){// Destructor

}
