// Listing 6.9: Using static member functon
#include <iostream>

class Apple
{
public:
  static int count;
  Apple()
  {
    count++;
  };
  static void displayCount()
  {
    std::cout << "Apple count = "
              << Apple::count << std::endl;
  }
};

int Apple::count;

int main()
{
  Apple ap1;
  Apple ap2;
  Apple ap3;

  Apple::displayCount();
  return 0;
}
