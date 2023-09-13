#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1,2,3};
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<"Normal loop > i = "<<i<<"\n";
    }
    cout<<endl;
    for(int i : arr)
    {
        cout<<"Ranged loop > i = "<<i<<"\n";

    }
    return 0;
    
}