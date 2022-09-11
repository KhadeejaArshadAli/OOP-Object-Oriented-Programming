#include "subject.h"
#include<iostream>


subject::subject(){
    this->maths=0;
    this->sci=0;
 

}
subject::subject(int math1,int sci1){
    
    this->maths=math1;
    this->sci=sci1;
 

}
subject::subject(const subject &course){
    maths=course.maths;
    sci=course.sci;
    
}
    // void subject::setdata(int newmaths,int newsci){
    // maths=newmaths;
    // sci=newsci;
    // }
    // void subject::show(){
    // cout<<maths<<" "<<sci<<endl;
    // };

ostream & operator << (ostream &output,const subject s){
    output<<s.maths<<s.sci<<endl;
    return output;
}
istream & operator >> (istream &input,subject s){
    
    input>>s.maths>>s.sci;
    return input;

}