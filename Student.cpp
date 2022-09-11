#include <iostream>
#include <string>
using namespace std;
class Student{
private:
string *courses;
int count;

public:

Student(){ //Null Constructor
}
Student(const Student&object){ //Copied Constructor
    courses=object.courses;
    count=object.count;
}
void setcourse(string course) { //Setter for string courses
     cout << course;
}
string getcourse(string courses) { //Getter for string courses

      return (courses);
}
void setcount(int count) { //Setter for integer count
      this->count = count;
}
int getcount(int count) { // Getter for integer count
      return count;
}


void addCourse(string courseName){ //Function of adding courses
    cout<<"Courses: "<<courseName;
}

friend ostream& operator << (ostream&out, const Student& object){ //Operator overloading (<<)
    out<<object.courses<<object.count;
    return out;
}

Student& operator= (const Student& object){ //Operator overloading (=)
    
    courses = object.courses;
    count = object.count;
    return *this;
}

~Student(){ //Destructor
    
}
};


// Same main as given in the question seven and the codes works fine
int main()
{
 Student Salman;
 Student Akbar(Salman);
 
 Salman.addCourse("BSCS 413");

 cout<<Akbar.getcourse("0")<<endl;


 Akbar = Salman;
 cout<< Akbar<<endl;
 cout << Salman<<endl;
 
 
 return 0;
};
