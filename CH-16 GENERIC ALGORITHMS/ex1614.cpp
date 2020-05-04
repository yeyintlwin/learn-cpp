// Listing 16.14: Using the partial_sum() function

/**
 * Example
 * 
 * if:
 * v = {2, 3, 4, 5, 6}
 * 
 * partial sum of v:
 * {2, 3 + 2, 4 + (3+2), 5 + (4+3+2), 6 + (5+4+3+2)}
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
  vector<int> intVector2(4);

  // Populate the vector.
  for (int x = 2; x < 7; ++x)
    intVector1.push_back(x);

  // Display the contents of vector.
  cout << "\n\tContents of vector1:\n";
  for_each(intVector1.begin(), intVector1.end(), showVal);

  // Calculate the partial sum.
  partial_sum(intVector1.begin(), intVector1.end(), intVector2.begin());

  // Display the contents of the resultant vector.
  cout << "\n\tContents of vector2:\n";
  for_each(intVector2.begin(), intVector2.end(), showVal);

  return 0;
}
