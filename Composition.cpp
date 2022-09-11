#include <iostream>
using namespace std;
class House{//Base Class
    public:
   int numberofroom;
   House(){
       this->numberofroom=0;//Null constructor
   }
   House(int a){//Parametrized Constructor
       this->numberofroom=a;
       cout<<"Number of Room in this House:"<<numberofroom<<endl;
   }
    virtual void display(){// Function Overloading and using virtual in order to skip this one and proceed toward the second display function
        cout<<"This house has"<<numberofroom<<"room"<<endl;//An attempt of dynamic polymorphism
    }
  
};
class Room:public House{//Deiver class
    public:
    int noofroom;
    Room(){//Null Constructor
        this->noofroom=0;
    }
    Room(int x):House(x){//Calling base class parameterized constructor to driver class
       this->noofroom=x;
       cout<<"The house has"<<noofroom<<"room"<<endl;
        
    }
      
};
    int main(){
    House*bptr; 
    Room sample1(4);
    bptr= &sample1; //Storing the address of sample1 of room class in the abive mentioned pointer of House 
    bptr->display();
    // these three above lines shows the implementation of dynamic polymorphism
    Room sample2(4); 
    sample2.display();
    //These 2 above mentioned lines will show the implementation of calling base class constructor to driver class
    return 0;

    };