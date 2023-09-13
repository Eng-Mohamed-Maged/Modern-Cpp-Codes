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

        //Friend Class
        friend class Print_Class;
          
        person();
        person(string n , string g , int a);
        ~person();


};

class Print_Class
{
     private:
     public:
          void printC(person p)
          {
               cout<<"\n<< From Friend Class >> Person "<<p.person_number<<" info : \n";
               cout<<"Name  : "<<p.name<<"\n";
               cout<<"Gender: "<<p.gender<<"\n";
               cout<<"Age   : "<<p.age<<"\n";
          }
          Print_Class()
          {
          }
};







#endif