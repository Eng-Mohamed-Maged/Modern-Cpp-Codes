#ifndef LCD_HPP
#define LCD_HPP

#include <iostream>
#include <string>
using namespace std;

class LCD
{
    private:
        string text;
    public:


        void set_text(string s);
        string get_text();
        //string operator+(string m);

        /*
        LCD operator+(string m)  :
        This declaration indicates that the operator+ function returns an instance of the LCD class by value.
        When you use this overloaded operator, a new LCD object is created, which represents the result of the addition operation.
        The returned object is typically a copy of the original object with the desired modifications applied.

        LCD &operator+(string m) :       
        This declaration indicates that the operator+ function returns a reference to an instance of the LCD class.
        When you use this overloaded operator, the function modifies the original object and returns a reference to it.
        The returned reference refers to the same object that was used to invoke the operator, allowing you to chain multiple operations together.
        */

        LCD &operator+(string m);
        LCD &operator-(string m);
        LCD();
        ~LCD(); //do nothing



};

#endif