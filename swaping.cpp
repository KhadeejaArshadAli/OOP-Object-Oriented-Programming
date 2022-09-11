#include<iostream>
using namespace std;
//program to swap 2 numbers using pass by pointer
void swap(int*x,int*y){
    int z=*x;
    *x=*y;
    *y=z;
}

int main(){
    int x=6 ,y=7;
    cout<<"program to swap 2 numbers"<<endl;
    cout<<"using pass by pointers"<<endl;
    cout<<"before swap"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    swap(x,y);
    cout<<"after swap"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;




}