#include "../Header_files/person.hpp"

int person::person_number = 0 ;


void person::set_name(string n)
{
    name = n ;
}

string person::get_name()
{
    return name;
}


void person::set_gender(string g)
{
    gender = g;
}

string person::get_gender()
{
    return gender;
}

void person::set_age(int a)
{
    age = a;
}

int person::get_age()
{
    return age;
}

void person::Display()
{
    cout<<"\nPerson "<<person_number<<" info : \n";
    cout<<"Name         : "<<name<<"\n";
    cout<<"Gender       : "<<gender<<"\n";
    cout<<"Age          : "<<age<<"\n";

}


person::person():name("unknown"),gender("unknown"),age(0)
{
    person_number++;
}

person::person(string n, string g, int a):name(n),gender(g),age(a)
{
    person_number++;
}

person::~person()
{
    person_number--;
}