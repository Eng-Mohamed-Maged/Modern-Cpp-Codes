#ifndef SEGMENT_HPP
#define SEGMENT_HPP
#include <iostream>
using namespace std;

#include <ostream>

class SEGMENT
{
public:
    SEGMENT();
    ~SEGMENT();
    void Display_number(int number);
    int get_number();
    bool operator<(int number);
    bool operator>(int number);
    int operator>(const SEGMENT &temp);
    bool operator==(const SEGMENT &temp);
    bool operator!=(const SEGMENT &temp);
    SEGMENT& operator+=(int value);  // SEGMENT& : // Chaining the operator+= calls
    SEGMENT& operator-=(int value);
    int operator++();
    int operator++(int);
    int operator--();
    int operator--(int);
    int operator&(int x);
    int operator<<(int x);

    friend ostream& operator<<(ostream & out,const SEGMENT& temp);
    // Functor Overloading
    void operator()(int x);

private:
        int m_number;
        int temperary;

};

#endif