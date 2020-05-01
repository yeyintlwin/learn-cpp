// 15.5: Comparing sets
#include <iostream>
#include <set>

int main()
{
  // Create the first set object.
  std::set<char> charSet1;

  charSet1.insert('E');
  charSet1.insert('D');
  charSet1.insert('C');
  charSet1.insert('B');
  charSet1.insert('A');

  std::cout << "\n\tContents of first set:\n";
  std::set<char>::iterator iter;
  for (iter = charSet1.begin(); iter != charSet1.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  // Create the second set object.
  std::set<char> charSet2;

  charSet2.insert('J');
  charSet2.insert('I');
  charSet2.insert('H');
  charSet2.insert('G');
  charSet2.insert('F');

  std::cout << "\n\tContents of second set:\n";
  for (iter = charSet2.begin(); iter != charSet2.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  // Compare the sets.
  if (charSet1 == charSet2)
    std::cout << "\tset1 == set2";
  else if (charSet1 < charSet2)
    std::cout << "\tset1 < set2";
  else
    std::cout << "\tset1 > set2";
  std::cout << std::endl;

  return 0;
}
