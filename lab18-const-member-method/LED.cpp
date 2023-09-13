#include "LED.hpp"
#include <iostream>
using namespace std;

LED::LED():x(0),y(0)
{

}

LED::~LED()
{

}

LED::LED(int x,int y):x(x),y(y)
{
    // this->x = x;  NOTE: This is an error you must use Initialization List
}

void LED::Display()
{
    cout<<"X = "<<x<<"\t Y = "<<y<<endl;
}

void LED::Print() const
{
    cout<<"X from Print = "<<(this->x)<<"\tY from Print = "<<(this->y)<<endl;
    cout<<"This is a const method \n";
}
