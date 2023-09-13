#include <iostream>
using namespace std;
int x = 5; // x:lvalue - 5:rvalue


void fun1(int x)
{
    cout<<"Fun1 x = "<<x<<endl;
}

void fun2(int &x)
{
    cout<<"Fun2 x = "<<x<<endl;
}

void fun3(const int &x)
{
    cout<<"Fun3 x = "<<x<<endl;
}

int retfunc1()
{
    return x;
}

int& retfunc2()
{
    return x;
}

// move operator
void fun4(int && x)
{
    cout<<"Right value referance = "<<x<<endl;
}

void fun4(const int && x)
{
    cout<<"{const} Right value referance = "<<x<<endl;
}

int main()
{
    // int & y = 10; |This is an error 
    int & y = x; // y:lvalue referance - x:lvalue
    const int & z = 20; // z:const lvalue referance

    fun1(1);
    fun1(x);
    fun1(y);

//  fun2(1);   | Compilation Error we can't assign {rvalue} to {lvalue referance}
    fun2(x);
    fun2(y);

    fun3(1);
    fun3(x);
    fun3(y);

    
    int ret = retfunc1();
    // retfunc1() = 512; |Error: lvalue required as left operand of assignment 
    retfunc2() = 512;
    cout<<"retfunc2() = "<<retfunc2()<<endl;


    // Right value referance
    int l = 10;
    int && k = move(l);   // |Right value referance
    //| l and k : have the same address
    cout<<"The address of l = "<<&l<<"\nThe address of k = "<<&k<<endl;


    const int o = 47;
    fun4(36);
    fun4(move(l));
    fun4(move(o));

    return 0;
}