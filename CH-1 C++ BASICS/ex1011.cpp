// Listing 1.11: Using a compound operator
#include <iostream>
int main()
{
    int i, num;
    long int fac;

    std::cout << "\nEnter a number: ";
    std::cin >> num;

    fac = 1;
    for (i = 2; i <= num; i++)
        fac *= i;

    std::cout << "\nFactorial of " << num << " is " << fac << std::endl;
    
    return 0;
}