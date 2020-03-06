#include <iostream>

/*
* variable_name++ and ++variable_name are difference.
*/

int main()
{
    int kounter, oldCtr, newCtr;
    oldCtr = 1234;
    newCtr = ++oldCtr;
    kounter = newCtr--;

    std::cout << "oldCtr : " << oldCtr << std::endl;
    std::cout << "newCtr : " << newCtr << std::endl;
    std::cout << "kounter: " << kounter << std::endl;

    return 0;
}