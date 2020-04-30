// Listing 14.17: Removing elements from a list
#include <iostream>
#include <list>

int main()
{
  std::list<char> charList;
  for (int x = 0; x < 7; ++x)
    charList.push_back(65 + x);

  std::cout << "\n\tOriginal list : ";
  std::list<char>::iterator iter;
  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  charList.remove('E');
  charList.remove('B');
  std::cout << "\n\tReultantlist : ";
  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  return 0;
}
