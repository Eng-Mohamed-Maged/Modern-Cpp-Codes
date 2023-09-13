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
    this_thread::sleep_for(chrono::seconds(2));

}

int main()
{
    thread t1(fun,6,"Thread 1");
    cout<<"Main()"<<endl;
    t1.join();
    cout<<"Main() after 5 sec"<<endl;

//    t1.join(); # Double join() will result into program termination

    if(t1.joinable())
    {
        t1.join();
    }




    return 0;
}