// Listing 6.8: Using static members
#include <iostream>

class Apple
{

public:
  static int count;
  Apple()
  {
    count++;
  }
};

int Apple::count;

int main()
{
  Apple ap1;
  Apple ap2;
  Apple ap3;

  std::cout << "Apple count = " << Apple::count
            << std::endl;
  return 0;
}
