#include <iostream>
using namespace std;
class complexnumber {
    public:
    int a;
    int b;
    
    


complexnumber(){ // Default Constructor
    

} 


complexnumber(int number1, int number2){// Parametrized Contructor
a= number1;
b= number2;
}

void display(){
    cout<<"The values of a & b: "<<a<<"+"<<b<<"i"<<endl;
}

complexnumber(const complexnumber&object){// Copied Constructor
    a=object.a;
    b=object.b;
}
 complexnumber Addition(complexnumber c1,complexnumber c2){
    complexnumber result;
    result.a=c1.a + c2.a;
    result.b=c1.b+ c2.b;
    return result;
}
 complexnumber Subtraction(complexnumber c1,complexnumber c2){
    complexnumber result;
    result.a=c1.a - c2.a;
    result.b=c1.b - c2.b;
    return result;
}
complexnumber Multiplication(complexnumber c1,complexnumber c2){
    complexnumber result;
    result.a=c1.a * c2.a;
    result.b=c1.b * c2.b;
    return result;
}
complexnumber Division(complexnumber c1,complexnumber c2){
    complexnumber result;
    result.a=c1.a / c2.a;
    result.b=c1.b / c2.b;
    return result;
}



};


int main(){
    complexnumber c1(2,2);
    c1.display();//Displaying Values
    complexnumber c2 (1,2);
    c2.display(); 
    complexnumber c3;
    c3=c3.Addition(c1,c2);
    cout<<"Sum of two complexnumber: "<< c3.a<<"+"<<c3.b<<"i"<<endl;
    c3=c3.Subtraction(c1,c2);
    cout<<"Difference of two complexnumber: "<< c3.a<<"+"<<c3.b<<"i"<<endl;
    c3=c3.Multiplication(c1,c2);
    cout<<"Product of two complexnumber: "<< c3.a<<"+"<<c3.b<<"i"<<endl;
    c3=c3.Division(c1,c2);
    cout<<"Division of two complexnumber: "<< c3.a<<"+"<<c3.b<<"i"<<endl;
    
    complexnumber c4=c2;//Copied Constructor
    c4.display();

    return 0;
}

