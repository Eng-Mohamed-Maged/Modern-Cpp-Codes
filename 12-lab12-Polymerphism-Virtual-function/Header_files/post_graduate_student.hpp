#ifndef  _POST_G_STUDENT_
#define  _POST_G_STUDENT_

#include "../Header_files/student.hpp"


class post_g_student : public student 
{

    private:
        string research_interest;

    public:
        string get_research_interest();
        void Display();
        post_g_student(string n,string g,int a,int l,float GP ,string d,string re);

};






#endif