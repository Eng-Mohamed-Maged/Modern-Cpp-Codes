#include <iostream>
#include <string>
#include "../Header_files/add.hpp"
using namespace std;

int main()
{
    // Without creating any object because the functions was [static]
    cout<<"Result : "<<Calculator::add(16,74)<<"\n";
    cout<<"Result : "<<Calculator::add("Mohamed","Maged")<<"\n";

    return 0;
}