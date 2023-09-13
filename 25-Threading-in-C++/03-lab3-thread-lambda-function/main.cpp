#include <iostream>
#include <thread>
#include <string>
using namespace std;


// Lambda Function
auto fun = [](int x , string s)
{
    while(x-- > 0)
    {
        cout<<"The result from "<<s<<" = "<<x<<endl;
    }

};

int main()
{
    thread t1(fun,10,"Thread 1");

/*
    thread t1([](int x , string s)
    {
        while(x-- > 0)
        {
            cout<<"The result from "<<s<<" = "<<x<<endl;
        }

    },10,"Thread 1");
*/

    t1.join();



    return 0;
}