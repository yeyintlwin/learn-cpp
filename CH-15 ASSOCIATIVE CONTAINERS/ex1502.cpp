// Listing 15.2: Adding char elements to a set
#include <iostream>
#include <set>

int main()
{
  std::set<char> charSet;
  charSet.insert('C');
  charSet.insert('E');
  charSet.insert('B');
  charSet.insert('D');
  charSet.insert('A');

  std::cout << "\n\tContents of set:\n";
  std::set<char>::iterator iter;
  for (iter = charSet.begin(); iter != charSet.end(); iter++)
    std::cout << '\t' << *iter << std::endl;
  return 0;
}
