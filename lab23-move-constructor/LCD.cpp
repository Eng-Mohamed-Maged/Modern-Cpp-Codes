#include "LCD.hpp"
#include <cstring>

LCD::LCD()
{
    cout<<"Default COnstructor \n";
}

LCD::~LCD()
{
    if(this->text)
    {
        //you are freeing the memory allocated for the array and ensuring that it is properly deallocated
        delete[] this->text;
    }
}

LCD::LCD(string n,const char * t):name(n)
{
    this->text = new char[strlen(t)];
    strcpy(this->text , t);
}

LCD::LCD(const LCD& t)
{
    cout<<"Copy Constructor \n";
    this->name = t.name;
    this->text = new char[strlen(t.text)];
    strcpy(this->text , t.text);
}

LCD::LCD(LCD && temp)
{
    this->name = move(temp.name);
    this->text = temp.text;
    temp.text = nullptr;
}
