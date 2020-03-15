// Listing 4.2: Lising a pointer, this program 
// counts form 10 to 1 displaying the numbers
// followed by BOOM!.

#include <iostream>

int main()
{
  int countDown;
  int *countDownPointer = &countDown;

  for (countDown = 10; countDown > 0; countDown--)
    std::cout << *countDownPointer << ", ";
  std::cout << "BOOM!" << std::endl;
  return 0;
}
