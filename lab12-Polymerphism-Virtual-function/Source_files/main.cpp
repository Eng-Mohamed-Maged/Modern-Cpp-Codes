#include <iostream>
#include <string>
#include "../Header_files/person.hpp"
#include "../Header_files/student.hpp"
#include "../Header_files/post_graduate_student.hpp"


using namespace std;

int main()
{
    person * ptr;
    
    person p1("Mohamed Maged","Male",25);
    p1.Display();
    //[Polymerphism]
    ptr = &p1;
    ptr ->Display();

//-------------------------------------------------
//-------------- First Inheritance ----------------
    student s1("STUDENT1","Female",16,6,2.9,"ELEC");
    // Overriding
    s1.Display();
    //[Polymerphism]
    ptr = &s1;
    ptr ->Display();
//-------------------------------------------------
//------------- Second Inheritance ----------------
    post_g_student g1("Graduate 1","Male",29,10,3.0,"CIVIL","Computer Vision");
    g1.Display();
    //[Polymerphism]
    ptr = &g1;
    ptr ->Display();

 //[Polymerphism] NOT-WORKING: if you didnt write "virtual void Display();" in the Base class 


    return 0;
}