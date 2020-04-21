// Listing 4.4: This program reads the numbers that
// you type in, and store them in an array. The program
// would average them and display the result.

#include <iostream>

const int MAX = 100;
char ch;
int k = 0;
float fx[MAX];

int main()
{
  for (int i = 0; i < MAX; i++)
  {
    std::cout << "Enter number: ";
    std::cin >> *(fx + k++);
    std::cout << "Enter another (Y/N)?";
    std::cin >> ch;
    if (ch != 'Y')
      break;
  }

  float sum = 0;
  for (int i = 0; i < k; i++)
    sum += *(fx + i);
  float avg = sum / k;

  std::cout << std::endl
            << "Average = " << avg << std::endl;
  return 0;
}
