// Listing 1.2: Using a bool variable.
#include <iostream>
int main()
{
    bool flag;
    flag = 5 < 100;
    if (flag)
        std::cout << "\"5 < 100\" is TRUE" << std::endl;
    return 0;
}