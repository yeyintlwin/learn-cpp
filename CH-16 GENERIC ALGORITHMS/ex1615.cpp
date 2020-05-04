// Listing 16.15: Using the adjacent_difference() function

/**
 * Example
 * 
 * if:
 * v = {3, 4, 12, 6, 10}
 * 
 * partial difference of v:
 * {3, 4-3, 12-4, 6-12, 10-6}
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

int main()
{
  // Create the vector objects.
  vector<int> intVector1;
  vector<int> intVector2(5);

  // Populate the vector.
  intVector1.push_back(3);
  intVector1.push_back(4);
  intVector1.push_back(12);
  intVector1.push_back(6);
  intVector1.push_back(10);

  // Display the contents of the vector.
  cout << "\n\tContents of vector1:\n";
  for_each(intVector1.begin(), intVector1.end(), showVal);
  cout << endl;

  // Calculate the partial sum.
  adjacent_difference(intVector1.begin(), intVector1.end(), intVector2.begin());

  // Display the contents of the resultant vector.
  cout << "\n\tContents of vector2:\n";
  for_each(intVector2.begin(), intVector2.end(), showVal);
  cout << endl;

  return 0;
}
