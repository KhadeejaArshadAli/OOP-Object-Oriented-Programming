#include<iostream>
using namespace std;
class human{
    public:
    class heart objheart;
    int x;
    human(){
        this->x=0;

    }
    human(int a){
        this->x=a;
        objheart.data=a;
    }
    void display(){
        cout<<x<<endl;
        cout<<objheart.data<<endl;
    }
  
};
class heart{
    public:
    int data;
    heart(){
        this->data=0;
    }
    heart(int a){
        this->data=a;
    }
};
int main(){
    human objhuman(20);
    objhuman.display();
    return 0;

};