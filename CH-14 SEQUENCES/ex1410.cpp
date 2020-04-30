// Listing 14.10: Inserting elements anywhere within a deque
#include <iostream>
#include <deque>

int main()
{
  std::deque<char> charDeq;
  for (int x = 0; x < 10; ++x)
    charDeq.push_front(65 + x);

  std::cout << "\n\tOriginal deque : ";
  std::deque<char>::iterator iter;
  for (iter = charDeq.begin(); iter != charDeq.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  std::deque<char>::iterator start = charDeq.begin();
  charDeq.insert(start, 5, '$');

  std::cout << "\n\tResuitant deque: ";
  for (iter = charDeq.begin(); iter != charDeq.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;
  return 0;
}
