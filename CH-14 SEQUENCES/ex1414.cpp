// Listing 14.14: Creating a simple list
#include <iostream>
#include <list>

int main()
{
  std::list<int> intList(5, 123);
  int kount = 0;
  std::list<int>::iterator iter;
  std::cout << std::endl;
  for (iter = intList.begin(); iter != intList.end(); iter++)
    std::cout << "\tElement #" << kount++ << ": "
              << *iter << std::endl;
  return 0;
}
