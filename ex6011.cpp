// Listing 6.11: More overloaded constructors
#include <iostream>

class Length
{
  int feet;
  float inches;

public:
  Length() {}
  Length(int ft, float in)
  {
    feet = ft;
    inches = in;
  }
  void getLength()
  {
    std::cout << "\nEnter feet : ";
    std::cin >> feet;
    std::cout << "\nEnter inches : ";
    std::cin >> inches;
  }

  void showLength()
  {
    std::cout << feet << "\'-" << inches << "\"" << std::endl;
  }

  void addLength(Length x, Length y)
  {
    inches = x.inches + y.inches;
    feet = 0;
    if (inches >= 12.0)
    {
      inches -= 12.0;
      feet++;
    }
    feet += x.feet + y.feet;
  }
};

int main()
{
  Length p1, total;
  Length p2(11, 6.25);
  p1.getLength();
  total.addLength(p1, p2);

  std::cout << "\nPiece1 = ";
  p1.showLength();

  std::cout << "\nPiece2 = ";
  p2.showLength();

  std::cout << "\nTotal Length = ";
  total.showLength();
  return 0;
}
