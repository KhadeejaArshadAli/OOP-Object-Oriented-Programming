#include <iostream>
using namespace std;
#include "trafficlight.h"
trafficlight::trafficlight(){
    mapping[1]="red";
    mapping[2]="green";
    // mapping[colour]=mapping[1];
    colour=1;


}
void trafficlight::changecolour(){
    if(colour==1){
         colour=2;
         mapping.at(2);
    }
    else
    {  colour=1;
       mapping.at(1);
    }


}
void trafficlight::showcolour(){
    if (colour==1){
        cout<<mapping.at(1)<<endl;
    }
    else{
        cout<<mapping.at(2)<<endl;
    }

}
