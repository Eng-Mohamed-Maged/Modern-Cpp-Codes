#include <iostream>
#include "SEGMENT.hpp"
using namespace std;


int main()
{
/*
    SEGMENT S1;
    cout<<endl;
    SEGMENT S2(5);
    cout<<endl;
    SEGMENT S3(5,"Segment 3");
    cout<<endl;
*/

    // Pointer Constructor
    int * m_ptr = new int (10);
    SEGMENT S(m_ptr);
    SEGMENT S0(S); // Now you will not get core-dump error
   //--------- Deep Copy ------------
   // - S1    : {ptr->0xffaa{15},"hello",10} -- Destructor delete 0xffaa ptr
   // - S2(S1): {ptr->0xffbb{15},"hello",10} -- Destructor delete 0xffbb ptr
   //--------- Shallow Copy ---------
   // - S1    : {ptr->0xffaa{15},"hello",10} -- Destructor delete 0xffaa ptr
   // - S2(S1): {ptr->0xffaa{15},"hello",10} -- Destructor delete the same 0xffaa ptr and we will get core-dumped(segmentation-fault)
    
    return 0;
}