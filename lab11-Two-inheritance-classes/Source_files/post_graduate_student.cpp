#include "../Header_files/post_graduate_student.hpp"


string post_g_student::get_research_interest()
{
    return research_interest;
}

void post_g_student::Display()
{
    student::Display();
    cout<<"ResearchI     : "<<research_interest<<"\n";

}
post_g_student::post_g_student(string n,string g,int a,int l,float GP ,string d,string re):student(n,g,a,l,GP,d),research_interest(re)
{

}

