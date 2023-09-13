#ifndef LCD_HPP
#define LCD_HPP
#include <iostream>
using namespace std;

class LCD
{
    private:
    public:
        string name;
        char * text;
        LCD();
        ~LCD();
        LCD(string n,const char * t);
        LCD(const LCD& t);

        // Move Constructor
        LCD(LCD && temp);

};

#endif