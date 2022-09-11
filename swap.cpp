#include<iostream>
using namespace std;

void swap(int& x,int& y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int x=22,y=33;
     cout<<"program to swap 2 numbers"<<endl;
    cout<<"using pass by Refrence"<<endl;
    cout<<"before swap"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    swap(x,y);
    cout<<"after swap"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;


}
