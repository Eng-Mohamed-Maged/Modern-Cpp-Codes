#ifndef _RECTANGLE_HPP_
#define _RECTANGLE_HPP_
#include "../Header_files/Shape.hpp"


class Rectangle : public Shape
{
    private:
        float width;
        float height;

    public:
        Rectangle(float w ,float h);
        float area();
        void draw() ;
        void erase();
};










#endif