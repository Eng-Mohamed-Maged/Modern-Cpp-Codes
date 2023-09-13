#include "LCD.hpp"
#include <iostream>
#include <string>

using namespace std;

LCD::LCD()
{

}

LCD::~LCD()
{

}
void LCD::set_text(string s)
{
    this->text = s; // this : mean that the assign is in member variable not in local or function argument
}

string LCD::get_text()
{
    return (this->text);
}

LCD& LCD::operator-(string m)
{
    string tmp{text};
    tmp.erase(tmp.find(m),m.length());
    this->text = tmp;
    return *this;
}

LCD& LCD::operator+(string m)
{
    this->text = this->text +" # "+m;
    return *this;
}

/*
string LCD::operator+(string m)
{
    this->text = this->text +' '+ m ;
    return this->text;
}
*/