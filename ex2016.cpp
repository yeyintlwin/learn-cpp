#include <iostream>

struct height
{
  int feet;
  float inches;
};

void convr(height h)
{
  std::cout << h.feet << "\'-"
            << h.inches << "\"" << std::endl;
}

int main()
{
  height myHeight;

  std::cout << "Enter feet: ";
  std::cin >> myHeight.feet;
  std::cout << "Enter inches: ";
  std::cin >> myHeight.inches;

  convr(myHeight);

  return 0;
}
