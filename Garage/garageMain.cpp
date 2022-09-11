#include"car.h"
#include <iostream>
using namespace std;
int main(){
    Car*garage[10];
    for (int i=0;i<10;i++){
        garage[i]=NULL;
    }
    int menu_choice=0;
    char temp_colour[10];
    int garage_number;
    while (menu_choice!=3)
    {
        cout<<"Enter 1 to put car in garage,2 to remove it 3 to quit ";
        cin>>menu_choice;
        if (menu_choice==1)
        {
            cout<<"The following garage numbers are empty ";
            for(int i=0;i<10;i++){
                if (garage[i]==NULL) {
                    cout<<(i+1)<<",";
                }
            }
            cout<<endl<<"Enter garge number for car tp occupy ";
            cin>>garage_number;
            if (garage[garage_number-1]==NULL){
                cout<<"Enter the colour of car ";
                cin>>temp_colour;
                garage[garage_number-1]=new Car(temp_colour);
                cout<<"Colour is "<<garage[garage_number-1]->getColour()<<endl;
            }
            else{
                cout<<"the garage is not empty"<<endl;
            }
        }
        if (menu_choice==2){
            cout<<"The following numbers are occupied ";
            for (int i=0;i<10;i++){
                if (garage[i]!=NULL){
                    cout<<(i+1)<<",";

                }
            }
            cout<<endl<<"Enter garage number to empty ";
            cin>>garage_number;
            if(garage[garage_number-1]!=NULL){
                cout<<garage[garage_number-1]->getColour()<<" Car removed"<<endl;
                delete garage[garage_number-1];
                garage[garage_number-1]=NULL;
            }
            else{
                cout<<"That garage is unoccupied"<<endl;
            }
        }   
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (garage[i]!=NULL)
        {
            delete garage[i];
        }
        
    }
    
    
}