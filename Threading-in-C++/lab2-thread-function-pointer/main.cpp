#include <iostream>
#include <thread>
#include <string>
using namespace std;

void fun(int x , string s)
{
    while(x-- > 0)
    {
        cout<<"The result from "<<s<<" = "<<x<<endl;
    }

}

int main()
{
    thread t1(fun,100,"Thread 1");
    thread t2(fun,100,"Thread 2");

    t1.join();
    t2.join();



    return 0;
}