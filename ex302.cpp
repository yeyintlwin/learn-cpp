#include <iostream>
#include <cmath>

int main()
{
  int num;

  std::cout << "Enter a number\n";
  std::cin >> num;

  if (num) //0 is equal boolean value false.
  {
    std::cout << num << " cubed is " << pow(num, 3) << std::endl;
    return 0; //<<
  }

  std::cout << "You chose not to compute\n";
  return 0;
}
