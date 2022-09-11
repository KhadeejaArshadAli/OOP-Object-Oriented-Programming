#include <map>
#include <string>
#include <iostream>
using namespace std;

    // mapping[1]="red";
    // mapping[2]="green";
class trafficlight{
    private:
    int colour;
     
    map<int, string> mapping;
    public:
    trafficlight();
    void changecolour();
    void showcolour();
    

};
