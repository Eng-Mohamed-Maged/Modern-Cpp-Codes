#include <iostream>
#include "LCD.hpp"

using namespace std;

int main()
{


    LCD l1;
    l1.set_text("Hello");
    string msg = "World\n";
    cout<<"|-| L1 before adding msg is : "<<l1.get_text()<<endl;

    l1 = l1 + msg ;
    cout<<"|-| L1 after adding msg is  : "<<l1.get_text()<<endl;

    l1 = l1 - "#";
    cout<<"|-| L1 after adding # is  : "<<l1.get_text()<<endl;

    l1 = l1 - msg;
    cout<<"|-| L1 after deleting msg is  : "<<l1.get_text()<<endl;

    return 0;
}