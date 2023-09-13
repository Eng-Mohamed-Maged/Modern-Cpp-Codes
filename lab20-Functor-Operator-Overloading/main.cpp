#include <iostream>
#include "SEGMENT.hpp"
using namespace std;


int main()
{

    SEGMENT S1;
    SEGMENT S2;

    S1.Display_number(25);
    S2.Display_number(44);

    if(S1 < 10)
    {
        cout<<"The instance number is smaller than 10 \n";
    }
    if(S2 > 5)
    {
        cout<<"The instance number is larger than 5 \n";
    }

    int result = S1 > S2 ;
    cout<<"The biggest number is : "<<result<<endl;


    S2+=6;
    S2-=10;
    cout<<"S2 + 6 - 10 = "<<S2.get_number()<<endl;

    // Functor Overloading
    S2(125);
    S2(512);

    // Prefix & Postfix
    int temp = S2++;
    cout<<"|temp| S2++ = "<<temp<<endl;
    cout<<"S2++ = "<<S2.get_number()<<endl;

    temp = ++S2;
    cout<<"|temp| ++S2 = "<<temp<<endl;
    cout<<"++S2 = "<<S2.get_number()<<endl;

    temp = S2--;
    cout<<"|temp| S2-- = "<<temp<<endl;
    cout<<"S2-- = "<<S2.get_number()<<endl;

    temp = --S2;
    cout<<"|temp| --S2 = "<<temp<<endl;
    cout<<"--S2 = "<<S2.get_number()<<endl;


    SEGMENT S3;
    S3(15);
    int res = S3 & 3;
    cout<<"S3 & X = "<<res<<endl;
    S3(7);
    res = S3 << 1 ;
    cout<<"S3 << 1 = "<<res<<endl;

    cout<< S3;

    return 0;
}