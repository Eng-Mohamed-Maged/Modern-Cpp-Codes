#include <iostream>
using namespace std;

class Rectangle
{
    private:
            float Length;
            float Width;

    public:
            void set_Length(float len)
            {
                if(len > 0)
                    Length = len ;
                else
                    cout<<"Error , Please enter postive length \n";
            }
            float get_Length(void)
            {
                return Length;
            }
            void set_Width(float w)
            {
                if(w > 0)
                    Width = w ;
                else
                    cout<<"Error , Please enter postive Width \n";
            }
            float get_Width(void)
            {
                return Width;
            }
            float get_Area(void)
            {
                return (Length * Width);
            }
};

int main()
{
    Rectangle box ;
    float l;
    float w;
    cout<<"Enter the length of rectangle : ";
    cin>>l;
    box.set_Length(l);
    cout<<"Enter the width of rectangle : ";
    cin>>w;
    box.set_Width(w);
    cout<<"Length of the box is : "<<box.get_Length()<<endl;
    cout<<"Width of the box is : "<<box.get_Width()<<endl;
    cout<<"The area of the box : "<<box.get_Area()<<"\n";
    return 0;
}