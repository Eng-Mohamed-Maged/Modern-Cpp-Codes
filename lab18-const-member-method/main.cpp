#include <iostream>
#include "LED.hpp"
using namespace std;

int main()
{
    LED l1;
    LED l2(5,10);
    LED l3(20,25);

    l1.Display();
    l2.Display();
    l3.Display();
    l3.Print();
    
    // Const Instance
    cout<<endl;
    const LED constant_l4(24,48);
    constant_l4.Print();
    cout<<"Y from l4 = "<<constant_l4.y<<endl;


    return 0;
}