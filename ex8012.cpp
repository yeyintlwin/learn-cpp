// Listing 8.12: Using the overloaded relational < operator
#include <iostream>

bool TRUE = 1, FALSE = 0;

class Length
{
  int feet;
  float inches;

public:
  Length()
  {
    feet = 0;
    inches = 0;
  }
  Length(int ft, float in)
  {
    feet = ft;
    inches = in;
  }
  void getLength()
  {
    std::cout << "\n\tEnter feet : ";
    std::cin >> feet;
    std::cout << "\tEnter inches : ";
    std::cin >> inches;
  }
  void showLength()
  {
    std::cout << feet << "\'-" << inches << '\"';
  }

  bool operator<(Length L)
  {
    float f1 = feet + inches / 12;
    float f2 = L.feet + L.inches / 12;
    return (f1 < f2) ? TRUE : FALSE;
  }
};

int main()
{
  Length L1;
  std::cout << "\nFor length L1";
  L1.getLength();
  Length L2(10, 5.5);
  std::cout << "\n\tL1 = ";
  L1.showLength();
  std::cout << "\n\tL2 = ";
  L2.showLength();
  if (L1 < L2)
    std::cout << "\n\tL1 is less than L2\n";
  else
    std::cout << "\n\tL1 is greater than L2\n";
  return 0;
}
