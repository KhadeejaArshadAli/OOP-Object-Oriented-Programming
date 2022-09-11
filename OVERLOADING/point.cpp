#include "point.h"
#include <iostream>
using namespace std;
Point::Point() {}
Point::Point(int X, int Y)
{
    this->x = X;
    this->y = Y;
}

Point::Point(const Point &poo)
{
    x = poo.x;
    y = poo.y;
}

ostream &operator<<(ostream &out, const Point &p)
{
    out << p.x;
    out << "," << p.y << endl;
    return out;
}
istream &operator>>(istream &in, Point &p)
{
    cout << "first no is ";
    in >> p.x;
    cout << "second no is ";
    in >> p.y;
    return in;
}

Point Point::operator+(const Point &p)
{
    Point temp;

    temp.x = this->x + p.x;
    temp.y = this->y + p.y;

    return temp;
}
Point Point::operator-(const Point &p)
{
    Point temp;

    temp.x = this->x - p.x;
    temp.y = this->y - p.y;

    return temp;
}
Point Point::operator*(const Point &p)
{
    Point temp;

    temp.x = this->x * p.x;
    temp.y = this->y * p.y;

    return temp;
}
Point Point::operator/(const Point &p)
{
    Point temp;

    temp.x = this->x / p.x;
    temp.y = this->y / p.y;

    return temp;
}