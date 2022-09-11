#include <iostream>
using namespace std;
#include <map>
#include <string>
#include "trafficlight.h"

trafficlight external_light;
    
int main(){

    external_light.changecolour();
    for (int i=0;i<2;i++){
        cout<<"times the loop has executed  "<<i<<endl;


        trafficlight automatic_light;
        automatic_light.changecolour();


       static trafficlight static_light;
        static_light.changecolour();

        cout<<"automatic light is ";
        automatic_light.showcolour();

        cout<<"static light is ";
        static_light.showcolour();
    }
    cout<<"external light is ";
    external_light.showcolour();
    return 0;


}
