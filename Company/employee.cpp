#include <iostream>
#include "company.h"
using namespace std;


employee :: employee (office *o){
    myoffice = o;
    cout<<"employee :: employee()\n";
}

employee :: ~employee(){
    cout<<"employee :: ~employee()\n";
}
