//GOTO statement.
#include <iostream>

int main()
{
  unsigned short int start, last, odds, sum = 0;
  //What is unsingned and signed?

  std::cout << "Enter start and last\n";
  std::cin >> start >> last;

  if (start % 2 != 0)
    odds = start;
  if (start % 2 == 0)
    odds = start + 1;

AGAIN:
  if (odds <= last)
  {
    sum += odds;
    odds += 2;
    goto AGAIN;
  }

  std::cout << "Sum of odd numbers " << start << " through " << last;
  std::cout << "\nequal " << sum << std::endl;
  return 0;
}
