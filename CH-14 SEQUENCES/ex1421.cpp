// Listing 14.21: Stacking an array of integers
#include <iostream>
#include <iomanip>
#include <stack>

int main()
{
  int n;
  std::cout << "\n\tHow many integers? ";
  std::cin >> n;
  std::stack<int> intStk; // a stack of integers

  std::cout << "\n\t--- Pushing ---\n"; // push values onto the stack
  for (int i = 0; i < n; i++)
  {
    if ((i % 4) == 0)
      std::cout << std::endl;
    int rn = rand();
    std::cout << /* "\t" <<  */ std::setw(8) << rn;
    intStk.push(rn);
  }

  std::cout << "\n\n\t--- Popping ---\n";
  for (int j = 0; !intStk.empty(); j++)
  {
    if ((j % 4) == 0)
      std::cout << std::endl;
    std::cout << /* "\t" << */ std::setw(8) << intStk.top();
    intStk.pop();
  }
  std::cout << std::endl;
  return 0;
}
