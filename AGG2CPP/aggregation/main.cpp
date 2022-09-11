#include "library.h"

#include<iostream>
#include<string>
using namespace std;
int main(){
    
    student s1("sara","kubs",2021);
    library l2("ubit",&s1,2);
    l2.printdetails();

   
    

};

