#include <iostream>
#include "../Header_files/distance.hpp"
using namespace std;

int main()
{
    Distance d1(13,4.7);   
    Distance d2(15,7.6);
    //Distance d3(21,9.2);
    Distance d3 = d1.addDistance(d2);
    d1.Print();
    d2.Print();
    d3.Print();
    return 0;
}