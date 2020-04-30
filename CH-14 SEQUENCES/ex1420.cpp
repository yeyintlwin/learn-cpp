// Listing 14.20: Managing a stack
#include <iostream>
#include <list>
#include <stack>

int main()
{
  std::stack<int, std::list<int>> intStack;

  std::cout << "\n\tValues pushed onto stack:\n";
  for (int x = 1; x < 7; ++x)
  {
    intStack.push(x * 100);
    std::cout << '\t' << x * 100 << std::endl;
  }

  std::cout << "\n\tValues popped from stack:\n";
  int size = intStack.size();
  for (int x = 0; x < size; ++x)
  {
    std::cout << '\t' << intStack.top() << std::endl;
    intStack.pop();
  }
  std::cout << std::endl;
  return 0;
}
