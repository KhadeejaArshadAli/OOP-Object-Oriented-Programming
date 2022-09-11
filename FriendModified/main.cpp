#include "subject.h"
#include<iostream>
int main(){

   
   cout<<"provide input"<<endl;
   int a;
   int b;
   cin>>a;
   cin>>b;
   subject summer(a,b);
   cout<<"output is"<<endl;
   cout<<summer;
   return 0;
   
};