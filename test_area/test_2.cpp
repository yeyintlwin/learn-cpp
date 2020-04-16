#include <iostream>

int main()
{
    int num, i = 1;

    std::cout << "Enter a number\n";
    std::cin >> num;
    std::cout << "Prime factors of " << num << " is\n";

    do
    {
        i++;

        if (num % i == 0)
            std::cout << i << " ";

    } while (!(i >= num));

    std::cout << std::endl;

    return 0;
}