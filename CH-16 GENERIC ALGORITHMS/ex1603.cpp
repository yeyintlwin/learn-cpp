// Listing 16.03: using the for_each() function
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

int main()
{
  // Create the set object.
  multiset<int, less<int>> intSet;

  // Populate the set with values.
  intSet.insert(10);
  intSet.insert(8);
  intSet.insert(1);
  intSet.insert(3);
  intSet.insert(8);
  intSet.insert(8);
  intSet.insert(5);

  // Display the contents of the set.
  cout << "\n\tContents od set:\n";
  for_each(intSet.begin(), intSet.end(), showVal);

  return 0;
}
