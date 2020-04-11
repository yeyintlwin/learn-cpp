// Listing 7.13: More on arrays of objects
#include <iostream>

const int MAX = 50;

class Length
{
  int feet;
  float inches;

public:
  void getLength()
  {
    std::cout << "\nEnter feet : ";
    std::cin >> feet;
    std::cout << "\nEnter inches : ";
    std::cin >> inches;
  }
  void showLength()
  {
    std::cout << feet << "\'-" << inches << '\"';
  }
};

int main()
{
  Length piece[MAX];
  int count = 0;
  char code;
  std::cout << std::endl;
  do
  {
    std::cout << "Enter piece number " << count + 1;
    piece[count++].getLength();
    std::cout << "Enter another (y/n)? ";
    std::cin >> code;
  } while (code != 'n');

  for (int i = 0; i < count; i++)
  {
    std::cout << "\nPiece number " << i + 1 << " is ";
    piece[i].showLength();
  }
  std::cout << std::endl;
  return 0;
}
