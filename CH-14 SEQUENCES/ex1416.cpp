// Listing 14.16: Inserting elements anywhere within a list
#include <iostream>
#include <list>

int main()
{
  std::list<char> charList;
  for (int x = 0; x < 10; ++x)
    charList.push_front(65 + x);

  std::cout << "\n\tOriginal list : ";
  std::list<char>::iterator iter;
  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  std::list<char>::iterator start = charList.begin();
  charList.insert(++start, 5, ' '); //

  std::cout << "\n\tResultant list: ";
  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;
  return 0;
}
