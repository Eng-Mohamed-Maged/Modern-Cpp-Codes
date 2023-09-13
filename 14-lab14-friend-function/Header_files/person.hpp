#ifndef _PERSON_HPP_
#define _PERSON_HPP_

#include <iostream>
#include <string>
using namespace std;


class person
{
   private:
        string name;
        string gender;
        int age;
        static int person_number;
   public:
        void set_name(string n);
        string get_name();
        void set_gender(string g);
        string get_gender();
        void set_age(int a);
        int get_age();
        void Display();
     
        //Friend Function
        friend void print(person p);
          
        person();
        person(string n , string g , int a);
        ~person();



};








#endif