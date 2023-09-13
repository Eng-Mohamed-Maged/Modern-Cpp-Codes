#ifndef _CIRCLE_HPP_
#define _CIRCLE_HPP_

#include "../Header_files/Shape.hpp"

class Circle : public Shape
{
    private:
        float radius;

    public:
        Circle(float r);
        float area();
        void draw();
        void erase();
};









#endif