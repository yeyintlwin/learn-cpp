// Listing 14.8: Creating a simple deque
#include <iostream>
#include <deque>

int main()
{
  std::deque<int> intDeq(5, 1234);
  int kount = 0;
  std::deque<int>::iterator iter;
  std::cout << std::endl;
  for (iter = intDeq.begin(); iter != intDeq.end(); iter++)
    std::cout << "\tElement #" << kount++ << ": "
              << *iter << std::endl;
  return 0;
}
