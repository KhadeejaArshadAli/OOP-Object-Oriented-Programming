#include<iostream>
using namespace std;
class subject
{
private:
    int maths;
    int sci;
    
public:
    subject();
    subject(int math1,int sci1);
    subject(const subject &course);
    void setdata(int newmaths,int newsci);
    void show();
    friend ostream & operator<<(ostream &output,const subject s);
    friend istream & operator>>(istream &input,subject s);
  
};

