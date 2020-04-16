// Listing 8.5: Overloading arithmetic + and - operators
#include <iostream>

class Length
{
  int feet;
  float inches;

public:
  Length()
  {
    feet = 0;
    inches = 0.0;
  }

  Length(int ft, float in)
  {
    feet = ft;
    inches = in;
  }
  void getLength()
  {
    std::cout << "Enter feet: ";
    std::cin >> feet;
    std::cout << "Enter inches: ";
    std::cin >> inches;
  }
  void showLength()
  {
    std::cout << feet << "\'-" << inches << '\"';
  }
  Length operator+(Length x)
  {
    int f = feet + x.feet;
    float i = inches + x.inches;
    if (i >= 12.0)
    {
      i -= 12.0;
      f++;
    }
    return Length(f, i);
  }
  Length operator-(Length x)
  {
    int f = feet - x.feet;
    float i = inches - x.inches;
    if (i < 0)
    {
      i += 12.0;
      f--;
    }
    return Length(f, i);
  }
};

int main()
{
  Length L1, L3, L4;
  std::cout << "Enter length for L1\n";
  L1.getLength();
  Length L2(11, 6.25);
  std::cout << "For Length2, length = ";
  L2.showLength();
  std::cout << std::endl;
  L3 = L1 - L2;
  L4 = L1 + L2 + L3;

  std::cout << "\nLength1 = ";
  L1.showLength();

  std::cout << "\nLength2 = ";
  L2.showLength();

  std::cout << "\nLength3 = ";
  L3.showLength();

  std::cout << "\nLength4 = ";
  L4.showLength();
  std::cout << std::endl;

  return 0;
}
