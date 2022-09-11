#include <iostream>
#include "company.h"
using namespace std;

int main(){

    office* poff=new office();

 boss *pboss = new boss(poff);

    delete pboss;

    employee *pemployee = new boss(poff);

    delete pemployee;

}
//THANK ME LATER MISTER :)