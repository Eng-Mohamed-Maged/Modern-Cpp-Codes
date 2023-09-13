#include <iostream>
#include "../Header_files/distance.hpp"
using namespace std;

int main()
{
    Distance d1;   
    Distance d2(15,7.6);
    Distance d3 = d1;          // Copy Constructor
    Distance d4(d2);           // Copy Constructor
    
    cout<<"d1 : \n";
    cout<<"==== \n";
    d1.Print();
    cout<<"d2 : \n";
    cout<<"==== \n";
    d2.Print();
    cout<<"d3 : \n";
    cout<<"==== \n";
    d3.Print();
    cout<<"d4 : \n";
    cout<<"==== \n";
    d4.Print();
    return 0;
}