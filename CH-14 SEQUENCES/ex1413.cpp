// Listing 14.13: Comparing deques
#include <iostream>
#include <deque>

int main()
{
  std::deque<char> charDeq1;
  for (int x = 0; x < 10; ++x)
    charDeq1.push_front(70 + x);

  std::deque<char> charDeq2;
  for (int x = 0; x < 10; ++x)
    charDeq2.push_front(65 + x);

  std::cout << "\n\tDeque 1: ";
  std::deque<char>::iterator iter;
  for (iter = charDeq1.begin(); iter != charDeq1.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  std::cout << "\n\tDeque 2: ";
  for (iter = charDeq2.begin(); iter != charDeq2.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  if (charDeq1 == charDeq2)
    std::cout << "\n\tdeque1 == deque2";
  else if (charDeq1 < charDeq2)
    std::cout << "\n\tdeque1 < deque2";
  else if (charDeq1 > charDeq2)
    std::cout << "\n\tdeque1 > deque2";
  std::cout << std::endl;
  
  return 0;
}
