#include <iostream>

const int MAX = 100;
char ch;
int k = 0;
float fx[MAX];

int main()
{
  float *fxp = fx;

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
    sum += *(fxp++);
  float avg = sum / k;

  std::cout << std::endl
            << "Average = " << avg << std::endl;
  return 0;
}
