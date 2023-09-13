#include "../Header_files/student.hpp"


void student::set_level(int l)
{
    level = l;
}
int student::get_level()
{
    return level;
}
void student::set_GPA(float g)
{
    GPA = g;
}
float student::get_GPA()
{
    return GPA;
}
void student::set_department(string d)
{
    department = d;
}
string student::get_department()
{
    return department;
}

student::student(string n,string g,int a,int l,float GP ,string d):person(n,g,a),level(l),GPA(GP),department(d)
{
    
}
/*
student::student(string n,string g,int a,int l,float GP ,string d):person(n,g,a)
{
    level = l;
    GPA = GP;
    department = d;
}
*/

// Overriding
void student::Display()
{
    //person(Display);   // ERROR: IT is display last entered data
    person::Display();   
    cout<<"Level        : "<<level<<"\n";
    cout<<"GPA          : "<<GPA<<"\n";
    cout<<"Department   : "<<department<<"\n";
}