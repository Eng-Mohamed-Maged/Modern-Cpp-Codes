#include <iostream>
#include <string>
#include "../Header_files/person.hpp"
#include "../Header_files/student.hpp"

using namespace std;

int main()
{
    person p1("Mohamed Maged","Male",25);
    p1.Display();
    person p2("Islam Maged","Male",21);
    p2.Display();
    person p3("Nada Hamdy","Female",24);
    p3.Display();
    p3.set_age(23);
    p3.Display();

//-------------------------------------------------
    student s1("STUDENT1","Female",16,6,2.9,"ELEC");
    // Overriding
    s1.Display();
    person p5;
    p5.Display();
    return 0;
}