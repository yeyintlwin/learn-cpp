// Listing 14.7: Sorting a vector of integers
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

// TODO: Fix this program.
// It has an error in display.

int main()
{
  int n;
  int i;
  std::cout << "\n\tHow many integers? ";
  std::cin >> n;

  std::vector<int> intVec;

  for (i = 0; i < n; i++)
    intVec.insert(intVec.end(), rand());

  std::cout << "\n\t--- Unsorted ---\n";
  std::vector<int>::iterator iter;
  int k = 0;

  for (iter = intVec.begin(); iter != intVec.end(); iter++)
  {
    if ((k % 4) == 0)
      std::cout << std::endl;
    k++;
    std::cout << /*'\t' <<*/ std::setw(8) << *iter;
  }

  std::cout << "\n\n\t--- Sorted ---\n";
  sort(intVec.begin(), intVec.end()); // <<<<<<<<<<<<<<

  for (iter = intVec.begin(); iter != intVec.end(); iter++)
  {
    if ((k % 4) == 0)
      std::cout << std::endl;
    k++;
    std::cout << /* '\t' <<*/ std::setw(8) << *iter;
  }

  std::cout << std::endl;
  return 0;
}
