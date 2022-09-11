#include <iostream>
#include "thing.h"
using namespace std;
    thing::thing(){
        cout<<"Constructing new thing using default constructor"<<endl;
    }

    thing :: thing(int value){
        x=&value;
        cout<<"Constructing new thing with value "<<value<<endl;
        
        
    
    }
    

    void thing :: set(int value){
        x=&value;
    }
    

    int thing :: get(){
        return *x;
    }

    thing :: ~thing(){
    cout<<"delete thing with value"<<*x<<endl;
    }
