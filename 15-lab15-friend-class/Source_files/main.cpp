#include <iostream>
#include <string>
#include "../Header_files/person.hpp"
using namespace std;


// Friend Function
void print(person p)
{
    cout<<"\n<< From Friend function >> Person "<<p.person_number<<" info : \n";
    cout<<"Name  : "<<p.name<<"\n";
    cout<<"Gender: "<<p.gender<<"\n";
    cout<<"Age   : "<<p.age<<"\n";
}

int main()
{
    person p1("Mohamed Maged","Male",25);
    p1.Display();

    // Friend function
    print(p1);

    // Friend Class
    Print_Class PC;
    PC.printC(p1);

    


    return 0;
}