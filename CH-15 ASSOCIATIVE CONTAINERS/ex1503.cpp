// Listing 15.3: Removing elements anywhere within a set
#include <iostream>
#include <set>

int main()
{
  std::set<char> charSet;

  charSet.insert('E');
  charSet.insert('D');
  charSet.insert('C');
  charSet.insert('B');
  charSet.insert('A');

  // Display the contents of the set.
  std::cout << "\n\tContents of set:\n";
  std::set<char>::iterator iter;
  for (iter = charSet.begin(); iter != charSet.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  iter = charSet.begin();
  charSet.erase(++iter);

  std::cout << "\n\tContents of new set:\n";
  for (iter = charSet.begin(); iter != charSet.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  return 0;
}
