// Listing 14.11: Removing elements from a deque
#include <iostream>
#include <deque>

int main()
{
  std::deque<char> charDeq;
  for (int x = 0; x < 10; ++x)
    charDeq.push_front(70 + x);

  int size = charDeq.size();
  std::cout << std::endl;

  for (int x = 0; x < size; ++x)
  {
    charDeq.pop_back();
    std::cout << '\t';
    std::deque<char>::iterator iter;
    for (iter = charDeq.begin(); iter != charDeq.end(); iter++)
      std::cout << *iter;
    std::cout << std::endl;
  }

  return 0;
}
