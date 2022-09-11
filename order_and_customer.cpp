#include<iostream>
using namespace std;
  

class order{
    public:
    int numberofitems;
    string Payment;

    order(){
        this->numberofitems=0;
    }
    order(int a){
        this->numberofitems=a;
        
    }
    
};

class customer{
    public:
    order order1;
    int orderplaced;

    customer(){
        this->orderplaced=0;

    }
    customer(int a){
        this->orderplaced=a;
        order1.numberofitems=a;
    }
    void display(){
        cout<<"This customer has "<<order1.numberofitems<<" items in their order"<<endl;
    }
    void Discount(){
        cin>>order1.Payment;
        if (order1.Payment=="Cash"){
            cout<<"There will be 10% off on their order"<<endl;
        }
        else{
            cout<<"there will be 15% off on their order"<<endl;
        }
    }

    ~customer(){
        delete &order1;
    }
};

int main(){
    customer customer1(4);
    customer1.display();
    customer1.Discount();
    return 0;

};