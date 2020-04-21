// Listing 2.7: This program reads a lowercase character,
// converts it to uppercase and than writes out
// the uppercase equivalent.
#include <iostream>

void lower_to_upper(char c1, char &c2)
{
    c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a') : c1;
}

int main()
{
    char lower, upper;
    std::cout << "Enter a lower character\n";
    std::cin >> lower;
    lower_to_upper(lower, upper);
    std::cout << "\nThe uppercase equivalent is " << upper << std::endl;

    return 0;
}