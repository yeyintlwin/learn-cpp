// Listing 14.22: Managing a que
#include <iostream>
#include <list>
#include <queue>

int main()
{
  std::queue<int, std::list<int>> intQue;
  std::cout << "\n\tValues pushed onto queue:\n";
  for (int x = 1; x < 7; ++x)
  {
    intQue.push(x * 100);
    std::cout << '\t' << x * 100 << std::endl;
  }

  std::cout << "\n\tValues removed from queue:\n";
  int size = intQue.size();

  for (int x = 0; x < size; ++x)
  {
    std::cout << '\t' << intQue.front() << std::endl;
    intQue.pop();
  }
  std::cout << std::endl;
  return 0;
}
