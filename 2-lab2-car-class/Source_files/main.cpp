#include <iostream>
#include "../Header_files/car.hpp"
using namespace std;

int main()
{
    Car car1("CAR1",2023,"Blue");
    Car car2("CAR2",2024,"Red");
    Car car3("CAR3",2025,"Green");

    car1.setMaker("TOYOTA");
    car1.setModel(2018);
    car2.setMaker("HONDAY");
    car2.setModel(2020);
    car3.setMaker("JOGUR");
    car3.setModel(2014);

    cout<<"====================================================================\n";
    cout<<"NAME \t\t MODEL \t\t \n";
    cout<<"====================================================================\n";
    cout<<car1.getMaker()<<" \t\t "<<car1.getModel()<<" \t\t \n";
    cout<<car2.getMaker()<<" \t\t "<<car2.getModel()<<" \t\t \n";
    cout<<car3.getMaker()<<" \t\t "<<car3.getModel()<<" \t\t \n";
    cout<<"====================================================================\n";



}