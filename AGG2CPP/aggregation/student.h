#include<string>

using namespace std;
class student
{
public:
    string name;
    string department;
    int batch_no;
    student();
    student(string id,string depart,int year);
    student(const student&stud);
   
    
};
    