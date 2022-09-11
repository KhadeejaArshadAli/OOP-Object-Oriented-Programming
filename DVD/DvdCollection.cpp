#include <iostream>
#include <string>
using namespace std;
#include "Dvd.h"


class DvdCollection
{
public:

    DvdCollection()
    {
        this->count=0;
        this->size=5;
        this->total_cost=0;
        this->dvdlist= new Dvd[this->size];

    }
//function overloading
    void add_Dvd(Dvd &d)
    {
        if(this->count==this->size)
        {
            increasesize();
        }

        this->dvdlist[this->count]= d;
        this->count= this->count+1;


    }

 //function overloading
    void increasesize()
    {
        int size2;
        ///added size 2 becuse it was giving identifier error
    
        this->size= size2;
        Dvd dvdtemp= nullptr;
        //there shoud be an object like we did in class when we were doing movie collection
        dvdtemp = new Dvd[this->size];
        for(int i=0; i<=count;i++)
        {
            dvdtemp[i]= this->dvdlist[i];
            //cout<<"\nI am printing in inc size"<<dvdlist[i];

        }

        delete [] dvdlist;
        //for(int j=0; j<=count;j++)
        // {
        // cout<<"\nI am printing after inc size "<<dvdlist[j];
        // }//
        dvdlist= dvdtemp;


    }


    void show()
    {


 
  for(int i=0;i<=this->count;i++)
  {
      cout << this->dvdlist[i]<<"\n\n";

  }

    }


private:
Dvd *dvdlist;
int size;
int total_cost;
int count;

};