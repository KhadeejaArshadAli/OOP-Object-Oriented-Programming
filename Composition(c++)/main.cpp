#include "Blood.h"
#include<iostream>
using namespace std;
int main(){
    Blood sample1(4.8,3,458);
    sample1.display();
    sample1.Compare();
    Blood sample2=sample1;
    sample2.display();
    RBC*RBCsample1=new RBC(4.8);
    RBCsample1->Compare();
    WBC*WBCsample1=new WBC(3);
   WBCsample1->Compare();
   Plt*Pltsample1=new Plt(458);
    Pltsample1->Compare();

};
