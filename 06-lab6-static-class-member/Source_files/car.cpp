#include "../Header_files/car.hpp"

// For static class member 
int Car::number_Cars=0;

Car::Car(string mak,int mod,string col):maker(mak),model(mod),color(col)
{
    number_Cars++;
    cout<<getMaker()<<" \t\t "<<getModel()<<" \t\t "<<getColor()<<"\n";
    cout<<"Number of cars is : "<<number_Cars<<"\n";
}

Car::~Car()
{
    number_Cars--;
    cout<<"Number of cars is : "<<number_Cars<<"\n";
}

void Car::setMaker(string m)
{
    maker = m;
}
string Car::getMaker()
{
    return maker;
}

void Car::setModel(int m)
{
    model = m;
}

int Car::getModel()
{
    return model;
}

string Car::getColor()
{
    return color;
}