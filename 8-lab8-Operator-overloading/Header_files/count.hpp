#ifndef _COUNT_HPP_
#define _COUNT_HPP_

#include <iostream>
#include <string>
using namespace std;


class count
{
    private:
            int counter;
    public:
            int get_count();
            // Prefix ++count
            count operator ++();
            // Prefix --count
            count operator --();

            //Postfix count++
            count operator ++ (int);

            //Postfix count--
            count operator -- (int);

            // count c3 = c1 + c2 
            count operator + (count c2);

            count();
            count(int c);
            ~count();
};











#endif