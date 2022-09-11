
#include<iostream>
using namespace std;
 
class npoint {
    // private variables.
private:
    int x, y;
 
public:
    // parameterized constructor
    npoint(int cx, int cy)
    {
        x = cx;
        y = cy;
    }
    // method to add two numbers
    void add() { cout << x + y << endl; }
};
int main()
{
    // Initializing 3 array Objects with function calls of
  // parameterized constructor as elements of that array
    npoint obj[] = { npoint(1, 1), npoint(2, 2), npoint(3, 3) ,npoint(4, 4) };
 
    // using add method for each of three elements.
    for (int i = 0; i < 4; i++) {
        obj[i].add();
    }
 
    return 0;
}
        



