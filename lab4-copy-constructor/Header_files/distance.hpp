#ifndef _DISTANCE_HPP_
#define _DISTANCE_HPP_

#include <iostream>
using namespace std;

class Distance
{
    private:
            int feet;
            float inches;

    public:
           int getFeet();
           float getInches();
           void setDistance(int f , float i);
           void Print();
           Distance();
           Distance(int f , float i);
           ~Distance();
};











#endif