#include <iostream>
#include <memory>    // For unique_ptr<int[]> Smart_pNums(new int[amtToStore]);
using namespace std;
enum class option
{
    Regular_Pointers = 1,
    Smart_Pointers
};
int main()
{
    
    int amtToStore;
    int * pNums;
    int * Smart_pNums;
    option Choice;
    cout<<"Chose one of this options : \n";
    cout<<"1 - For Regular Pointers\n";
    cout<<"2 - For Smart Pointers\n";

    int choiceInt;
    cout<<"Your choice is : ";
    cin >> choiceInt;
    Choice = static_cast<option>(choiceInt); // Cast choice to int for input
    
    switch(Choice)
    {
//--------------------------------- Regular Pointers -----------------------------
        case option::Regular_Pointers:
        {
            cout<<"[Regular Pointers]|How many numbers do you want : ";
            cin>>amtToStore;
            pNums = (int *) malloc(amtToStore * sizeof(int));
            if(pNums != NULL)
            {
                int i = 0;
                while (i < amtToStore)
                {
                    cout<<"Enter a number : ";
                    cin>>pNums[i];
                    i++;
                }
            }
            cout<<"You entered these numbers :\n";
            for(int i = 0;i<amtToStore;i++)
            {
                cout<<pNums[i]<<endl;

            }
            delete pNums;
        }break;
//--------------------------------- Smart Pointers -----------------------------
        case option::Smart_Pointers:
        {       
            cout<<"[Smart Pointers]|How many numbers do you want : ";
            cin>>amtToStore;
            unique_ptr<int[]> Smart_pNums(new int[amtToStore]);
            if(Smart_pNums != NULL)
            {
                int i = 0;
                while (i < amtToStore)
                {
                    cout<<"Enter a number : ";
                    cin>>Smart_pNums[i];
                    i++;
                }
            }
            cout<<"You entered these numbers :\n";
            for(int i = 0;i<amtToStore;i++)
            {
                cout<<Smart_pNums[i]<<endl;

            }
            //Smart pointers automatically deallocate so you don't need to use [delete Smart_pNums;]
        }break;
    }

}