#include <iostream>
#include <thread>
#include <string>
using namespace std;


// Non-Static member Function
class Base
{
    public:
        void fun(int x , string s)
        {
            while(x-- > 0)
            {
                cout<<"The result from "<<s<<" = "<<x<<endl;
            }
        }

};

int main()
{
    Base b;
    thread t1(&Base::fun,&b,15,"Thread 0");
    t1.join();



    return 0;
}