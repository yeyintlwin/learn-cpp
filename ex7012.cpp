// Listing 7.12: Arrays of objects

#include <iostream>
const int N = 15;

class temprs
{
  int cel;

public:
  int setCel(int n)
  {
    cel = -40 + n * 10;
    return cel;
  }
  float getFah()
  {
    return 1.8 * cel + 32;
  }
};

int main()
{
  temprs obj[N];

  std::cout << "    ---------------------\n";
  std::cout << "      CELSIUS FAHRENHEIT\n";
  std::cout << "    ---------------------\n";

  for (int i = 0; i < N; i++)
  {
    std::cout.setf(std::ios::fixed);
    std::cout.width(10);
    std::cout.precision(2);
    std::cout << obj[i].setCel(i);
    std::cout.width(11);
    std::cout << obj[i].getFah();
    std::cout << std::endl;
  }

  return 0;
}
