// Listing 3.8: This program demonstrates a complex,
// nested if statement.

#include <iostream>

int main()
{
  int num1, num2;

  std::cout << "Enter two numbers\nFirst: ";
  std::cin >> num1;
  std::cout << "Second: ";
  std::cin >> num2;

  if (num1 >= num2)
  {
    if (num1 % num2 == 0)
    {
      if (num1 == num2)
        std::cout << "They are the same.\n";
      else
        std::cout << "They are evenly devisible.\n";
    }
    else
      std::cout << "They are not evenly devisible.\n";
  }
  else
    std::cout << "The second one is larger.\n";

  return 0;
}
