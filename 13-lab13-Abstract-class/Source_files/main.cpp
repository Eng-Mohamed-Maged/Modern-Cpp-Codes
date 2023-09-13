#include <iostream>
#include <string>
#include "../Header_files/Shape.hpp"
#include "../Header_files/Rectangle.hpp"
#include "../Header_files/Circle.hpp"

using namespace std;


int main()
{
    // Shape S1; //Cant do this because this is an Abstract class
    Rectangle R1(5,9);
    
    cout<<"The Area of the rectangle is : "<<R1.area()<<endl;
    R1.draw();
    R1.erase();


    Circle C1(2);
    cout<<"The Area of the Circle is : "<<C1.area()<<endl;
    C1.draw();
    C1.erase();

    R1.Display();
    C1.Display();

    return 0;
}