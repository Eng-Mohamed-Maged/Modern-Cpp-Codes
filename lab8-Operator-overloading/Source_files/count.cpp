#include "../Header_files/count.hpp"



int count::get_count()
{
    return counter;
}
// Prefix ++count
count count::operator ++ ()
{
    ++counter;
    return count(counter);
}
// Prefix --count
count count::operator -- ()
{
    --counter;
    return count(counter);
}


//Postfix count++
count count::operator ++ (int)
{
    int temp = counter;
    counter++;
    return temp;
}

//Postfix count--
count count::operator -- (int)
{
    int temp = counter;
    counter--;
    return temp;
}

count count::operator + (count c2)
{
    int c = counter + c2.counter;
    return count(c);
}


count::count():counter(0)
{

}
count::count(int c):counter(c)
{

}
count::~count()
{

}