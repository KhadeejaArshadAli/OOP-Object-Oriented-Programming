#include <iostream>
#include "thing.h"
using namespace std;


    void do2(int level){
        cout<<"Enter do2 with level="<<level<<endl;
        thing TT(level);
    }

    void do1(int level){
        cout<<"Enter do1 with level="<<level<<endl;
        thing TTT(level);
        do2(level+1);
    }
    void Do(thing Tcopy,int level){
       Tcopy.set(level);
    }


int main(){
    //thing T(1);
    //cout<<endl;

    //do2(2);
    //cout<<endl;

    //do1(3);
    //cout<<endl;

    //do2(5);
    //cout<<endl;

    //return 0;
    thing T(1);
    thing TT=T;
    cout<<"*(TT.x)=="<<TT.get()<<endl;
    T.set(2);
    cout<<"*(T.x)=="<<T.get()<<endl;
    cout<<"*(TT.x)=="<<TT.get()<<endl;
    Do(T,3);
    cout<<"After calling Do(T,3)*(T.x)=="<<T.get()<<endl;
};