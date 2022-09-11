#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int X, int Y);
    Point(const Point &poo);
    friend ostream &operator<<(ostream &out, const Point &p);
    friend istream &operator>>(istream &in, Point &p);
    Point operator+(const Point &p);
    Point operator-(const Point &p);
    Point operator*(const Point &p);

    Point operator/(const Point &p);

};