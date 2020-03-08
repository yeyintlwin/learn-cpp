#include <iostream>

int main()
{
    int a = 0;
    while (a < 9)
    {
        std::cout << a << " ";
        ++a;
    }
    std::cout << std::endl;

    int b = 0;

    do
    {
        std::cout << b << " ";
        ++b;
    } while (b < 9);
    std::cout << std::endl;

    return 0;
}