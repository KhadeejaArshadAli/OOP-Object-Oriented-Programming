#include "Blood.h"
#include <iostream>
using namespace std;

     
    Blood::Blood(){ //Null Constructor

    }
    Blood::Blood(float numberofRBC,int numberofWBC,int numberofPlt){// Prametrized Constructor
        this->numberofRBC=numberofRBC;
        this->numberofWBC=numberofWBC;
        this->numberofPlt=numberofPlt;
    }
    Blood::Blood(const Blood &object){// Copied Constructor
       numberofRBC=object.numberofRBC;
       numberofWBC=object.numberofWBC;
       numberofPlt=object.numberofPlt;

    }
    void Blood::display(){ //Display function
            cout<<"The number of RBC in sample:"<<numberofRBC<<endl<<"The number of WBC in sample:"<<numberofWBC<<endl<<"The number of Plt in sample:"<<numberofPlt<<endl;
        }
    void Blood:: Compare(){// To Compare the whole blood sample
       if ((4.2>=numberofRBC && numberofRBC<=6.1) && (5>=numberofWBC && numberofWBC<=10)&& (150>=numberofPlt && numberofPlt<=450)){
        cout<<"The sample has normal range of all components"<<endl;

    }
    else{
        cout<<"The sample has deficiency or excess of either one or more  components"<<endl;
    }
        
        


}
Blood::~Blood(){// Destructor

}


