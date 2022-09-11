#include <iostream>
#include "company.h"
using namespace std;

pc :: pc (){
    cout << "pc :: pc()\n";
};
void pc :: turn_on(){
    cout << "pc :: turn_on()\n";
};
void pc ::turn_off(){
    cout << "pc :: turn_off()\n";
};

pc :: ~pc(){
    cout << "pc :: ~pc()\n";
}