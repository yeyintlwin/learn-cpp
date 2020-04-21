// Listing 1.7: Using an enumerated constant
#include <iostream>
int main()
{
    enum Days
    {
        Sun,
        MOn,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    int choice;

    std::cout << "Enter a day (0-6): ";
    std::cin >> choice;

    if (choice == Sun || choice == Sat)
        std::cout << "\nIt's a weekend day.\n";
    else
        std::cout << "\nIt's a weekday.\n";
    return 0;
}