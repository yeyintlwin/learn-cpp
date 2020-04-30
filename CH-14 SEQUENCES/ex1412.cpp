// Listing 14.12: Removing elements anywhere within a deque
#include <iostream>
#include <deque>

int main()
{
  std::deque<char> charDeq;
  for (int x = 0; x < 5; ++x)
    charDeq.push_front(65 + x);
  int size = charDeq.size();
  std::cout << std::endl;
  for (int x = 0; x < size; ++x)
  {
    std::deque<char>::iterator start = charDeq.begin();
    charDeq.erase(start);

    std::cout << '\t';
    std::deque<char>::iterator iter;
    for (iter = charDeq.begin(); iter != charDeq.end(); iter++)
      std::cout << *iter;
    std::cout << std::endl;
  }
  return 0;
}
