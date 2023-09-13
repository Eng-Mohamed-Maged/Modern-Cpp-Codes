#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_
#include "../Header_files/person.hpp"

class student : public person
{
    private:
        int level;
        float GPA;
        string department;
    public:
        void set_level(int l);
        int get_level();
        void set_GPA(float g);
        float get_GPA();
        void set_department(string d);
        string get_department();
        student(string n,string g,int a,int l,float GP ,string d);
};









#endif