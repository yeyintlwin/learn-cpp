// Listing 14.18: Removing elements anywhere within a list
#include <iostream>
#include <list>

int main()
{
  std::list<char> charList;

  for (int x = 0; x < 10; ++x)
    charList.push_front(65 + x);
  std::list<char>::iterator iter;
  std::cout << '\t';
  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  std::list<char>::iterator start = charList.begin();
  charList.erase(++start); //
  std::cout << '\t';
  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;
  return 0;
}
