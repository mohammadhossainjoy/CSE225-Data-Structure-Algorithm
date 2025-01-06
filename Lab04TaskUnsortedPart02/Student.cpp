#include<iostream>
using namespace std;

class Student{

int id;

string name;
double cgpa;

Student(){
id=0;
name=" ";
cgpa=0.0;
}
Student(int i,string nam,double cgp ){
id=i;
name=nam;
cgpa=cgp;

}

void print(){
cout<<id<< " "<<name<<" "<<cgpa<<endl;
}

int operator +(Student object)
{

    Student temporary;
    temporary.id=this->id+object.id;

    return temporary.id;
}
double operator - (Student object)
{

    Student temporary;
    temporary.cgpa=this->cgpa+object.cgpa;

    return temporary.cgpa;
}

};
