#include "../Header_files/car.hpp"

Car::Car(string mak,int mod,string col):maker(mak),model(mod),color(col)
{
    cout<<getMaker()<<" \t\t "<<getModel()<<" \t\t "<<getColor()<<"\n";
    cout<<"Constructor is intialized \n";
}

Car::~Car()
{
    cout<<"The object lifetime is ended \n";
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