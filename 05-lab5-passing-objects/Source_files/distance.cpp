#include "../Header_files/distance.hpp"


 
int Distance::getFeet()
{
    return feet;
}
float Distance::getInches()
{
    return inches;
}

void Distance::setDistance(int f , float i)
{
    feet = f ;
    inches = i ;
}

void Distance::Print()
{
    cout<<"Feet = "<<feet<<"\t "<<"Inches = "<<inches<<"\n";
}

Distance Distance::addDistance(Distance d)
{
    Distance result;
    result.feet = feet + d.feet;
    result.inches = inches + d.inches ;
    return result;

}

Distance::Distance() : feet(0), inches(0)
{
    cout<<"Default constructor is called \n";
}
Distance::Distance(int f , float i):feet(f),inches(i)
{
   cout<<"Default (Copy) constructor is called \n";
}

Distance::~Distance()
{
    cout<<"GoodBye !\n";
}