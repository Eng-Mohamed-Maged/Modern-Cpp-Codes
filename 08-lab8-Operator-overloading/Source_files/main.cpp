#include <iostream>
#include <string>
#include "../Header_files/count.hpp"
using namespace std;

int main()
{
    count c1(5);
    count c2(14);
    cout<<"c1 = "<<c1.get_count()<<"\n";
    cout<<"c2 = "<<c2.get_count()<<"\n";

    count c3 = c1 + c2 ;
    cout<<"c1 + c2 = "<<c3.get_count()<<"\n";

    cout<<"c1++ = "<<c1++.get_count()<<"\n";
    c2--;
    cout<<"c2-- = "<<c2--.get_count()<<"\n";
    --c2;
    cout<<"--c2 = "<<c2.get_count()<<"\n";
    return 0;
}