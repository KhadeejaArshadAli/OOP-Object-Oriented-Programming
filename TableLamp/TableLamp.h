#include <iostream>
#include <string>
using namespace std;
class TableLamp{
    public:
    enum state{ON,OFF};
    TableLamp();
    void pressswitch(state State);
    friend ostream& operator<<(ostream& out,const TableLamp&t); 

};
class AdjTableLamp:public TableLamp{
    public:
    float brightness;
   AdjTableLamp();
    void dim(state State);
    void print(ostream&);
};

