#include "SEGMENT.hpp"

SEGMENT::SEGMENT()
{

}

SEGMENT::~SEGMENT()
{

}

void SEGMENT::Display_number(int number)
{
    m_number = number;
    cout<<"The number is : "<<m_number<<endl;
}

int SEGMENT::get_number()
{
    return (m_number);
}

bool SEGMENT::operator<(int number)
{
    if(m_number < number)
    {
        return true;        
    }
    else    
    {
        return false;
    }
}

bool SEGMENT::operator>(int number)
{
    if(m_number > number)
    {
        return true;        
    }
    else    
    {
        return false;
    }
}

int SEGMENT::operator>(const SEGMENT &temp)
{
    if(m_number > temp.m_number)
    {
        return m_number;
    }
    else
    {
        return temp.m_number;
    }
}

bool SEGMENT::operator==(const SEGMENT &temp)
{
    if(m_number == temp.m_number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SEGMENT::operator!=(const SEGMENT &temp)
{
    if(m_number != temp.m_number)
    {
        return true;
    }
    else
    {
        return false;
    }    
}


SEGMENT& SEGMENT::operator+=(int value)
{
    m_number+= value;
    return *this;
}

SEGMENT& SEGMENT::operator-=(int value)
{
    m_number-= value;
    return *this;
}

int SEGMENT::operator--()
{
    --m_number;
    return m_number;
}

int SEGMENT::operator--(int)
{
    int temp = m_number;
    m_number--;
    return temp;
}

int SEGMENT::operator&(int x)
{
    return (m_number&x);
}

int SEGMENT::operator<<(int x)
{
    return (m_number<<x);
}

ostream& operator<<(ostream & out,const SEGMENT& temp)
{
    out<<temp.m_number<<endl;
    return out;
}

int SEGMENT::operator++(int)
{
    int temp = m_number;
    m_number++;
    return temp;
}

int SEGMENT::operator++()
{
    ++m_number;
    return m_number;
}

// Functor Overloading
void SEGMENT::operator()(int x)
{
    cout<<"The [old] member number is : "<<m_number<<endl;
    m_number = x ;
    cout<<"The [new] member number is : "<<m_number<<endl;
}