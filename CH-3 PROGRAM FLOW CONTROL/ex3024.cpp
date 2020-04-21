// Listing 3.24: This program creates the equivalent of
// a four-function calculator. The program would request
// the user to enter a number, an operator, and another number.

#include <iostream>

int main()
{
  double num1, num2, ans;
  char opr, ch;

  do
  {
    std::cout << "\nEnter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator: ";
    std::cin >> opr;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (opr)
    {
    case '+':
      ans = num1 + num2;
      break;
    case '-':
      ans = num1 - num2;
      break;
    case '*':
      ans = num1 * num2;
      break;
    case '/':
      ans = num1 / num2;
      break;
    default:
      ans = 0;
    }

    std::cout << num1 << opr << num2 << " = " << ans << std::endl;
    std::cout << "\nDo you want another (y/n)? ";
    std::cin >> ch;
  } while (ch != 'n');

  std::cout << std::endl;
  return 0;
}
