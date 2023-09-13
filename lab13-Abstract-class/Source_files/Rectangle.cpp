#include "../Header_files/Rectangle.hpp"
 

Rectangle::Rectangle(float w, float h):width(w),height(h)
{

}

float Rectangle::area()
{
    return (width * height);
}

void Rectangle::draw()
{
    cout<<"Draw the Rectangle \n";
}

void Rectangle::erase()
{
    cout<<"Erase the Rectangle \n";
}
