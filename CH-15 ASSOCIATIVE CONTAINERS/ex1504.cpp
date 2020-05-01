// Listing 15.4: Searching a set
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

  std::cout << "\n\tContents of set:\n";
  std::set<char>::iterator iter;
  for (iter = charSet.begin(); iter != charSet.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  // Find the D
  iter = charSet.find('D');
  if (iter == charSet.end())
    std::cout << "\n\tElement not found.";
  else
    std::cout << "\n\tElement found: " << *iter;
  std::cout << std::endl;
  return 0;
}
