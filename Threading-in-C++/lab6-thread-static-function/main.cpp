#include <iostream>
#include <thread>
#include <string>
using namespace std;


// Static member Function
class Base
{
    public:
        static void fun(int x , string s)
        {
            while(x-- > 0)
            {
                cout<<"The result from "<<s<<" = "<<x<<endl;
            }
        }

};

int main()
{

    thread t1(&Base::fun,4,"Thread 0");
    t1.join();



    return 0;
}