#include <iostream>
#include <string>
using namespace std;
#include "Dvd.h"
#include "DvdCollection.cpp"
int main()
{
    DvdCollection mycollection;
    Dvd d1;
         Dvd d2("Windows10","Microsoft",150);
         Dvd d3("Windows8","Microsoft",120);
         Dvd d4("Mac11","Apple",150);
         Dvd d5("GTA 5","Rockstar",150);
         Dvd d6("CS","Ubisoft",150);
    mycollection.add_Dvd(d1);
    mycollection.add_Dvd(d2);
    mycollection.add_Dvd(d3);
    mycollection.add_Dvd(d4);
    mycollection.add_Dvd(d5);

//mycollection.add_Dvd(d6);



    mycollection.show();
    system("pause");
}