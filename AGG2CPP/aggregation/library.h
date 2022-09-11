#include<string>
#include"student.h"
using namespace std;


class library
{

   student*location;

public:
library();
library(string name,student*location,int floor);
library(const library&newlibrary);
void printdetails();

   string libraryname;
   
   int floors;

};
