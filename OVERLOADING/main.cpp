#include "point.h"
#include <iostream>
using namespace std;
int main()
{
    Point p1, p2, add,sub,mul,div;
    cin >> p1;
    cout << "both numbers are";
    cout << p1;

    cin >> p2;
    cout << " second both numbers are";
    cout << p2;

    add = p1 + p2;
    cout <<"sum is="<< add;
    sub = p1 + p2;
    cout<<"diffrence is=" << sub;
    mul = p1 + p2;
    cout<<"product is =" << mul;
    div = p1 + p2;
    cout<<"after dividing both numbers=" << div;

    return 0;
}