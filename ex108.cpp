#include <iostream>
int main()
{
    float cei, fah;

    std::cout << "Enter a degree Celcius: ";
    std::cin >> cei;
    fah = 1.8 * cei + 32;
    std::cout << "Degree Fahrenheit = " << fah << std::endl;

    return 0;
}