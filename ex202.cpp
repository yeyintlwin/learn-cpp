#include <iostream>

void starline();

int main(int argc, char const *argv[])
{
    std::cout << "Data Type     Range" << std::endl;
    starline();
    std::cout << "char          -128 to 127" << std::endl;
    std::cout << "int           -32,768 to 32,767" << std::endl;
    std::cout << "double        -2,147,438,648 to 2,147,438,647" << std::endl;
    starline();

    return 0;
}

void starline()
{
    for (int i = 0; i < 40; i++)
        std::cout << "*";
    std::cout << std::endl;
}