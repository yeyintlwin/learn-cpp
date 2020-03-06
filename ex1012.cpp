#include <iostream>
int main()
{
    float num1, num2, num3, largst;

    std::cout << "\nEnter three numbers\n";
    std::cin >> num1 >> num2 >> num3;

    largst = num1 > num2 ? num1 : num2;
    largst = largst > num3 ? largst : num3;

    std::cout << "\nLargest number is " << largst << std::endl;
    return 0;
}