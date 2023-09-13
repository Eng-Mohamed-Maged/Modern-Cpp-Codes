#include <iostream>
#include <string>
using namespace std;




int main()
{
    int x = 0;
    int y = 0;
    cout<<"Enter the first number  : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    try
    {
        if(x < 30)
        {
            throw "X Exception x must be larger than 30";
        }
        if(y == 0)
        {
            throw exception();
        }
        else
        {
            cout<<"The result of : "<<x<<"/ "<<y<<" = "<<x/y<<endl;
        }
    }
    /*
    catch(exception e)
    {
         cout<<e.what()<<endl;
         cout<<"The second number can't be 0 \n";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
    */

   
    // General Catch
    catch(...)
    {
        cout<<"Unhandled Exception \n";
        cout<<"Please,Contact the system admin \n";
    }

    cout<<"The Program is continued \n";


    return 0;
}