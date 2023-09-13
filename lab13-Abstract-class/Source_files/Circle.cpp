#include "../Header_files/Circle.hpp"

 

Circle::Circle(float r):radius(r)
{
}
float Circle::area()
{
    return (3.14*radius*radius);
}

void Circle::draw()
{    
    cout<<"Draw the Circle \n";
}

void Circle::erase()
{
    cout<<"Erase the Circle \n";
}
