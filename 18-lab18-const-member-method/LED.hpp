#ifndef LED_HPP
#define LED_HPP


class LED
{
    private:
        const int x ; // Must be initialized within the class or constructor


    public:
        const int y;
        void Display();
        void Print() const;

         LED();
         LED(int x,int y);
        ~LED();

};

#endif