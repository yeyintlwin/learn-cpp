#include <iostream>

int fun1();
int fun2();
int fun3();

int main()
{
    int a = fun1() - (fun2() * fun3());
    std::cout << "\na: " << a << std::endl;

    return 0;
}

int fun1()
{
    std::cout << "\nfun1()" << std::endl;
    return 7;
}

int fun2()
{
    std::cout << "\nfun2()" << std::endl;
    return 2;
}

int fun3()
{
    std::cout << "\nfun3()" << std::endl;
    return 3;
}