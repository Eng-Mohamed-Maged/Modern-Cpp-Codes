#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;
typedef long long int ull;


void Find_Even(ull end)
{
    ull EvenSum = 0;
    for(ull i = 0 ; i <= end ; i++)
    {
        if((i % 2) == 0)
        {
            EvenSum += i ;
        }
    }
    cout<<"Even Sum = " << EvenSum<<endl;
}

void Find_Odd(ull end)
{
    ull OddSum = 0;
    for(ull i = 0 ; i <= end ; i++)
    {
        if((i % 2) != 0)
        {
            OddSum += i ;
        }
    }
    cout<<"Odd Sum  = " << OddSum<<endl;
}


// main() : is a default thread
int main()
{
    ull end ;
// Determining which approach is faster, threaded or non-threaded, 
// depends on the specific context and requirements of the program. 
// There is no general answer as to which approach is faster in all cases.

    auto Start_Time1 = high_resolution_clock::now();

    end = 1900000000;
   // Without Thread // 
    Find_Even(end);
    Find_Odd(end);


    auto Stop_Time1 = high_resolution_clock::now();
    auto Duration1 = duration_cast<seconds>(Stop_Time1 - Start_Time1);
    cout<<"Excution Time [without] thread = "<<Duration1.count()<<" sec"<<"\n\n";


    


    auto Start_Time2 = high_resolution_clock::now();
    end = 1900000000;

    // With Thread //
    // Step1 : Create thread and take  1- Function Pointer  + its arguments(start,end,&EvenSum)
    thread t1(Find_Odd,end);
    thread t2(Find_Even,end); 


    // Step2 : Join the thread to the main 
    t1.join(); 
    t2.join();



    auto Stop_Time2 = high_resolution_clock::now();
    auto Duration2 = duration_cast<seconds>(Stop_Time2 - Start_Time2);
    cout<<"Excution Time [with] thread    = "<<Duration2.count()<<" sec"<<endl;




    return 0;
}
