// Listing 14.9: Adding elements to a deque
#include <iostream>
#include <deque>

int main()
{
  std::deque<char> charDeq;
  int kount = 0;
  for (int i = 0; i < 5; ++i)
    charDeq.push_front(65 + i);

  std::deque<char>::iterator iter;
  std::cout << std::endl;
  for (iter = charDeq.begin(); iter != charDeq.end(); iter++)
    std::cout << "\tElement #" << kount++ << ": "
              << *iter << std::endl;
  return 0;
}
