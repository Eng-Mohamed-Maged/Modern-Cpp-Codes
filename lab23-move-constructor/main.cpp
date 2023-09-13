#include <iostream>
#include <cstring>
using namespace std;
#include "LCD.hpp"

int main()
{

    LCD lcd1("MyLCD","Hello World");

    // Calling Copy COnstructor
    LCD copy_lcd1(lcd1);
    cout<<"lcd1 :"<<lcd1.name<<" "<<lcd1.text<<endl;
    cout<<"Copy lcd1 :"<<copy_lcd1.name<<" "<<copy_lcd1.text<<endl; // lcd1 still exist after copying


    // Calling Move Constructor
    LCD lcd2(move(lcd1)); // lcd1 doesn't exist after moving

    
    cout<<lcd2.name<<" "<<lcd2.text<<endl;
    lcd2.name = "# lcd1 #"; // lcd1 overwrite on "MyLCD"
    cout<<lcd2.name<<" "<<lcd2.text<<endl;
    strcpy(lcd2.text,"Overwrite"); //lcd1 overwrite on "MyLCD"
    cout<<lcd2.name<<" "<<lcd2.text<<endl;


    //cout<<lcd1.name<<" "<<lcd1.text<<endl; // Cause crash because you accessing null pointer
    cout<<"------------|The END|------------\n";
    return 0;


    
}