#ifndef _ADD_HPP_
#define _ADD_HPP_

#include <iostream>
#include <string>
using namespace std;

class Calculator
{
    public:
            static int add(int num1,int num2);
            static int add(int num1,int num2,int num3);
            static float add(float num1,float num2);
            static string add(string a , string b);
            Calculator();
            ~Calculator();

};












#endif