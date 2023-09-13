#ifndef _ADD_HPP_
#define _ADD_HPP_

#include <iostream>
#include <string>
using namespace std;

class Calculator
{
    public:
            int add(int num1,int num2);
            int add(int num1,int num2,int num3);
            float add(float num1,float num2);
            string add(string a , string b);
            Calculator();
            ~Calculator();

};












#endif