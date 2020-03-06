#include <iostream>
int main()
{
    int num = 10;
    long int fac = 1;

    for (int i = 2; i <= num; i++)
        fac *= i;

    std::cout << "\nFactorial of " << num << " is " << fac << std::endl;

    return 0;
}