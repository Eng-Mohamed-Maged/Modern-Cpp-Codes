#include <iostream>
#include <thread>
#include <string>
using namespace std;


// Functor Function
class Functor
{
    public:
        void operator ()(int x , string s)
        {
            while(x-- > 0)
            {
                cout<<"The result from "<<s<<" = "<<x<<endl;
            }
        }

};

int main()
{
    thread t1(Functor(),15,"Thread 1");
    t1.join();



    return 0;
}