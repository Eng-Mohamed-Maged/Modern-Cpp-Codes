#include <iostream>
#include <string>
#include "../Header_files/add.hpp"
using namespace std;

int main()
{
    Calculator c1;
    cout<<"Result : "<<c1.add("Mohamed","Maged")<<"\n";
    cout<<"Result : "<<c1.add(5,3)<<"\n";
    cout<<"Result : "<<c1.add(5,3,9)<<"\n";
    cout<<"Result : "<<c1.add(0.5f,0.2)<<"\n";   // Float number should be 0.5f not 0.5
    return 0;
}