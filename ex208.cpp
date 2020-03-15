// Listing 2.8: This program swap
// two arguements passed by referene.
#include <iostream>

void swap(int &, int &);

int main()
{
    int a, b;

    std::cout << "Enter a and b\n";
    std::cin >> a >> b;

    std::cout << "\nBEFORE: a = " << a << "\t\tb = " << b;

    swap(a, b);

    std::cout << "\nAFTER : a = " << a << "\t\tb = " << b << std::endl;

    return 0;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}