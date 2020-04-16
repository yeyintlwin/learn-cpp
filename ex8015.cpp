// Listing 8.15: Overloading unary minus - operator
#include <iostream>
#include <cstring>

class amount
{
  int x;
  char ch[25];

public:
  amount(int i, char *d)
  {
    x = i;
    strcpy(ch, d);
  }
  void display() const
  {
    std::cout << "\n\t" << ch << ": " << x << " convert to";
  }
  int operator-() const
  {
    return -x;
  }
};

int main()
{
  amount obj1(1000, "APPLES");
  amount obj2(-50000, "ACCOUNT");

  obj1.display();
  std::cout << "\n\t" << -obj1 << std::endl;

  obj2.display();
  std::cout << "\n\t" << -obj2 << std::endl;

  return 0;
}
