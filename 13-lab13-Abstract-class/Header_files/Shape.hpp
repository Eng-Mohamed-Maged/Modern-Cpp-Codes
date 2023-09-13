#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_
#include <iostream>
#include <string>
using namespace std;


// Abstract Class
class Shape
{
    private:
        string color;

    public:
        Shape(string c);
        virtual float  area() = 0;
        virtual void   draw() = 0;
        virtual void   erase() = 0;
        // final : means that no derived class can override this function
        virtual void Display() final   
        {
            cout<<"This class is written by [Mohamed Maged]\n";
        }
        Shape();
};





#endif