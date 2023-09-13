#ifndef _CAR_HPP
#define _CAR_HPP

#include <iostream>
#include <string>
using namespace std;
class Car
{
    private:
        string maker;
        int model;
        string color;
        static int number_Cars;

    public:
        void setMaker(string m);
        string getMaker();
        void setModel(int m);
        int getModel();
        string getColor();
        Car(string mak,int mod,string col);
        ~Car();
};









#endif